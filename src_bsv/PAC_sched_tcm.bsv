//Code that takes the instuction from Processor and dispatches reduced instruction to coproc

package PAC_sched_tcm;
//====================================================================================================
//Library imports
import PAClib :: * ;
import StmtFSM :: *;
import Vector::*;
import FIFOF        :: *;
import FIFO        :: *;
import SpecialFIFOs :: *;
import GetPut       :: *;
import ClientServer :: *;
import FloatingPoint :: *;
import BRAMCore         :: *;
import BRAM		:: *;

//=====================================================================================================
//Project imports
import PositCore_Types :: *;
import Posit_Numeric_Types :: *;
import Posit_User_Types :: *;
import PositCoreCoproc_Sched ::*;
import Quire_Adder	::*;	


//=====================================================================================================
//Type definitions
typedef 64 TCM_XLEN;	//	length of TCM_Word
typedef Bit #(TCM_XLEN)		TCM_Word;
typedef TDiv #(TCM_XLEN, 8)   Bytes_per_TCM_Word;	//8 bits per byte
typedef 16 TCM_ADDR;								//TCM address length
typedef Bit #(TCM_ADDR)		Addr;
Integer bytes_per_tcm_word        = valueOf (Bytes_per_TCM_Word);

// TCM Sizing
//-------------------------------------------
 Integer kB_per_TCM = 'h4;         // 4KB
//   Integer kB_per_TCM = 'h40;     // 64KB
// Integer kB_per_TCM = 'h80;     // 128KB
// Integer kB_per_TCM = 'h400;    // 1 MB
// Integer kB_per_TCM = 'h4000;    // 16 MB
Integer bytes_per_TCM = kB_per_TCM * 'h400;
//-------------------------------------------

Integer mem_size = ((bytes_per_TCM + bytes_per_tcm_word - 1) / bytes_per_tcm_word);	//an Integer specifying the memory size in number of words of type data.		
//Integer mem_size = 2048;				//No. of TCM words


typedef enum {RST_Q, DOT_V, DOT_P, RD_Q, RD_Q_P, GEMV_P, GEMV} Instr_Cmds deriving (Bits, Eq, FShow);
/* 
RST_Q	: clears all the quires in Melodicas and the quire adder
DOT_V	: computes dot product of vectors extracting values from instruction  -- not implemented
DOT_P	: computes dot product of vectors by reading from the pointers (left as pps)
GEMV_P	: Computes Matrix*vector and partial products stay in respective quires of Melodicas
GEMV	: Finishes the Quire addition 
RD_Q_P	: Finishes quire addition of partial products and returns final quire value
RD_Q	: Returns the value in Quire accumulator
*/

typedef Bit #(TCM_ADDR) Mem_addr;

typedef Bit #(128) Vec_len;

//typedef 8 PositWidth;

typedef 2 N_melodica; 			// No. of Melodicas

typedef TDiv#(TCM_XLEN,PositWidth) Vec_size;	// # of posits per TCM word

typedef TDiv#(Vec_size, N_melodica) Op_count; // 32

typedef enum {INIT, FETCH, DISPATCH, RE_DISPATCH, READ_DISPATCH, OUT, Q_FNL} State deriving (Bits,Eq, FShow);

typedef Tuple7#(Instr_Cmds, Mem_addr, Vec_len, Vec_len, Mem_addr, Vec_len, Vec_len)   Instruction; 
/* Instruction decodes as:
Instr_Cmds(1)	: opcode like RST_Q, GEMV, GEMV_P
Mem_addr(2)		: starting addr of A in TCM_A  -- TCM_A populated in row major format
Vec_len(3)		: # of posits in a row of A (columns in A)
Vec_len(4)		: No. of rows in A
Mem_addr(5)		: starting addr of B in TCM_B  -- TCM_B populated in column major format
Vec_len(6)		: # of posits in a row of B (columns in B)
Vec_len(7)		: No. of rows in B
*/
//=============================================================================================================

interface Scheduler_IFC;
   interface Server #(Instruction, Bit#(QuireWidth)) server_sched;
endinterface

(* synthesize *)
module mkSched (Scheduler_IFC);
Reg#(Bit#(128)) count <- mkReg(0);	
Reg#(Bit#(TCM_ADDR)) pointer_A <- mkRegU;
Reg#(Bit#(TCM_ADDR)) pointer_B <- mkRegU;
Reg#(Bit#(TCM_ADDR)) addr_B <- mkRegU;
//Reg#(Instr_Cmds) rg_opcode <- mkRegU;
Reg#(Bit#(128)) lines <- mkRegU;
Reg#(Bit#(128)) pointer_lines <- mkRegU;
Reg#(Bit#(128)) col_len_A <- mkRegU;
Reg#(Bit#(128)) col_len_A_dummy <- mkRegU;
Reg#(State) reg_status <- mkReg(INIT);
FloatingPoint::RoundMode round_mode = Rnd_Nearest_Even;

Reg #(Bit#(QuireWidth))  rg_quire   <- mkReg(0);

FIFOF #(Instruction) ffO_Instr <- mkSizedFIFOF(1);
FIFOF #(Vector #(N_melodica, Bit#(QuireWidth))) ffO_result <- mkSizedFIFOF(1);

Vector#(N_melodica,PositCore_IFC_accel) melodica <- replicateM(mkPositCore_accel_sched(4'b0));	//Vector of Melodicas

PositCore_IFC_accel positCore_accel_sched <- mkPositCore_accel_sched(4'b1);

Quire_Adder_IFC q_adder <- mkQuire_Adder(rg_quire);

// BRAM config constants
Bool config_output_register_BRAM = False;    // i.e., no output register
Bool load_file_is_binary_BRAM = False;       // file to be loaded is in hex format

 BRAM_DUAL_PORT #(Addr, TCM_Word) tcm_A <- mkBRAMCore2Load (mem_size, config_output_register_BRAM, "hex1.hex", load_file_is_binary_BRAM);

 BRAM_DUAL_PORT #(Addr, TCM_Word) tcm_B <- mkBRAMCore2Load (mem_size, config_output_register_BRAM, "hex1.hex", load_file_is_binary_BRAM);

let a_fd = tcm_A.a;
let a_bd = tcm_A.b;
let b_fd = tcm_B.a;
let b_bd = tcm_B.b;


module [Module] mkPipe_to_Server
                #(Pipe #(ta, tb) pipe)
                (Server #(ta, tb))
        provisos (Bits #(ta, wd_ta));

   FIFOF #(ta)   fifof  <- mkSizedFIFOF(1);
   PipeOut #(tb) serverPipe <- pipe (f_FIFOF_to_PipeOut (fifof));

   return (interface Server;
              interface Put request  = toPut (fifof);
              interface Get response = toGet (serverPipe);
           endinterface);
endmodule: mkPipe_to_Server



//---------------------Pipeline functions (PAC lib)--------------------------------------------------------------

function Vector #(Vec_size, Bit#(PositWidth)) fn_unpack (Bit#(TCM_XLEN) a);
	return unpack(a);
endfunction

function Pipe #(Bit#(TCM_XLEN), Vector #(Vec_size, Bit#(PositWidth))) mkUnpack ();	//function converted into pipe
	let unpacker = mkFn_to_Pipe (fn_unpack);
	return unpacker;
endfunction

function Pipe #(Vector #(Vec_size, Bit#(PositWidth)), Vector #(N_melodica, Bit#(PositWidth))) mkFnl();
	let funnel = mkFunnel ();
	return funnel;
endfunction

function Pipe #(Vector#(N_melodica, Bit#(QuireWidth)), Vector#(1, Bit#(QuireWidth))) mkQFnl();
	let qfunnel = mkFunnel ();
	return qfunnel;
endfunction
//---------------------------------------------------------------------------------------------------------

module [Module] mkStage (Server#(Bit#(TCM_XLEN),Vector #(N_melodica, Bit#(PositWidth))));	//pipe converted into module with server ifc
	let s <- mkPipe_to_Server(mkCompose(mkUnpack,mkFnl));					// input from TCM , output to Melodica
	return s;
endmodule

module [Module] mkQuire_fnl (Server#(Vector #(N_melodica, Bit#(QuireWidth)), Vector #(1, Bit#(QuireWidth))));	//pipe converted into module with server ifc
	let s <- mkPipe_to_Server(mkQFnl);						// input from Melodicas , output to Quire accumulator
	return s;
endmodule

	Server#(Bit#(TCM_XLEN),Vector #(N_melodica, Bit#(PositWidth))) stage_A <- mkStage;
	Server#(Bit#(TCM_XLEN),Vector #(N_melodica, Bit#(PositWidth))) stage_B <- mkStage;

	Server#(Vector #(N_melodica, Bit#(QuireWidth)), Vector #(1, Bit#(QuireWidth))) stage_quire <- mkQuire_fnl;

//=======================================================================================================
// Sequential statement for fetching from TCMs
Stmt mem_pointer = 	seq
						//-------------------GEMV-----------------------------------------------
						par
						if (tpl_1(ffO_Instr.first) == GEMV)
						seq
						while (col_len_A > 0) // reset B's pointer as many times as Rows in A
							seq 
							action
							pointer_B <= addr_B;
							pointer_lines <= lines;
							col_len_A <= col_len_A - 1;
							endaction
							while (pointer_lines > 0) // lines is # lines in TCM to store one column of B (or) one row of A
								seq
									action
									a_fd.put(False, pointer_A, ?);
									b_fd.put(False, pointer_B, ?);
									//$display("tcm request",$time);
									endaction

									action
									stage_A.request.put(a_fd.read);
									stage_B.request.put(b_fd.read);
									pointer_A <= pointer_A + 1;
									pointer_B <= pointer_B + 1;
									pointer_lines <= pointer_lines - 1;
									endaction
								endseq
							endseq
						endseq
						endpar
					//-----------------------------DOT_P---------------------------------------------------------
						par
						if (tpl_1(ffO_Instr.first) == DOT_P)
						seq
							action
							pointer_B <= addr_B;
							pointer_lines <= lines;
							endaction
							while (pointer_lines > 0) // lines is # lines in TCM to store one column of B (or) one row of A
								seq
									action
									a_fd.put(False, pointer_A, ?);
									b_fd.put(False, pointer_B, ?);
									//$display("tcm request",$time);
									endaction

									action
									stage_A.request.put(a_fd.read);
									stage_B.request.put(b_fd.read);
									//$display("a_fd",a_fd.read);
									//$display("b_fd",b_fd.read);
									//$display("tcm response",$time);
									pointer_A <= pointer_A + 1;
									pointer_B <= pointer_B + 1;
									pointer_lines <= pointer_lines - 1;
									endaction
								endseq
						endseq
						endpar
					//---------------------------------------------------------------------------------------------------------------
				endseq;
						
//end of Stmt mem_pointer definition------------------------------------------------------------------------------------------------


FSM pointerFSM <- mkFSM( mem_pointer);


(* mutually_exclusive = "init, fetch" *)
//--------------rule that resets all Melodicas-------------------------------------------
	rule rl_reset (reg_status == INIT && tpl_1(ffO_Instr.first)==RST_Q);
		$display("IN RESET",$time);
		for  (Bit#(32) i =0; i < fromInteger(valueOf(N_melodica)); i=i+1 )
		begin
		melodica[i].server_core.request.put(tuple4(?,?,RST_Q,?));
		end
		//add line to clear quire accumulator (?)
		ffO_Instr.deq;		
	endrule
//---------------rule that reads the instruction----------------------------------------
	rule init (reg_status == INIT && (tpl_1(ffO_Instr.first)==GEMV	|| tpl_1(ffO_Instr.first)==DOT_P) );
		let ps = fromInteger(valueOf(PositWidth));
		//ff_opcode.enq(tpl_1(ffO_Instr.first));
		addr_B <= tpl_5(ffO_Instr.first);
		pointer_A <= tpl_2(ffO_Instr.first);
		let row_len_A = tpl_3(ffO_Instr.first);
		col_len_A <= tpl_4(ffO_Instr.first);
		col_len_A_dummy <= tpl_4(ffO_Instr.first);
		pointer_B <= tpl_5(ffO_Instr.first);
		let row_len_B = tpl_6(ffO_Instr.first);
		Bit#(128) tcm_len = fromInteger(valueOf(TCM_XLEN));
		lines <= (row_len_A*ps)/tcm_len;
		reg_status <= FETCH;		
	endrule

//------------rule that starts fsm to read values from TCM-------------------------------
	rule fetch (reg_status == FETCH);
		$display("Fetch",lines, col_len_A,$time);
		pointerFSM.start();
		//ffO_Instr.deq;
		reg_status <= DISPATCH;
	endrule

//-----------rule that reads from pipe and dispatches to Melodica------------------------------------
	rule dispatch (reg_status == DISPATCH);
		$display("IN DISPATCH", col_len_A_dummy, fromInteger(valueOf(Op_count)),$time);
		let opcode = tpl_1(ffO_Instr.first);
		//ffO_Instr.deq;
		Vector#(N_melodica,Bit#(PositWidth)) zA <- stage_A.response.get();
		Vector#(N_melodica,Bit#(PositWidth)) zB <- stage_B.response.get();
 		//$display(zA[0]+zB[0]);
/*
	Bit#(PositWidth) op_1 = zA[i];
	Bit#(PositWidth) op_2 = zB[i];
	positCore_accel_sched.server_core.request.put(tuple4(tagged P op_1,tagged P op_2,FMA_P,round_mode));
*/

	for  (Bit#(32) i =0; i < fromInteger(valueOf(N_melodica)); i=i+1 )
		begin
		melodica[i].server_core.request.put(tuple4(tagged P zA[i],tagged P zB[i],FMA_P,round_mode));
		end
		//$display($time);

		//Bit#(32) op_tbd = fromInteger(valueOf(Op_count))*col_len_A;
		//if (count == fromInteger(valueOf(Op_count))*col_len_A_dummy - 1) begin
		if (count == fromInteger(valueOf(Op_count))*lines - 1) begin
			if ( opcode == DOT_P) 
			reg_status <= INIT;
			$display("Done one Insr");
			if ( opcode == GEMV) 
			reg_status <= READ_DISPATCH;
			count <= 0;
			ffO_Instr.deq;
		end
		else 		count <= count + 1;
	endrule
//--------------rule that 'gets' from Melodica after each FMA_P-------------------------------------------
	rule re_dispatch (reg_status == READ_DISPATCH || tpl_1(ffO_Instr.first)==RD_Q_P);
		$display("IN READ_DISPATCH",$time);
		for  (Bit#(32) i =0; i < fromInteger(valueOf(N_melodica)); i=i+1 )
		begin
		melodica[i].server_core.request.put(tuple4(?,?,RD_Q,round_mode));
		end
		//let z <- positCore_accel_sched.server_core.response.get();
		//if (count == fromInteger(valueOf(Vec_size))) reg_status <= OUT;
		reg_status <= Q_FNL;
	endrule
//---------------rule to Read from quire------------------------------------------------------------------
	rule read_quire (reg_status == Q_FNL);
		Vector #(N_melodica, Bit#(QuireWidth)) result;
		for  (Bit#(32) i =0; i < fromInteger(valueOf(N_melodica)); i=i+1 )
		begin
		result[i] <- melodica[i].server_core.response.get();
		end
		stage_quire.request.put(result);
		//ffO_Instr.deq;
		reg_status <= OUT;
//		positCore_accel.server_core.request.put(tuple4(?,?,RD_Q,round_mode));
	endrule
//--------------------------------------------------------------------------------------------------------
	rule add_quire (reg_status == OUT);	//stays in this rule for N_melodica times
//$display("out");

//		let z <- stage_quire.response.get();
//		q_adder.inoutifc.request.put (z[0]);
//		positCore_accel.server_core.request.put(tuple4(?,?,RD_Q,round_mode));
	endrule
		

interface server_sched = toGPServer (ffO_Instr,rg_quire);
//

endmodule

endpackage: PAC_sched_tcm		
		



