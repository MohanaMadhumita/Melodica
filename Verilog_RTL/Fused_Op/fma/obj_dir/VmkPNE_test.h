// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VmkPNE_test_H_
#define _VmkPNE_test_H_

#include "verilated_heavy.h"

class VmkPNE_test__Syms;

//----------

VL_MODULE(VmkPNE_test) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(CLK,0,0);
    VL_IN8(RST_N,0,0);
    VL_IN8(EN_compute_request_put,0,0);
    VL_OUT8(RDY_compute_request_put,0,0);
    VL_IN8(EN_compute_response_get,0,0);
    VL_OUT8(RDY_compute_response_get,0,0);
    VL_INW(compute_request_put,159,0,5);
    VL_OUTW(compute_response_get,127,0,4);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1,0,0);
    VL_SIG8(mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1,0,0);
    VL_SIG8(mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0,0,0);
    VL_SIG8(mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1,0,0);
    VL_SIG8(mkPNE_test__DOT__CAN_FIRE_RL_rl_out,0,0);
    VL_SIG8(mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10,7,0);
    VL_SIG8(mkPNE_test__DOT__IF_new_inp1461_BIT_14_THEN_b1984_ELSE_b1986___05Fq6,4,0);
    VL_SIG8(mkPNE_test__DOT__IF_new_inp6201_BIT_14_THEN_b6733_ELSE_b6735___05Fq8,4,0);
    VL_SIG8(mkPNE_test__DOT__IF_IF_compute_request_put_BIT_15_69_THEN_0_MIN_ETC___05F_d506,3,0);
    VL_SIG8(mkPNE_test__DOT__IF_IF_compute_request_put_BIT_31_88_THEN_0_MIN_ETC___05F_d325,3,0);
    VL_SIG8(mkPNE_test__DOT__x___05Fh16743,3,0);
    VL_SIG8(mkPNE_test__DOT__x___05Fh18881,3,0);
    VL_SIG8(mkPNE_test__DOT__x___05Fh21994,3,0);
    VL_SIG8(mkPNE_test__DOT__x___05Fh24132,3,0);
    VL_SIG8(mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133,1,0);
    VL_SIG8(mkPNE_test__DOT__truncated_frac___05Fh1987,1,0);
    VL_SIG8(mkPNE_test__DOT__flag_truncated_frac___05Fh1985,0,0);
    VL_SIG8(mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__ffO__DOT__full_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__ffO__DOT__empty_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__fftemp__DOT__full_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__fftemp__DOT__empty_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg,0,0);
    VL_SIG8(mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg,0,0);
    VL_SIG16(mkPNE_test__DOT__x___05Fh21287,10,0);
    VL_SIG16(mkPNE_test__DOT__x___05Fh26538,10,0);
    VL_SIG16(mkPNE_test__DOT__new_inp___05Fh16201,14,0);
    VL_SIG16(mkPNE_test__DOT__new_inp___05Fh21461,14,0);
    VL_SIGW(mkPNE_test__DOT__adder_fifo_output_reg__024D_IN,127,0,4);
    VL_SIGW(mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN,134,0,5);
    VL_SIG(mkPNE_test__DOT__extracter1_fifo_output_reg__024D_IN,20,0);
    VL_SIG(mkPNE_test__DOT__extracter2_fifo_output_reg__024D_IN,20,0);
    VL_SIGW(mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN,132,0,5);
    VL_SIGW(mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74,127,0,4);
    VL_SIGW(mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79,127,0,4);
    VL_SIGW(mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166,127,0,4);
    VL_SIGW(mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227,127,0,4);
    VL_SIGW(mkPNE_test__DOT__x___05Fh2012,127,0,4);
    VL_SIGW(mkPNE_test__DOT__x___05Fh1580,126,0,4);
    VL_SIGW(mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg,127,0,4);
    VL_SIGW(mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg,127,0,4);
    VL_SIGW(mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg,134,0,5);
    VL_SIGW(mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg,134,0,5);
    VL_SIG(mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg,20,0);
    VL_SIG(mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data1_reg,20,0);
    VL_SIG(mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg,20,0);
    VL_SIG(mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data1_reg,20,0);
    VL_SIGW(mkPNE_test__DOT__ffO__DOT__data0_reg,127,0,4);
    VL_SIGW(mkPNE_test__DOT__ffO__DOT__data1_reg,127,0,4);
    VL_SIGW(mkPNE_test__DOT__fftemp__DOT__data0_reg,127,0,4);
    VL_SIGW(mkPNE_test__DOT__fftemp__DOT__data1_reg,127,0,4);
    VL_SIGW(mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg,132,0,5);
    VL_SIGW(mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg,132,0,5);
    VL_SIG64(mkPNE_test__DOT__multiplier_fifo_stage0_reg__024D_IN,35,0);
    VL_SIG64(mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg,35,0);
    VL_SIG64(mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data1_reg,35,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG16(__Vtable1_mkPNE_test__DOT__x___05Fh21287[16],10,0);
    static VL_ST_SIG16(__Vtable2_mkPNE_test__DOT__x___05Fh26538[16],10,0);
    VL_SIG8(__Vtableidx1,3,0);
    VL_SIG8(__Vtableidx2,3,0);
    VL_SIG8(__Vclklast__TOP__CLK,0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VmkPNE_test__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VmkPNE_test& operator= (const VmkPNE_test&);  ///< Copying not allowed
    VmkPNE_test(const VmkPNE_test&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VmkPNE_test(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VmkPNE_test();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VmkPNE_test__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VmkPNE_test__Syms* symsp, bool first);
  private:
    static QData _change_request(VmkPNE_test__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VmkPNE_test__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VmkPNE_test__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VmkPNE_test__Syms* __restrict vlSymsp);
    static void _eval_settle(VmkPNE_test__Syms* __restrict vlSymsp);
    static void _initial__TOP__4(VmkPNE_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VmkPNE_test__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(VmkPNE_test__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
