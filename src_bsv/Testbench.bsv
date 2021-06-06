package Testbench;

import GetPut       :: *;
import ClientServer :: *;

import PAC_sched_tcm ::*;
import Posit_Numeric_Types :: *;
import FloatingPoint :: *;
import Utils  :: *;

(* synthesize *)
module mkTestbench (Empty);

	Scheduler_IFC scheduler <- mkSched;
	Reg#(int) count <- mkReg(2);

	rule instr(count!=0);
		Instruction inst1 = tuple7(DOT_P, 16'h0001,
					 128'h00000000000000000000000000000400,	//columns in A
					 128'h00000000000000000000000000000001,	//Rows in A
					 16'h0001,
					 128'h00000000000000000000000000000001, //columns in B
					 128'h00000000000000000000000000000400	//Rows In B
						);
//ffO_Instr.enq(tuple7(DOT_P, 16'h0011, 128'h00000000000000000000000000000008,  128'h00000000000000000000000000000004,16'h0011,  128'h00000000000000000000000000000008,  128'h00000000000000000000000000000008));
		scheduler.server_sched.request.put(inst1);
		count <= count - 1;
	$display("rule Insr",$time);		
	endrule
	


endmodule

endpackage
