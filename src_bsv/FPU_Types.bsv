// New types definition file created to capture common definitions
// used by a FPU and a posit compute unit. Moved from FPU.bsv

package FPU_Types;

import FShow :: *;
import ISA_Decls :: *;
import FloatingPoint :: *;
`ifdef POSIT
import Posit_Numeric_Types :: *;
`endif

typedef FloatingPoint#(11,52) FDouble;
typedef FloatingPoint#(8,23)  FSingle;

typedef union tagged {
   FDouble D;
   FSingle S;
`ifdef POSIT
   WordPL  P;
`endif
   } FloatU deriving(Bits,Eq,FShow);

typedef Tuple5#( FloatU,FloatU,FloatU,RoundMode,FpuOp) Fpu_Req;
typedef Tuple2#( FloatU, FloatingPoint::Exception )       Fpu_Rsp;

`ifdef ISA_D
typedef Tuple2#( FDouble, FloatingPoint::Exception )      FpuR;
`else
typedef Tuple2#( FSingle, FloatingPoint::Exception )      FpuR;
`endif

endpackage : FPU_Types
