//ADD MUL FDP PtoQ QtoP FtoP PtoF
package PositCore;

// Library imports
import FIFOF        :: *;
import FIFO        :: *;
import GetPut       :: *;
import ClientServer :: *;

// Project imports
import Extracter :: *;
import Normalizer :: *;
import Extracter_Types :: *;
import Normalizer_Types :: *;
import Posit_Numeric_Types :: *;
import Posit_User_Types :: *;
import FDP_PNE_Quire_PC :: *;
import FtoP_PNE_PC :: *;
import PtoF_PNE_PC :: *;
import PositToQuire_PNE_PC :: *;
import QuireToPosit_PNE_PC :: *;
import Add_PNE_PC :: *;
import Mul_PNE_PC :: *;
import FloatingPoint :: *;
//import Cur_Cycle  :: *;

`ifdef QUILLS
import FPU_Types :: *;
`else
// Type definitions
typedef FloatingPoint#(11,52) FDouble;
typedef FloatingPoint#(8,23)  FSingle;

typedef union tagged {
   FDouble D;
   FSingle S;
   Bit #(PositWidth) P;
   } FloatU deriving(Bits,Eq);

typedef Tuple2#( FloatU, FloatingPoint::Exception )       Fpu_Rsp;
`endif

typedef enum {FMA_P, FCVT_P_S, FCVT_S_P, FCVT_P_R, FCVT_R_P, FADD_P, FMUL_P} PositCmds
deriving (Bits, Eq, FShow);

typedef Tuple4 #(FloatU, FloatU, RoundMode, PositCmds) Posit_Req;

interface PositCore_IFC;
   interface Server #(Posit_Req, Fpu_Rsp) server_core;
endinterface

(* synthesize *)
module mkPositCore #(Bit #(4) verbosity) (PositCore_IFC);

	Reg #(Bit#(QuireWidth))  rg_quire   <- mkReg(0);
	FDP_PNE_Quire       fdp             <- mkFDP_PNE_Quire(rg_quire);	
	PositToQuire_PNE    ptoq            <- mkPositToQuire_PNE(rg_quire);
	QuireToPosit_PNE    qtop            <- mkQuireToPosit_PNE(rg_quire);	
	FtoP_PNE            ftop            <- mkFtoP_PNE;	
	PtoF_PNE            ptof            <- mkPtoF_PNE;	
	Mul_PNE             mul            <- mkMul_PNE;	
	Add_PNE             add            <- mkAdd_PNE;	

	Extracter_IFC  extracter1 <- mkExtracter;
	Extracter_IFC  extracter2 <- mkExtracter;
	Normalizer_IFC   normalizer <- mkNormalizer;

	FIFO #(PositCmds) opcode <- mkFIFO;
	FIFO #(PositCmds) opcode_in <- mkFIFO;
	FIFO #(PositCmds) opcode_out <- mkFIFO;
	FIFO #(Posit_Req) ffI <- mkFIFO;
	FIFO #(Fpu_Rsp) ffO <- mkFIFO;
	FIFO #(Bit#(FloatWidth)) ffI_f <- mkFIFO;
	
	rule extract_in;
		if(tpl_4(ffI.first) == FCVT_P_S)
			begin
				let a = tpl_1(ffI.first).S;
				ffI_f.enq({pack(a.sign),a.exp,a.sfd});
			end
		else if(tpl_4(ffI.first) == FMA_P || tpl_4(ffI.first) == FMUL_P || tpl_4(ffI.first) == FADD_P)
			begin
				let in_posit1 = Input_posit {posit_inp : tpl_1(ffI.first).P};
			   	extracter1.inoutifc.request.put (in_posit1);
			   	let in_posit2 = Input_posit {posit_inp : tpl_2(ffI.first).P};
			   	extracter2.inoutifc.request.put (in_posit2);
			end
		else if(tpl_4(ffI.first) == FCVT_S_P || tpl_4(ffI.first) == FCVT_R_P)
			begin
				let in_posit1 = Input_posit {posit_inp : tpl_1(ffI.first).P};
			   	extracter1.inoutifc.request.put (in_posit1);
			end
		opcode_in.enq(tpl_4(ffI.first));
		
		if (verbosity > 1)
                   /*$display (  "%0d: %m: rl_in: "
                             , cur_cycle
                             , fshow (tpl_4(ffI.first))
                             , fshow (tpl_1(ffI.first).P)
                             , fshow (tpl_2(ffI.first).P));*/
		ffI.deq;
	endrule

	rule rl_fdp(opcode_in.first == FMA_P);
		let extOut1 <- extracter1.inoutifc.response.get();
	   	let extOut2 <- extracter2.inoutifc.response.get();
		fdp.compute.request.put((InputTwoExtractPosit{posit_inp_e1 : extOut1,posit_inp_e2 : extOut1}));
		opcode.enq(opcode_in.first);
		opcode_in.deq;
                
	endrule
	
	rule rl_ptof(opcode_in.first == FCVT_S_P);
		let extOut1 <- extracter1.inoutifc.response.get();
		ptof.compute.request.put(extOut1);
		opcode.enq(opcode_in.first);
		opcode_in.deq;
	endrule

	rule rl_ftop(opcode_in.first == FCVT_P_S);
		ftop.compute.request.put(ffI_f.first);
		opcode.enq(opcode_in.first);
		opcode_in.deq;
		ffI_f.deq;
	endrule

	rule rl_ptoq(opcode_in.first == FCVT_R_P);
		let extOut1 <- extracter1.inoutifc.response.get();
		ptoq.compute.request.put(extOut1);
		opcode.enq(opcode_in.first);
		opcode_in.deq;
	endrule
	
	rule rl_qtop(opcode_in.first == FCVT_P_R);
		qtop.compute.request.put(?);
		opcode.enq(opcode_in.first);
		opcode_in.deq;
	endrule

	rule rl_add(opcode_in.first == FADD_P);
		let extOut1 <- extracter1.inoutifc.response.get();
	   	let extOut2 <- extracter2.inoutifc.response.get();
		add.compute.request.put((InputTwoExtractPosit{posit_inp_e1 : extOut1,posit_inp_e2 : extOut1}));
		opcode.enq(opcode_in.first);
		opcode_in.deq;
                
	endrule

	rule rl_mul(opcode_in.first == FMUL_P);
		let extOut1 <- extracter1.inoutifc.response.get();
	   	let extOut2 <- extracter2.inoutifc.response.get();
		mul.compute.request.put((InputTwoExtractPosit{posit_inp_e1 : extOut1,posit_inp_e2 : extOut1}));
		opcode.enq(opcode_in.first);
		opcode_in.deq;
                
	endrule

	rule rl_out1;
		let op = opcode.first;
		opcode_out.enq(op);
		opcode.deq;
		if(op == FCVT_P_S )
			begin
				let out_pf <- ftop.compute.response.get();
				normalizer.inoutifc.request.put (out_pf);				
			end
		else if(op ==  FCVT_P_R )
			begin
				let out_pf <- qtop.compute.response.get();
				normalizer.inoutifc.request.put (out_pf);				
			end
		else if(op == FMUL_P )
			begin
				let out_pf <- mul.compute.response.get();
				normalizer.inoutifc.request.put (out_pf);				
			end
		else if(op == FADD_P )
			begin
				let out_pf <- add.compute.response.get();
				normalizer.inoutifc.request.put (out_pf);				
			end
		//else 
                   //$display (  "%0d: %m: rl_out: no normalisation required", cur_cycle, fshow(op));
	
                //if (verbosity > 1)
                   //$display (  "%0d: %m: rl_out: ", cur_cycle, fshow(op));
	endrule

	rule rl_out2;
		let op = opcode_out.first; opcode_out.deq;
		let excep = FloatingPoint::Exception{invalid_op : False, divide_0: False, overflow: False, underflow: False, inexact : False};
		//FloatU posit_out;
		if(op == FMA_P)
			begin
				let a <- fdp.compute.response.get();
				FloatU posit_out = tagged P 0;
				ffO.enq(tuple2(posit_out,excep));
			end
		else if(op == FCVT_R_P)
			begin
				let a <- ptoq.compute.response.get();
				FloatU posit_out = tagged P 0;
				ffO.enq(tuple2(posit_out,excep));
			end
		else if(op == FCVT_S_P)
			begin
				let out_pf <- ptof.compute.response.get();
				FSingle fs = FSingle{sign : unpack(msb(out_pf)), exp : (out_pf[valueOf(FloatExpoBegin):valueOf(FloatFracWidth)]), sfd : truncate(out_pf) };
				FloatU posit_out = tagged S fs;
				ffO.enq(tuple2(posit_out,excep));
			end
		else if(op == FCVT_P_S || op ==  FCVT_P_R || op == FMUL_P || op == FADD_P )
			begin
				let out_pf <- normalizer.inoutifc.response.get ();
				excep.invalid_op = out_pf.nan_flag == 1'b1;
				excep.overflow = out_pf.zero_infinity_flag == INF;
				excep.underflow = out_pf.zero_infinity_flag == ZERO && out_pf.rounding;
				excep.inexact = out_pf.rounding;
				FloatU posit_out = tagged P out_pf.out_posit;
				ffO.enq(tuple2(posit_out,excep));
			end
		//else 
                   //$display (  "%0d: %m: rl_out: Error Illegal Opcode", cur_cycle, fshow(op));
	
                //if (verbosity > 1)
                   //$display (  "%0d: %m: rl_out: ", cur_cycle, fshow(op));
	endrule

interface server_core = toGPServer (ffI,ffO);

endmodule
endpackage