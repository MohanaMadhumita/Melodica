package Multiplier;

import FIFOF        :: *;
import GetPut       :: *;
import ClientServer :: *;

import Utils :: *;
import Multiplier_Types :: *;
import Posit_Numeric_Types :: *;
import Posit_User_Types :: *;


module mkMultiplier (Multiplier_IFC );
	// make a FIFO to store 
        FIFOF #(Inputs_m )   fifo_input_reg <- mkFIFOF;
   	FIFOF #(Outputs_m )  fifo_output_reg <- mkFIFOF;
	
	//This function is used to identify nan cases

	function Bit#(1) check_for_nan(PositType z_i1, PositType z_i2,Bit#(1) nan1,Bit#(1) nan2 );
		if ((z_i1 == INF && z_i2 == ZERO)||(z_i2 == INF && z_i1 == ZERO)||(nan1 == 1'b1)||(nan2 == 1'b1))
			//nan flag = 1 when one input is infinity and other zero
			return 1'b1;
		else 
			return 1'b0;
	endfunction
	//This function is used to identify zer or infinity cases depending only on the flag value of inputs

	function PositType check_for_z_i(PositType z_i1, PositType z_i2);
		if (z_i1 == ZERO && z_i2 == ZERO)
			// if both inputs are zero then output is zero
			return ZERO;
		else if (z_i1 == INF || z_i2 == INF)
			// if one of the inputs is infinity then output is infinity
			return INF;
		else 
			return REGULAR;
	endfunction
	//This function finds the product of the fraction bits
	function Tuple3#(Bit#(1), Bit#(FracWidthQuirePlus2),Bit#(ScaleWidthPlus1)) calculate_product_frac(Bit#(1) sgn1,Bit#(1)sgn2,Bit#(FracWidthPlus1)f1,Bit#(FracWidthPlus1)f2);
		Bit#(FracWidthQuirePlus2)frac_product;
		Bit#(ScaleWidthPlus1) frac_shift;
		Bit#(ScaleWidthPlus1) zero_one = '1;
		//frac_product gives the product of the two fractions
		// its size = sum of sizes of input fractions = FracWidth + 1 + FracWidth + 1 
		frac_product = extend(f1) * extend(f2);
		frac_product = (frac_product << (valueOf(FracWidthQuireMinusFracWidthMul2)));
		//frac_shift gives the number of bit shift in fraction product such that the MSB is 1
		frac_shift =  truncate(min(extend(zero_one),(pack(countZerosMSB(frac_product)))));
		//Sign is given by the xor of the two signs
		//sign = 1 if negative number
		return tuple3(sgn1 ^ sgn2,(frac_product<<frac_shift),frac_shift); 
	endfunction
	//This function checks if the scale value has exceeded the limits max and min set due to the restricted availability of regime bits
	// fraction bits will be shifted to take care of the scale value change due to it being bounded
	//output : bounded scale value and the shift in frac bits
	function Tuple2#(Int#(ScaleWidthPlus1), Int#(LogFracWidthPlus1)) calculate_scale_shift(Int#(ScaleWidthPlus2) scale);
			Int#(ScaleWidthPlus1) maxB,minB,scale0;
			Int#(LogFracWidthPlus1) frac_change;
			//max scale value is defined here... have to saturate the scale value 
			// max value = (N-2)*(2^es) 
			// scale = regime*(2^es) + expo.... max value of regime = N-2(00...1)
			maxB = fromInteger((valueOf(PositWidth) -2)*(2**(valueOf(ExpWidth))));
			//similarly calculate the min 
		 	minB = -maxB;
			//frac_change gives the number of bits that are more or less than scale bounds so that we can shift the frac bits to not lose scale information 
			if (scale < signExtend(minB))
				begin
				frac_change = truncate(boundedMinus(scale,signExtend(minB)));// find the change in scale to bind it 
				scale0 = minB;//bound scale
				end
			else if (scale> signExtend(maxB))
				begin
				frac_change = truncate(boundedMinus(scale,signExtend(maxB)));// find the change in scale to bind it 
				scale0 = maxB;//bound scale
				end
			else
				begin
				frac_change = fromInteger(0);
				scale0 = truncate(scale);//no change
				end
			return tuple2(scale0,frac_change);

	endfunction
	//This function finds the sum of the scale bits since the scale value has 2^scale contribution in the product
	function Tuple2#(Int#(ScaleWidthPlus1), Int#(LogFracWidthPlus1)) calculate_sum_scale(Int#(ScaleWidthPlus1 ) s1,Int#(ScaleWidthPlus1)s2,Bit#(ScaleWidthPlus1) frac_shift);
			Int#(ScaleWidthPlus2) scale;
			//Scale is calculated as the sum of the respective scale
			// bounded the value to prevent wrap around
			// we also add the fraction bit shift(the shift was done to get msb =1) to accomodate more frac bits
			scale =  signExtend(s1)+ signExtend(s2)- unpack(extend(frac_shift)-1);
			// now we bound the scale further to bound its value between min and max
			return calculate_scale_shift(scale);
			//Scale_bound a;
			//a.scale = boundedMinus(boundedPlus(s1,s2) , unpack(extend(frac_shift)-1));
			//return a.scale ; 
	endfunction
//INPUT STAGE
	rule stage_0;
		//dIn reads the values from input pipeline register 
      		let dIn = fifo_input_reg.first;  fifo_input_reg.deq;
		// data to be stored in stored in fifo that will be used in stage 0
		//to see what the hidden bit of each fraction bit will be thus sending that bit for product
		let zero_flag = dIn.zero_infinity_flag1 == ZERO ? 2'b01 : ( dIn.zero_infinity_flag2 == ZERO ? 2'b10 : 2'b11);
		// calling function to get product of fractions
		match{ .sign0, .frac0, .fracshift0} = calculate_product_frac(dIn.sign1,dIn.sign2,{zero_flag[1],dIn.frac1},{zero_flag[0],dIn.frac2});
		//calling function to get sum of scale
		match{.scale0, .frac_change0} = calculate_sum_scale(dIn.scale1,dIn.scale2,fracshift0);
		//taking care of corner cases for zero infinity flag
		let ziflag = check_for_z_i(dIn.zero_infinity_flag1,dIn.zero_infinity_flag2);
		PositType zero_infinity_flag0 = frac0 == 0 && ziflag == REGULAR ? ZERO :ziflag;
		Bit#(FracWidthQuirePlus2) mask1 = frac_change0 <= 0 ?~('1<<abs(frac_change0)+1):?;
                let output_regf = Outputs_m {
			//taking care of corner cases for nan flag 
			nan_flag : check_for_nan(dIn.zero_infinity_flag1,dIn.zero_infinity_flag2,dIn.nanflag1,dIn.nanflag2),
			//also include the case when fraction bit msb = 0
			zero_infinity_flag : zero_infinity_flag0,
			sign : sign0,
			scale : scale0,
			// shift by frac_change to accomodate the overflow of scale 
			//the plus two is for truncating it from FQW+2 to FQW
			frac : frac_change0 <= 0 ? truncate(frac0>>(abs(frac_change0)+2)) : '1,// we want the output of size FWQ;if the frac_change <0 that means the scale was actually less than min so we shift the frac bits right frac_change to save the information, if frac_change>0 means we have scale more than max.. if we have to round this number we use scale = max and frac = max 
			truncated_frac_msb : zero_infinity_flag0 == ZERO ? 1'b0 : (frac_change0 <= 0 ?frac0[abs(frac_change0)+1] : 1'b1),
			truncated_frac_zero : zero_infinity_flag0 == ZERO ? 1'b1 : (frac_change0 <= 0 ?((frac0 & mask1) ==  0 ? 1'b1 : 1'b0) : 1'b0)};
		`ifdef RANDOM_PRINT
		$display("sign0",sign0);
		$display("frac1 %b frac2 %b scale1 %b scale2 %b",dIn.frac1,dIn.frac2,dIn.scale1,dIn.scale2);
		$display("dout.frac %b frac %b shift %b scale %b frac_change %b  ",output_regf.frac,frac0,fracshift0,scale0,frac_change0);
		$display(" dIn.frac1 %b dIn.frac2 %b truncated_frac_msb %b truncated_frac_zero %b",dIn.frac1,dIn.frac2,output_regf.truncated_frac_msb,output_regf.truncated_frac_zero);
		`endif
		 fifo_output_reg.enq(output_regf);
   	endrule
interface inoutifc = toGPServer (fifo_input_reg, fifo_output_reg);
endmodule

endpackage: Multiplier


