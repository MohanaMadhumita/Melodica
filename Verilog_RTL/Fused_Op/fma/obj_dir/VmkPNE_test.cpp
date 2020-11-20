// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkPNE_test.h for the primary calling header

#include "VmkPNE_test.h"       // For This
#include "VmkPNE_test__Syms.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIG16(VmkPNE_test::__Vtable1_mkPNE_test__DOT__x___05Fh21287[16],10,0);
VL_ST_SIG16(VmkPNE_test::__Vtable2_mkPNE_test__DOT__x___05Fh26538[16],10,0);

//--------------------

VL_CTOR_IMP(VmkPNE_test) {
    VmkPNE_test__Syms* __restrict vlSymsp = __VlSymsp = new VmkPNE_test__Syms(this, name());
    VmkPNE_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmkPNE_test::__Vconfigure(VmkPNE_test__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VmkPNE_test::~VmkPNE_test() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VmkPNE_test::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmkPNE_test::eval\n"); );
    VmkPNE_test__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmkPNE_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VmkPNE_test::_eval_initial_loop(VmkPNE_test__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VmkPNE_test::_sequent__TOP__1(VmkPNE_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkPNE_test::_sequent__TOP__1\n"); );
    VmkPNE_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__ffO__DOT__full_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__ffO__DOT__empty_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__fftemp__DOT__full_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__fftemp__DOT__empty_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg,0,0);
    VL_SIG8(__Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg,0,0);
    VL_SIGW(__Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg,127,0,4);
    VL_SIGW(__Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg,127,0,4);
    VL_SIGW(__Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg,134,0,5);
    VL_SIGW(__Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg,134,0,5);
    VL_SIG(__Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg,20,0);
    VL_SIG(__Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data1_reg,20,0);
    VL_SIG(__Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg,20,0);
    VL_SIG(__Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data1_reg,20,0);
    VL_SIGW(__Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg,127,0,4);
    VL_SIGW(__Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg,127,0,4);
    VL_SIGW(__Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg,127,0,4);
    VL_SIGW(__Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg,127,0,4);
    VL_SIGW(__Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg,132,0,5);
    VL_SIGW(__Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg,132,0,5);
    VL_SIGW(__Vtemp53,127,0,4);
    VL_SIGW(__Vtemp54,127,0,4);
    VL_SIGW(__Vtemp61,159,0,5);
    VL_SIGW(__Vtemp63,127,0,4);
    VL_SIGW(__Vtemp64,127,0,4);
    VL_SIGW(__Vtemp65,127,0,4);
    VL_SIGW(__Vtemp66,127,0,4);
    VL_SIGW(__Vtemp70,127,0,4);
    VL_SIGW(__Vtemp72,127,0,4);
    VL_SIGW(__Vtemp83,127,0,4);
    VL_SIGW(__Vtemp84,127,0,4);
    VL_SIGW(__Vtemp85,127,0,4);
    VL_SIGW(__Vtemp88,159,0,5);
    VL_SIGW(__Vtemp91,127,0,4);
    VL_SIGW(__Vtemp92,127,0,4);
    VL_SIGW(__Vtemp114,127,0,4);
    VL_SIGW(__Vtemp116,127,0,4);
    VL_SIG64(__Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg,35,0);
    VL_SIG64(__Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data1_reg,35,0);
    // Body
    __Vdly__mkPNE_test__DOT__ffO__DOT__empty_reg = vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg;
    __Vdly__mkPNE_test__DOT__ffO__DOT__full_reg = vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg;
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg;
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg;
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[0U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[0U];
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[1U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[1U];
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[2U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[2U];
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[3U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[3U];
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[0U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[0U];
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[1U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[1U];
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[2U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[2U];
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[3U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[3U];
    __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[0U] 
	= vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[0U];
    __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[1U] 
	= vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[1U];
    __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[2U] 
	= vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[2U];
    __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[3U] 
	= vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[3U];
    __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[0U] 
	= vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[0U];
    __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[1U] 
	= vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[1U];
    __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[2U] 
	= vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[2U];
    __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[3U] 
	= vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[3U];
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg;
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg;
    __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg 
	= vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg;
    __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg 
	= vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg;
    __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg 
	= vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg;
    __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg 
	= vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg;
    __Vdly__mkPNE_test__DOT__fftemp__DOT__full_reg 
	= vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg;
    __Vdly__mkPNE_test__DOT__fftemp__DOT__empty_reg 
	= vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg;
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[0U] 
	= vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[0U];
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[1U] 
	= vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[1U];
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[2U] 
	= vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[2U];
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[3U] 
	= vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[3U];
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[0U] 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[0U];
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[1U] 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[1U];
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[2U] 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[2U];
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[3U] 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[3U];
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[4U] 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[4U];
    __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data1_reg 
	= vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data1_reg;
    __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data1_reg 
	= vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data1_reg;
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[0U] 
	= vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[0U];
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[1U] 
	= vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[1U];
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[2U] 
	= vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[2U];
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
	= vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U];
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U];
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[1U] 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[1U];
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[2U] 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[2U];
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[3U] 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[3U];
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U];
    __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
	= vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg;
    __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
	= vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg;
    __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg;
    __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg;
    __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data1_reg 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data1_reg;
    __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
	= vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg;
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg;
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg;
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[0U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[0U];
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[1U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[1U];
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[2U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[2U];
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[3U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[3U];
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[4U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[4U];
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U];
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U];
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[2U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[2U];
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[3U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[3U];
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
	= vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U];
    // ALWAYS at FIFO2.v:131
    if (vlTOPp->RST_N) {
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg)) 
			 & (IData)(vlTOPp->EN_compute_response_get)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.ffO.error_checks -- Dequeuing from empty fifo\n",
		      vlSymsp->name());
	}
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.ffO.error_checks -- Enqueuing to a full fifo\n",
		      vlSymsp->name());
	}
    }
    // ALWAYS at FIFO2.v:131
    if (vlTOPp->RST_N) {
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.adder_fifo_output_reg.error_checks -- Dequeuing from empty fifo\n",
		      vlSymsp->name());
	}
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.adder_fifo_output_reg.error_checks -- Enqueuing to a full fifo\n",
		      vlSymsp->name());
	}
    }
    // ALWAYS at FIFO2.v:131
    if (vlTOPp->RST_N) {
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.multiplier_fifo_output_reg.error_checks -- Dequeuing from empty fifo\n",
		      vlSymsp->name());
	}
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.multiplier_fifo_output_reg.error_checks -- Enqueuing to a full fifo\n",
		      vlSymsp->name());
	}
    }
    // ALWAYS at FIFO2.v:131
    if (vlTOPp->RST_N) {
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.extracter1_fifo_output_reg.error_checks -- Dequeuing from empty fifo\n",
		      vlSymsp->name());
	}
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg)) 
			 & (IData)(vlTOPp->EN_compute_request_put)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.extracter1_fifo_output_reg.error_checks -- Enqueuing to a full fifo\n",
		      vlSymsp->name());
	}
    }
    // ALWAYS at FIFO2.v:131
    if (vlTOPp->RST_N) {
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.extracter2_fifo_output_reg.error_checks -- Dequeuing from empty fifo\n",
		      vlSymsp->name());
	}
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg)) 
			 & (IData)(vlTOPp->EN_compute_request_put)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.extracter2_fifo_output_reg.error_checks -- Enqueuing to a full fifo\n",
		      vlSymsp->name());
	}
    }
    // ALWAYS at FIFO2.v:131
    if (vlTOPp->RST_N) {
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.fftemp.error_checks -- Dequeuing from empty fifo\n",
		      vlSymsp->name());
	}
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg)) 
			 & (IData)(vlTOPp->EN_compute_request_put)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.fftemp.error_checks -- Enqueuing to a full fifo\n",
		      vlSymsp->name());
	}
    }
    // ALWAYS at FIFO2.v:131
    if (vlTOPp->RST_N) {
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.multiplier_fifo_stage0_reg.error_checks -- Dequeuing from empty fifo\n",
		      vlSymsp->name());
	}
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.multiplier_fifo_stage0_reg.error_checks -- Enqueuing to a full fifo\n",
		      vlSymsp->name());
	}
    }
    // ALWAYS at FIFO2.v:131
    if (vlTOPp->RST_N) {
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.adder_fifo_stage0_reg.error_checks -- Dequeuing from empty fifo\n",
		      vlSymsp->name());
	}
	if (VL_UNLIKELY(((~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg)) 
			 & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)))) {
	    VL_WRITEF("Warning: FIFO2: %NmkPNE_test.adder_fifo_stage0_reg.error_checks -- Enqueuing to a full fifo\n",
		      vlSymsp->name());
	}
    }
    // ALWAYS at FIFO2.v:81
    if (vlTOPp->RST_N) {
	if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
	     & (~ (IData)(vlTOPp->EN_compute_response_get)))) {
	    __Vdly__mkPNE_test__DOT__ffO__DOT__full_reg 
		= (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg)));
	    __Vdly__mkPNE_test__DOT__ffO__DOT__empty_reg = 1U;
	} else {
	    if (((IData)(vlTOPp->EN_compute_response_get) 
		 & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)))) {
		__Vdly__mkPNE_test__DOT__ffO__DOT__empty_reg 
		    = (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg)));
		__Vdly__mkPNE_test__DOT__ffO__DOT__full_reg = 1U;
	    }
	}
    } else {
	__Vdly__mkPNE_test__DOT__ffO__DOT__empty_reg = 0U;
	__Vdly__mkPNE_test__DOT__ffO__DOT__full_reg = 1U;
    }
    // ALWAYS at FIFO2.v:81
    if (vlTOPp->RST_N) {
	if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
	     & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)))) {
	    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg 
		= (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg)));
	    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg = 1U;
	} else {
	    if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
		 & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)))) {
		__Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg 
		    = (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg)));
		__Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg = 1U;
	    }
	}
    } else {
	__Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg = 0U;
	__Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg = 1U;
    }
    // ALWAYS at FIFO2.v:110
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[0U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[0U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[0U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[0U]));
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[1U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[1U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[1U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[1U]));
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[2U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[2U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[2U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[2U]));
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[3U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[3U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[3U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[3U]));
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[0U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[0U]
	    : vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[0U]);
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[1U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[1U]
	    : vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[1U]);
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[2U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[2U]
	    : vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[2U]);
    __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[3U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[3U]
	    : vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[3U]);
    // ALWAYS at FIFO2.v:110
    __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[0U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				      & (IData)(vlTOPp->EN_compute_response_get)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[0U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->EN_compute_response_get) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[0U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->EN_compute_response_get)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out))) 
					  | ((~ (IData)(vlTOPp->EN_compute_response_get)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[0U]));
    __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[1U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				      & (IData)(vlTOPp->EN_compute_response_get)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[1U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->EN_compute_response_get) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[1U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->EN_compute_response_get)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out))) 
					  | ((~ (IData)(vlTOPp->EN_compute_response_get)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[1U]));
    __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[2U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				      & (IData)(vlTOPp->EN_compute_response_get)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[2U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->EN_compute_response_get) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[2U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->EN_compute_response_get)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out))) 
					  | ((~ (IData)(vlTOPp->EN_compute_response_get)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[2U]));
    __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[3U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
				      & (IData)(vlTOPp->EN_compute_response_get)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[3U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->EN_compute_response_get) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[3U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->EN_compute_response_get)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out))) 
					  | ((~ (IData)(vlTOPp->EN_compute_response_get)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[3U]));
    __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[0U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[0U]
	    : vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[0U]);
    __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[1U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[1U]
	    : vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[1U]);
    __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[2U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[2U]
	    : vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[2U]);
    __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[3U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[3U]
	    : vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[3U]);
    // ALWAYS at FIFO2.v:81
    if (vlTOPp->RST_N) {
	if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
	     & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)))) {
	    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg 
		= (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg)));
	    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg = 1U;
	} else {
	    if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
		 & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)))) {
		__Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg 
		    = (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg)));
		__Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg = 1U;
	    }
	}
    } else {
	__Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg = 0U;
	__Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg = 1U;
    }
    // ALWAYS at FIFO2.v:81
    if (vlTOPp->RST_N) {
	if (((IData)(vlTOPp->EN_compute_request_put) 
	     & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)))) {
	    __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg 
		= (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg)));
	    __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg = 1U;
	} else {
	    if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0) 
		 & (~ (IData)(vlTOPp->EN_compute_request_put)))) {
		__Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg 
		    = (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg)));
		__Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg = 1U;
	    }
	}
    } else {
	__Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg = 0U;
	__Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg = 1U;
    }
    // ALWAYS at FIFO2.v:81
    if (vlTOPp->RST_N) {
	if (((IData)(vlTOPp->EN_compute_request_put) 
	     & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)))) {
	    __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg 
		= (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg)));
	    __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg = 1U;
	} else {
	    if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0) 
		 & (~ (IData)(vlTOPp->EN_compute_request_put)))) {
		__Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg 
		    = (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg)));
		__Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg = 1U;
	    }
	}
    } else {
	__Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg = 0U;
	__Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg = 1U;
    }
    // ALWAYS at FIFO2.v:81
    if (vlTOPp->RST_N) {
	if (((IData)(vlTOPp->EN_compute_request_put) 
	     & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)))) {
	    __Vdly__mkPNE_test__DOT__fftemp__DOT__full_reg 
		= (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg)));
	    __Vdly__mkPNE_test__DOT__fftemp__DOT__empty_reg = 1U;
	} else {
	    if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
		 & (~ (IData)(vlTOPp->EN_compute_request_put)))) {
		__Vdly__mkPNE_test__DOT__fftemp__DOT__empty_reg 
		    = (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg)));
		__Vdly__mkPNE_test__DOT__fftemp__DOT__full_reg = 1U;
	    }
	}
    } else {
	__Vdly__mkPNE_test__DOT__fftemp__DOT__empty_reg = 0U;
	__Vdly__mkPNE_test__DOT__fftemp__DOT__full_reg = 1U;
    }
    // ALWAYS at FIFO2.v:110
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[0U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->EN_compute_request_put) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->EN_compute_request_put) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg))))) 
	     & vlTOPp->compute_request_put[1U]) | (
						   VL_NEGATE_I((IData)(
								       ((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
									& (~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg))))) 
						   & vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[0U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					   & (~ (IData)(vlTOPp->EN_compute_request_put))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->EN_compute_request_put)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[0U]));
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[1U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->EN_compute_request_put) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->EN_compute_request_put) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg))))) 
	     & vlTOPp->compute_request_put[2U]) | (
						   VL_NEGATE_I((IData)(
								       ((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
									& (~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg))))) 
						   & vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[1U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					   & (~ (IData)(vlTOPp->EN_compute_request_put))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->EN_compute_request_put)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[1U]));
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[2U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->EN_compute_request_put) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->EN_compute_request_put) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg))))) 
	     & vlTOPp->compute_request_put[3U]) | (
						   VL_NEGATE_I((IData)(
								       ((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
									& (~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg))))) 
						   & vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[2U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					   & (~ (IData)(vlTOPp->EN_compute_request_put))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->EN_compute_request_put)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[2U]));
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->EN_compute_request_put) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->EN_compute_request_put) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg))))) 
	     & vlTOPp->compute_request_put[4U]) | (
						   VL_NEGATE_I((IData)(
								       ((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
									& (~ (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg))))) 
						   & vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[3U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					   & (~ (IData)(vlTOPp->EN_compute_request_put))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->EN_compute_request_put)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U]));
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[0U] 
	= (((IData)(vlTOPp->EN_compute_request_put) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))
	    ? vlTOPp->compute_request_put[1U] : vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[0U]);
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[1U] 
	= (((IData)(vlTOPp->EN_compute_request_put) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))
	    ? vlTOPp->compute_request_put[2U] : vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[1U]);
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[2U] 
	= (((IData)(vlTOPp->EN_compute_request_put) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))
	    ? vlTOPp->compute_request_put[3U] : vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[2U]);
    __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[3U] 
	= (((IData)(vlTOPp->EN_compute_request_put) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg))
	    ? vlTOPp->compute_request_put[4U] : vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[3U]);
    // ALWAYS at FIFO2.v:110
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[0U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[0U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U]));
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[1U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[1U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[1U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[1U]));
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[2U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[2U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[2U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[2U]));
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[3U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[3U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[3U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[3U]));
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[4U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[4U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U]));
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[0U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[0U]
	    : vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[0U]);
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[1U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[1U]
	    : vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[1U]);
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[2U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[2U]
	    : vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[2U]);
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[3U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[3U]
	    : vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[3U]);
    __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[4U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[4U]
	    : vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[4U]);
    // ALWAYS at FIFO2.v:110
    __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->EN_compute_request_put) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->EN_compute_request_put) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__024D_IN) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data1_reg)) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)) 
					   & (~ (IData)(vlTOPp->EN_compute_request_put))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->EN_compute_request_put)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg));
    __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data1_reg 
	= (((IData)(vlTOPp->EN_compute_request_put) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__024D_IN
	    : vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data1_reg);
    // ALWAYS at FIFO2.v:110
    __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->EN_compute_request_put) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->EN_compute_request_put) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__024D_IN) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data1_reg)) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)) 
					   & (~ (IData)(vlTOPp->EN_compute_request_put))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->EN_compute_request_put)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg));
    __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data1_reg 
	= (((IData)(vlTOPp->EN_compute_request_put) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__024D_IN
	    : vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data1_reg);
    // ALWAYS at FIFO2.v:81
    if (vlTOPp->RST_N) {
	if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0) 
	     & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)))) {
	    __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg 
		= (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg)));
	    __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg = 1U;
	} else {
	    if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
		 & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)))) {
		__Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg 
		    = (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg)));
		__Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg = 1U;
	    }
	}
    } else {
	__Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg = 0U;
	__Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg = 1U;
    }
    // ALWAYS at FIFO2.v:110
    __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
	= (((VL_NEGATE_Q((QData)((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg))) 
					  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0) 
					      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg)))))) 
	     & vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__024D_IN) 
	    | (VL_NEGATE_Q((QData)((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1) 
					    & (~ (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg)))))) 
	       & vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data1_reg)) 
	   | (VL_NEGATE_Q((QData)((IData)((1U & (((
						   (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)) 
						   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0))) 
						  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1)) 
						     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg))) 
						 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0)) 
						    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg))))))) 
	      & vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg));
    __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data1_reg 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__024D_IN
	    : vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data1_reg);
    // ALWAYS at FIFO2.v:81
    if (vlTOPp->RST_N) {
	if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
	     & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)))) {
	    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg 
		= (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg)));
	    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg = 1U;
	} else {
	    if (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
		 & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)))) {
		__Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg 
		    = (1U & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg)));
		__Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg = 1U;
	    }
	}
    } else {
	__Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg = 0U;
	__Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg = 1U;
    }
    // ALWAYS at FIFO2.v:110
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[0U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[0U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U]));
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[1U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[1U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U]));
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[2U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[2U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[2U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[2U]));
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[3U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[3U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[3U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[3U]));
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
	= (((VL_NEGATE_I((IData)((((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				   & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))) 
				  | (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
				      & (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
				     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg))))) 
	     & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[4U]) 
	    | (VL_NEGATE_I((IData)(((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1) 
				    & (~ (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg))))) 
	       & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[4U])) 
	   | (VL_NEGATE_I((IData)((1U & ((((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					   & (~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1))) 
					  | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1)) 
					     & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))) 
					 | ((~ (IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1)) 
					    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg)))))) 
	      & vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U]));
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[0U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[0U]
	    : vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[0U]);
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[1U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[1U]
	    : vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[1U]);
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[2U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[2U]
	    : vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[2U]);
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[3U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[3U]
	    : vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[3U]);
    __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[4U] 
	= (((IData)(vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg))
	    ? vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[4U]
	    : vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[4U]);
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[0U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[0U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[1U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[1U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[2U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[2U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[3U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[3U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg 
	= __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg;
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg 
	= __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg;
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[0U] 
	= __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[0U];
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[1U] 
	= __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[1U];
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[2U] 
	= __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[2U];
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[3U] 
	= __Vdly__mkPNE_test__DOT__ffO__DOT__data1_reg[3U];
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[0U] 
	= __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[0U];
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[1U] 
	= __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[1U];
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[2U] 
	= __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[2U];
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[3U] 
	= __Vdly__mkPNE_test__DOT__ffO__DOT__data0_reg[3U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[0U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[0U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[1U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[1U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[2U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[2U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[3U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[3U];
    vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg = __Vdly__mkPNE_test__DOT__ffO__DOT__empty_reg;
    vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg = __Vdly__mkPNE_test__DOT__ffO__DOT__full_reg;
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[0U] 
	= __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[0U];
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[1U] 
	= __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[1U];
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[2U] 
	= __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[2U];
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[3U] 
	= __Vdly__mkPNE_test__DOT__fftemp__DOT__data1_reg[3U];
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[0U] 
	= __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[0U];
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[1U] 
	= __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[1U];
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[2U] 
	= __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[2U];
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
	= __Vdly__mkPNE_test__DOT__fftemp__DOT__data0_reg[3U];
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg 
	= __Vdly__mkPNE_test__DOT__fftemp__DOT__empty_reg;
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg 
	= __Vdly__mkPNE_test__DOT__fftemp__DOT__full_reg;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[0U] 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[0U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[1U] 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[1U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[2U] 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[2U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[3U] 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[3U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[4U] 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[4U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[1U] 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[1U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[2U] 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[2U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[3U] 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[3U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg;
    vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data1_reg 
	= __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data1_reg;
    vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
	= __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg;
    vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg 
	= __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg;
    vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg 
	= __Vdly__mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg;
    vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data1_reg 
	= __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data1_reg;
    vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
	= __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg;
    vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg 
	= __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg;
    vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg 
	= __Vdly__mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data1_reg 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data1_reg;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg 
	= __Vdly__mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[0U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[0U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[1U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[1U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[2U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[2U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[3U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[3U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[4U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[4U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[2U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[2U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[3U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[3U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg 
	= __Vdly__mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg;
    vlTOPp->compute_response_get[0U] = vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[0U];
    vlTOPp->compute_response_get[1U] = vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[1U];
    vlTOPp->compute_response_get[2U] = vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[2U];
    vlTOPp->compute_response_get[3U] = vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[3U];
    vlTOPp->RDY_compute_response_get = vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg;
    vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out = ((IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg) 
						   & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg));
    __Vtemp53[0U] = ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[1U] 
		      << 0x1eU) | (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] 
				   >> 2U));
    __Vtemp53[1U] = ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[2U] 
		      << 0x1eU) | (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[1U] 
				   >> 2U));
    __Vtemp53[2U] = ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[3U] 
		      << 0x1eU) | (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[2U] 
				   >> 2U));
    __Vtemp53[3U] = ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
		      << 0x1eU) | (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[3U] 
				   >> 2U));
    VL_ADD_W(4, __Vtemp54, vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg, __Vtemp53);
    vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[0U] 
	= __Vtemp54[0U];
    vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[1U] 
	= __Vtemp54[1U];
    vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[2U] 
	= __Vtemp54[2U];
    vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
	= __Vtemp54[3U];
    vlTOPp->mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133 
	= (3U & ((2U == (3U & (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
			       >> 0x13U))) ? 1U : (
						   (2U 
						    == 
						    (3U 
						     & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
							>> 0x13U)))
						    ? 
						   (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
						    >> 0x13U)
						    : 3U)));
    vlTOPp->RDY_compute_request_put = (((IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg) 
					& (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg)) 
				       & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg));
    vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10 
	= (0xffU & (((1U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
				    >> 0x1fU))) ? VL_NEGATE_I((IData)(
								      (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
								       >> 0x18U)))
		      : (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
				 >> 0x18U))) - (IData)(0x38U)));
    vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1 
	= ((IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg) 
	   & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg));
    vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0 
	= (((IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg)) 
	   & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg));
    vlTOPp->mkPNE_test__DOT__flag_truncated_frac___05Fh1985 
	= (1U & (((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
		   >> 7U) & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
			     >> 6U)) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
					>> 5U)));
    vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1 
	= ((IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg) 
	   & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg));
    vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1 
	= (((IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg)) 
	   & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg));
    __Vtemp61[0U] = ((0xffffff80U & (((1U & (((~ (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
						  >> 0x1fU)) 
					      & (~ 
						 (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
						  >> 1U))) 
					     & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
						>> 0x1fU)))
				       ? 0xffffffffU
				       : ((1U & (((
						   vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
						   >> 0x1fU) 
						  & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
						     >> 1U)) 
						 & (~ 
						    (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
						     >> 0x1fU))))
					   ? 0U : vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[0U])) 
				     << 7U)) | ((0x40U 
						 & ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] 
						     << 5U) 
						    & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] 
						       << 6U))) 
						| ((0x20U 
						    & ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] 
							<< 4U) 
						       & ((~ 
							   vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U]) 
							  << 5U))) 
						   | (7U 
						      & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							 >> 2U)))));
    __Vtemp61[1U] = ((0x7fU & (((1U & (((~ (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
					    >> 0x1fU)) 
					& (~ (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
					      >> 1U))) 
				       & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
					  >> 0x1fU)))
				 ? 0xffffffffU : ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							>> 0x1fU) 
						       & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							  >> 1U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							  >> 0x1fU))))
						   ? 0U
						   : 
						  vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[0U])) 
			       >> 0x19U)) | (0xffffff80U 
					     & (((1U 
						  & (((~ 
						       (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							>> 0x1fU)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							  >> 1U))) 
						     & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							>> 0x1fU)))
						  ? 0xffffffffU
						  : 
						 ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							>> 0x1fU) 
						       & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							  >> 1U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							  >> 0x1fU))))
						   ? 0U
						   : 
						  vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[1U])) 
						<< 7U)));
    __Vtemp61[2U] = ((0x7fU & (((1U & (((~ (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
					    >> 0x1fU)) 
					& (~ (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
					      >> 1U))) 
				       & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
					  >> 0x1fU)))
				 ? 0xffffffffU : ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							>> 0x1fU) 
						       & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							  >> 1U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							  >> 0x1fU))))
						   ? 0U
						   : 
						  vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[1U])) 
			       >> 0x19U)) | (0xffffff80U 
					     & (((1U 
						  & (((~ 
						       (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							>> 0x1fU)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							  >> 1U))) 
						     & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							>> 0x1fU)))
						  ? 0xffffffffU
						  : 
						 ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							>> 0x1fU) 
						       & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							  >> 1U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							  >> 0x1fU))))
						   ? 0U
						   : 
						  vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[2U])) 
						<< 7U)));
    __Vtemp61[3U] = ((0x7fU & (((1U & (((~ (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
					    >> 0x1fU)) 
					& (~ (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
					      >> 1U))) 
				       & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
					  >> 0x1fU)))
				 ? 0xffffffffU : ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							>> 0x1fU) 
						       & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							  >> 1U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							  >> 0x1fU))))
						   ? 0U
						   : 
						  vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[2U])) 
			       >> 0x19U)) | (0xffffff80U 
					     & (((1U 
						  & (((~ 
						       (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							>> 0x1fU)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							  >> 1U))) 
						     & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							>> 0x1fU)))
						  ? 0x7fffffffU
						  : 
						 ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							>> 0x1fU) 
						       & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							  >> 1U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							  >> 0x1fU))))
						   ? 0x80000000U
						   : 
						  vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U])) 
						<< 7U)));
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[0U] 
	= __Vtemp61[0U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[1U] 
	= __Vtemp61[1U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[2U] 
	= __Vtemp61[2U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[3U] 
	= __Vtemp61[3U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[4U] 
	= (0x7fU & (((1U & (((~ (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
				 >> 0x1fU)) & (~ (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
						  >> 1U))) 
			    & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
			       >> 0x1fU))) ? 0x7fffffffU
		      : ((1U & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
				  >> 0x1fU) & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
					       >> 1U)) 
				& (~ (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
				      >> 0x1fU)))) ? 0x80000000U
			  : vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U])) 
		    >> 0x19U));
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__024D_IN 
	= (((QData)((IData)((((1U == (3U & (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
					    >> 0x13U))) 
			      & (2U == (3U & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
					      >> 0x13U)))) 
			     | ((1U == (3U & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
					      >> 0x13U))) 
				& (2U == (3U & (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
						>> 0x13U))))))) 
	    << 0x23U) | (((QData)((IData)((((2U == 
					     (3U & 
					      (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
					       >> 0x13U))) 
					    & (2U == 
					       (3U 
						& (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
						   >> 0x13U))))
					    ? 2U : 
					   (((1U == 
					      (3U & 
					       (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
						>> 0x13U))) 
					     | (1U 
						== 
						(3U 
						 & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
						    >> 0x13U))))
					     ? 1U : 0U)))) 
			  << 0x21U) | (((QData)((IData)(
							(1U 
							 & ((((vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
							       ^ vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg) 
							      >> 0x12U) 
							     & ((IData)(vlTOPp->mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133) 
								>> 1U)) 
							    & (IData)(vlTOPp->mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133))))) 
					<< 0x20U) | (QData)((IData)(
								    ((0xff000000U 
								      & ((((0x80U 
									    & (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
									       >> 0xaU)) 
									   | (0x7fU 
									      & (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
										>> 0xbU))) 
									  + 
									  ((0x80U 
									    & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
									       >> 0xaU)) 
									   | (0x7fU 
									      & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
										>> 0xbU)))) 
									 << 0x18U)) 
								     | (0xffffffU 
									& (IData)(
										(VL_ULL(0xffffffffffff) 
										& ((QData)((IData)(
										((0x800U 
										& ((IData)(vlTOPp->mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133) 
										<< 0xaU)) 
										| (0x7ffU 
										& vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg)))) 
										* (QData)((IData)(
										((0x800U 
										& ((IData)(vlTOPp->mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133) 
										<< 0xbU)) 
										| (0x7ffU 
										& vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg))))))))))))));
    VL_EXTEND_WI(112,24, __Vtemp63, (0xffffffU & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg)));
    VL_SHIFTR_WWI(112,112,8, __Vtemp64, __Vtemp63, 
		  (0xffU & ((IData)(0x16U) + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))));
    VL_EXTEND_WI(112,24, __Vtemp65, (0xffffffU & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg)));
    VL_SHIFTL_WWI(112,112,8, __Vtemp66, __Vtemp65, 
		  (0xffU & ((IData)(0x22U) + (IData)(
						     (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
						      >> 0x18U)))));
    __Vtemp70[3U] = ((0x7fff0000U & (((((IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
						 >> 0x1fU)) 
					& (0x80U < 
					   (0xffU & 
					    (0x80U 
					     ^ ((IData)(0x16U) 
						+ (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10)))))) 
				       | (0x80U >= 
					  (0xffU & 
					   (0x80U ^ 
					    ((IData)(2U) 
					     + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))
				       ? 0U : (0xffffffU 
					       & ((0x17U 
						   >= 
						   (0xffU 
						    & ((IData)(0x16U) 
						       - (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))
						   ? 
						  ((0xffffffU 
						    & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg)) 
						   >> 
						   (0xffU 
						    & ((IData)(0x16U) 
						       - (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))
						   : 0U))) 
				     << 0x10U)) | (0xffffU 
						   & (((IData)(
							       (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
								>> 0x1fU)) 
						       & (0x80U 
							  < 
							  (0xffU 
							   & (0x80U 
							      ^ 
							      ((IData)(0x16U) 
							       + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))
						       ? 
						      __Vtemp64[3U]
						       : 
						      __Vtemp66[3U])));
    vlTOPp->mkPNE_test__DOT__x___05Fh1580[0U] = (((IData)(
							  (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
							   >> 0x1fU)) 
						  & (0x80U 
						     < 
						     (0xffU 
						      & (0x80U 
							 ^ 
							 ((IData)(0x16U) 
							  + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))
						  ? 
						 __Vtemp64[0U]
						  : 
						 __Vtemp66[0U]);
    vlTOPp->mkPNE_test__DOT__x___05Fh1580[1U] = (((IData)(
							  (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
							   >> 0x1fU)) 
						  & (0x80U 
						     < 
						     (0xffU 
						      & (0x80U 
							 ^ 
							 ((IData)(0x16U) 
							  + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))
						  ? 
						 __Vtemp64[1U]
						  : 
						 __Vtemp66[1U]);
    vlTOPp->mkPNE_test__DOT__x___05Fh1580[2U] = (((IData)(
							  (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
							   >> 0x1fU)) 
						  & (0x80U 
						     < 
						     (0xffU 
						      & (0x80U 
							 ^ 
							 ((IData)(0x16U) 
							  + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))
						  ? 
						 __Vtemp64[2U]
						  : 
						 __Vtemp66[2U]);
    vlTOPp->mkPNE_test__DOT__x___05Fh1580[3U] = __Vtemp70[3U];
    vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987 
	= ((IData)(vlTOPp->mkPNE_test__DOT__flag_truncated_frac___05Fh1985)
	    ? ((2U & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
		      >> 5U)) | (IData)(vlTOPp->mkPNE_test__DOT__flag_truncated_frac___05Fh1985))
	    : 0U);
    VL_NEGATE_W(4, __Vtemp72, vlTOPp->mkPNE_test__DOT__x___05Fh1580);
    vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[0U] 
	= ((1U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
			  >> 0x20U))) ? __Vtemp72[0U]
	    : vlTOPp->mkPNE_test__DOT__x___05Fh1580[0U]);
    vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[1U] 
	= ((1U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
			  >> 0x20U))) ? __Vtemp72[1U]
	    : vlTOPp->mkPNE_test__DOT__x___05Fh1580[1U]);
    vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[2U] 
	= ((1U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
			  >> 0x20U))) ? __Vtemp72[2U]
	    : vlTOPp->mkPNE_test__DOT__x___05Fh1580[2U]);
    vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[3U] 
	= ((0x80000000U & ((IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
				    >> 0x20U)) << 0x1fU)) 
	   | (0x7fffffffU & ((1U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
					    >> 0x20U)))
			      ? __Vtemp72[3U] : vlTOPp->mkPNE_test__DOT__x___05Fh1580[3U])));
    vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[0U] 
	= ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
						   >> 1U)))) 
			   << 2U)) | (IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987));
    vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[1U] 
	= ((3U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
					     >> 1U)))) 
		  >> 0x1eU)) | (0xfffffffcU & (VL_NEGATE_I((IData)(
								   (1U 
								    & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
								       >> 1U)))) 
					       << 2U)));
    vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[2U] 
	= ((3U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
					     >> 1U)))) 
		  >> 0x1eU)) | (0xfffffffcU & (VL_NEGATE_I((IData)(
								   (1U 
								    & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
								       >> 1U)))) 
					       << 2U)));
    vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
	= ((3U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
					     >> 1U)))) 
		  >> 0x1eU)) | (0xfffffffcU & (VL_NEGATE_I((IData)(
								   (1U 
								    & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
								       >> 1U)))) 
					       << 2U)));
    VL_EXTEND_WI(112,24, __Vtemp83, (0xffffffU & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg)));
    __Vtemp84[0U] = 0xffffffffU;
    __Vtemp84[1U] = 0xffffffffU;
    __Vtemp84[2U] = 0xffffffffU;
    __Vtemp84[3U] = 0xffffU;
    VL_SHIFTR_WWI(112,112,8, __Vtemp85, __Vtemp84, 
		  (0xffU & ((IData)(0x15U) + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))));
    __Vtemp88[0U] = ((0xfffffffcU & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[0U] 
				     << 2U)) | (((((IData)(
							   (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
							    >> 0x1fU)) 
						   & (0x80U 
						      < 
						      (0xffU 
						       & (0x80U 
							  ^ 
							  ((IData)(0x16U) 
							   + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10)))))) 
						  & ((0x17U 
						      >= 
						      (0x1fU 
						       & ((IData)(0x15U) 
							  + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10)))) 
						     & (IData)(
							       (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
								>> 
								(0x1fU 
								 & ((IData)(0x15U) 
								    + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))) 
						 << 1U) 
						| (1U 
						   & ((((~ (IData)(
								   (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
								    >> 0x1fU))) 
							| (0x80U 
							   >= 
							   (0xffU 
							    & (0x80U 
							       ^ 
							       ((IData)(0x16U) 
								+ (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10)))))) 
						       | (0x81U 
							  >= 
							  (0xffU 
							   & (0x80U 
							      ^ 
							      ((IData)(0x16U) 
							       + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10)))))) 
						      | (0U 
							 == 
							 ((((__Vtemp83[0U] 
							     & (~ 
								__Vtemp85[0U])) 
							    | (__Vtemp83[1U] 
							       & (~ 
								  __Vtemp85[1U]))) 
							   | (__Vtemp83[2U] 
							      & (~ 
								 __Vtemp85[2U]))) 
							  | (__Vtemp83[3U] 
							     & (~ 
								__Vtemp85[3U]))))))));
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[0U] 
	= __Vtemp88[0U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[1U] 
	= ((3U & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[0U] 
		  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[1U] 
					       << 2U)));
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[2U] 
	= ((3U & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[1U] 
		  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[2U] 
					       << 2U)));
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[3U] 
	= ((3U & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[2U] 
		  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[3U] 
					       << 2U)));
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[4U] 
	= ((0x18U & ((((0U == (((vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[0U] 
				 | vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[1U]) 
				| vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[2U]) 
			       | vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[3U])) 
		       & (0U == (3U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
					       >> 0x21U)))))
		       ? 2U : (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
				       >> 0x21U))) 
		     << 3U)) | ((4U & ((IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
						>> 0x23U)) 
				       << 2U)) | (3U 
						  & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[3U] 
						     >> 0x1eU))));
    __Vtemp91[0U] = ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
		      << 0x19U) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
				   >> 7U));
    __Vtemp91[1U] = ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[2U] 
		      << 0x19U) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
				   >> 7U));
    __Vtemp91[2U] = ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[3U] 
		      << 0x19U) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[2U] 
				   >> 7U));
    __Vtemp91[3U] = ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
		      << 0x19U) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[3U] 
				   >> 7U));
    VL_ADD_W(4, __Vtemp92, __Vtemp91, vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74);
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[0U] 
	= __Vtemp92[0U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[1U] 
	= __Vtemp92[1U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[2U] 
	= __Vtemp92[2U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
	= __Vtemp92[3U];
    vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] = ((1U 
						  & (((~ 
						       (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU))) 
						     & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							>> 0x1fU)))
						  ? 0xffffffffU
						  : 
						 ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U) 
						       & (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							  >> 0x1fU))))
						   ? 0U
						   : 
						  vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[0U]));
    vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U] = ((1U 
						  & (((~ 
						       (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU))) 
						     & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							>> 0x1fU)))
						  ? 0xffffffffU
						  : 
						 ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U) 
						       & (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							  >> 0x1fU))))
						   ? 0U
						   : 
						  vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[1U]));
    vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U] = ((1U 
						  & (((~ 
						       (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU))) 
						     & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							>> 0x1fU)))
						  ? 0xffffffffU
						  : 
						 ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U) 
						       & (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							  >> 0x1fU))))
						   ? 0U
						   : 
						  vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[2U]));
    vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U] = ((1U 
						  & (((~ 
						       (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU))) 
						     & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							>> 0x1fU)))
						  ? 0x7fffffffU
						  : 
						 ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U) 
						       & (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							  >> 0x1fU))))
						   ? 0x80000000U
						   : 
						  vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U]));
    __Vtemp114[3U] = (((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
				   | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
				  | vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
				 | (0x7fffffffU & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
			 & (~ (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
			       >> 6U))) & (0U == (3U 
						  & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						      << 0x1dU) 
						     | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
							>> 3U))))) 
		       & (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
					<< 0x1fU) | 
				       (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
					>> 1U))))) ? 0U
		       : ((0x80000000U & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
					  << 0x19U)) 
			  | (0x7fffffffU & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U])));
    __Vtemp116[0U] = ((1U & ((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					 | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					| vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
				       | (0x7fffffffU 
					  & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
			       & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
				  >> 6U)) | vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U]) 
			     | ((1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
					       << 0x1dU) 
					      | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						 >> 3U)))) 
				| (1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))))
		       ? 0U : (((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					    | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					   | vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
					  | (0x7fffffffU 
					     & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
				  & (~ (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
					>> 6U))) & 
				 (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						<< 0x1dU) 
					       | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						  >> 3U))))) 
				& (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))
			        ? 0U : vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U]));
    __Vtemp116[1U] = ((1U & ((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					 | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					| vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
				       | (0x7fffffffU 
					  & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
			       & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
				  >> 6U)) | vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U]) 
			     | ((1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
					       << 0x1dU) 
					      | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						 >> 3U)))) 
				| (1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))))
		       ? 0U : (((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					    | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					   | vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
					  | (0x7fffffffU 
					     & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
				  & (~ (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
					>> 6U))) & 
				 (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						<< 0x1dU) 
					       | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						  >> 3U))))) 
				& (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))
			        ? 0U : vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]));
    __Vtemp116[2U] = ((1U & ((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					 | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					| vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
				       | (0x7fffffffU 
					  & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
			       & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
				  >> 6U)) | vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U]) 
			     | ((1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
					       << 0x1dU) 
					      | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						 >> 3U)))) 
				| (1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))))
		       ? 0U : (((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					    | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					   | vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
					  | (0x7fffffffU 
					     & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
				  & (~ (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
					>> 6U))) & 
				 (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						<< 0x1dU) 
					       | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						  >> 3U))))) 
				& (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))
			        ? 0U : vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]));
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[0U] 
	= __Vtemp116[0U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[1U] 
	= __Vtemp116[1U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[2U] 
	= __Vtemp116[2U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[3U] 
	= ((1U & ((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
			      | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
			     | vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
			    | (0x7fffffffU & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
		    & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
		       >> 6U)) | vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U]) 
		  | ((1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
				    << 0x1dU) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						 >> 3U)))) 
		     | (1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
				      << 0x1fU) | (
						   vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))))
	    ? 0x80000000U : __Vtemp114[3U]);
}

VL_INLINE_OPT void VmkPNE_test::_combo__TOP__2(VmkPNE_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkPNE_test::_combo__TOP__2\n"); );
    VmkPNE_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201 = 
	(0x7fffU & ((0x80000000U & vlTOPp->compute_request_put[0U])
		     ? VL_NEGATE_I(((vlTOPp->compute_request_put[1U] 
				     << 0x10U) | (vlTOPp->compute_request_put[0U] 
						  >> 0x10U)))
		     : ((vlTOPp->compute_request_put[1U] 
			 << 0x10U) | (vlTOPp->compute_request_put[0U] 
				      >> 0x10U))));
    vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461 = 
	(0x7fffU & ((0x8000U & vlTOPp->compute_request_put[0U])
		     ? VL_NEGATE_I(vlTOPp->compute_request_put[0U])
		     : vlTOPp->compute_request_put[0U]));
    vlTOPp->mkPNE_test__DOT__x___05Fh16743 = ((0x4000U 
					       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
					       ? ((0x2000U 
						   & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						   ? 
						  ((0x1000U 
						    & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						    ? 
						   ((0x800U 
						     & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						     ? 
						    ((0x400U 
						      & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						      ? 
						     ((0x200U 
						       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						       ? 
						      ((0x100U 
							& (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						        ? 
						       ((0x80U 
							 & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							 ? 
							((0x40U 
							  & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							  ? 
							 ((0x20U 
							   & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							   ? 
							  ((0x10U 
							    & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							    ? 
							   ((8U 
							     & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							     ? 
							    ((4U 
							      & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							      ? 
							     ((2U 
							       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							       ? 
							      ((1U 
								& (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							        ? 0xfU
							        : 0xeU)
							       : 0xdU)
							      : 0xcU)
							     : 0xbU)
							    : 0xaU)
							   : 9U)
							  : 8U)
							 : 7U)
						        : 6U)
						       : 5U)
						      : 4U)
						     : 3U)
						    : 2U)
						   : 1U)
					       : 0U);
    vlTOPp->mkPNE_test__DOT__x___05Fh18881 = ((0x4000U 
					       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
					       ? 0U
					       : ((0x2000U 
						   & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						   ? 1U
						   : 
						  ((0x1000U 
						    & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						    ? 2U
						    : 
						   ((0x800U 
						     & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						     ? 3U
						     : 
						    ((0x400U 
						      & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						      ? 4U
						      : 
						     ((0x200U 
						       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						       ? 5U
						       : 
						      ((0x100U 
							& (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
						        ? 6U
						        : 
						       ((0x80U 
							 & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							 ? 7U
							 : 
							((0x40U 
							  & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							  ? 8U
							  : 
							 ((0x20U 
							   & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							   ? 9U
							   : 
							  ((0x10U 
							    & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							    ? 0xaU
							    : 
							   ((8U 
							     & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							     ? 0xbU
							     : 
							    ((4U 
							      & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							      ? 0xcU
							      : 
							     ((2U 
							       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							       ? 0xdU
							       : 
							      ((1U 
								& (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
							        ? 0xeU
							        : 0xfU)))))))))))))));
    vlTOPp->mkPNE_test__DOT__x___05Fh21994 = ((0x4000U 
					       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
					       ? ((0x2000U 
						   & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						   ? 
						  ((0x1000U 
						    & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						    ? 
						   ((0x800U 
						     & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						     ? 
						    ((0x400U 
						      & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						      ? 
						     ((0x200U 
						       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						       ? 
						      ((0x100U 
							& (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						        ? 
						       ((0x80U 
							 & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							 ? 
							((0x40U 
							  & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							  ? 
							 ((0x20U 
							   & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							   ? 
							  ((0x10U 
							    & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							    ? 
							   ((8U 
							     & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							     ? 
							    ((4U 
							      & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							      ? 
							     ((2U 
							       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							       ? 
							      ((1U 
								& (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							        ? 0xfU
							        : 0xeU)
							       : 0xdU)
							      : 0xcU)
							     : 0xbU)
							    : 0xaU)
							   : 9U)
							  : 8U)
							 : 7U)
						        : 6U)
						       : 5U)
						      : 4U)
						     : 3U)
						    : 2U)
						   : 1U)
					       : 0U);
    vlTOPp->mkPNE_test__DOT__x___05Fh24132 = ((0x4000U 
					       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
					       ? 0U
					       : ((0x2000U 
						   & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						   ? 1U
						   : 
						  ((0x1000U 
						    & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						    ? 2U
						    : 
						   ((0x800U 
						     & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						     ? 3U
						     : 
						    ((0x400U 
						      & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						      ? 4U
						      : 
						     ((0x200U 
						       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						       ? 5U
						       : 
						      ((0x100U 
							& (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
						        ? 6U
						        : 
						       ((0x80U 
							 & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							 ? 7U
							 : 
							((0x40U 
							  & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							  ? 8U
							  : 
							 ((0x20U 
							   & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							   ? 9U
							   : 
							  ((0x10U 
							    & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							    ? 0xaU
							    : 
							   ((8U 
							     & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							     ? 0xbU
							     : 
							    ((4U 
							      & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							      ? 0xcU
							      : 
							     ((2U 
							       & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							       ? 0xdU
							       : 
							      ((1U 
								& (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
							        ? 0xeU
							        : 0xfU)))))))))))))));
    vlTOPp->mkPNE_test__DOT__IF_new_inp6201_BIT_14_THEN_b6733_ELSE_b6735___05Fq8 
	= (0x1fU & ((0x4000U & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
		     ? ((IData)(vlTOPp->mkPNE_test__DOT__x___05Fh16743) 
			- (IData)(1U)) : VL_NEGATE_I((IData)(vlTOPp->mkPNE_test__DOT__x___05Fh18881))));
    vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_31_88_THEN_0_MIN_ETC___05F_d325 
	= (0xfU & ((0x4000U & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))
		    ? (((1U & ((((((((((((((((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					     >> 0xeU) 
					    & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					       >> 0xdU)) 
					   & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					      >> 0xcU)) 
					  & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					     >> 0xbU)) 
					 & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					    >> 0xaU)) 
					& ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					   >> 9U)) 
				       & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					  >> 8U)) & 
				      ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
				       >> 7U)) & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
						  >> 6U)) 
				    & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
				       >> 5U)) & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
						  >> 4U)) 
				  & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
				     >> 3U)) & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
						>> 2U)) 
				& ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
				   >> 1U)) & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201)))
			 ? 0xfU : 0xeU) - (IData)(vlTOPp->mkPNE_test__DOT__x___05Fh16743))
		    : (((1U & ((((((((((((((~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					       >> 0xdU)) 
					   & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
						 >> 0xcU))) 
					  & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
						>> 0xbU))) 
					 & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					       >> 0xaU))) 
					& (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					      >> 9U))) 
				       & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					     >> 8U))) 
				      & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					    >> 7U))) 
				     & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					   >> 6U))) 
				    & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					  >> 5U))) 
				   & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
					 >> 4U))) & 
				  (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
				      >> 3U))) & (~ 
						  ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
						   >> 2U))) 
				& (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
				      >> 1U))) & (~ (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201))))
			 ? 0xfU : 0xeU) - (IData)(vlTOPp->mkPNE_test__DOT__x___05Fh18881))));
    vlTOPp->mkPNE_test__DOT__IF_new_inp1461_BIT_14_THEN_b1984_ELSE_b1986___05Fq6 
	= (0x1fU & ((0x4000U & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
		     ? ((IData)(vlTOPp->mkPNE_test__DOT__x___05Fh21994) 
			- (IData)(1U)) : VL_NEGATE_I((IData)(vlTOPp->mkPNE_test__DOT__x___05Fh24132))));
    vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_15_69_THEN_0_MIN_ETC___05F_d506 
	= (0xfU & ((0x4000U & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))
		    ? (((1U & ((((((((((((((((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					     >> 0xeU) 
					    & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					       >> 0xdU)) 
					   & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					      >> 0xcU)) 
					  & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					     >> 0xbU)) 
					 & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					    >> 0xaU)) 
					& ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					   >> 9U)) 
				       & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					  >> 8U)) & 
				      ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
				       >> 7U)) & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
						  >> 6U)) 
				    & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
				       >> 5U)) & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
						  >> 4U)) 
				  & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
				     >> 3U)) & ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
						>> 2U)) 
				& ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
				   >> 1U)) & (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461)))
			 ? 0xfU : 0xeU) - (IData)(vlTOPp->mkPNE_test__DOT__x___05Fh21994))
		    : (((1U & ((((((((((((((~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					       >> 0xdU)) 
					   & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
						 >> 0xcU))) 
					  & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
						>> 0xbU))) 
					 & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					       >> 0xaU))) 
					& (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					      >> 9U))) 
				       & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					     >> 8U))) 
				      & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					    >> 7U))) 
				     & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					   >> 6U))) 
				    & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					  >> 5U))) 
				   & (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
					 >> 4U))) & 
				  (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
				      >> 3U))) & (~ 
						  ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
						   >> 2U))) 
				& (~ ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
				      >> 1U))) & (~ (IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461))))
			 ? 0xfU : 0xeU) - (IData)(vlTOPp->mkPNE_test__DOT__x___05Fh24132))));
    // ALWAYS at mkPNE_test.v:1027
    vlTOPp->__Vtableidx1 = vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_31_88_THEN_0_MIN_ETC___05F_d325;
    vlTOPp->mkPNE_test__DOT__x___05Fh21287 = vlTOPp->__Vtable1_mkPNE_test__DOT__x___05Fh21287
	[vlTOPp->__Vtableidx1];
    // ALWAYS at mkPNE_test.v:1048
    vlTOPp->__Vtableidx2 = vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_15_69_THEN_0_MIN_ETC___05F_d506;
    vlTOPp->mkPNE_test__DOT__x___05Fh26538 = vlTOPp->__Vtable2_mkPNE_test__DOT__x___05Fh26538
	[vlTOPp->__Vtableidx2];
    vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__024D_IN 
	= (((((0U == (0x7fffU & ((vlTOPp->compute_request_put[1U] 
				  << 0x10U) | (vlTOPp->compute_request_put[0U] 
					       >> 0x10U)))) 
	      & (~ (vlTOPp->compute_request_put[0U] 
		    >> 0x1fU))) ? 2U : (((0U == (0x7fffU 
						 & ((vlTOPp->compute_request_put[1U] 
						     << 0x10U) 
						    | (vlTOPp->compute_request_put[0U] 
						       >> 0x10U)))) 
					 & (vlTOPp->compute_request_put[0U] 
					    >> 0x1fU))
					 ? 1U : 0U)) 
	    << 0x13U) | ((0x40000U & (vlTOPp->compute_request_put[0U] 
				      >> 0xdU)) | (
						   ((0U 
						     == 
						     (0x7fffU 
						      & ((vlTOPp->compute_request_put[1U] 
							  << 0x10U) 
							 | (vlTOPp->compute_request_put[0U] 
							    >> 0x10U)))) 
						    & (~ 
						       (vlTOPp->compute_request_put[0U] 
							>> 0x1fU)))
						    ? 0U
						    : 
						   ((0x3f800U 
						     & ((((IData)(vlTOPp->mkPNE_test__DOT__IF_new_inp6201_BIT_14_THEN_b6733_ELSE_b6735___05Fq8) 
							  << 2U) 
							 + 
							 (3U 
							  & ((2U 
							      > (IData)(vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_31_88_THEN_0_MIN_ETC___05F_d325))
							      ? 
							     ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
							      << 
							      (0xfU 
							       & ((IData)(2U) 
								  - (IData)(vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_31_88_THEN_0_MIN_ETC___05F_d325))))
							      : 
							     (0x7fffU 
							      & (((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
								  & (~ 
								     ((IData)(0x7ffeU) 
								      << 
								      (0xfU 
								       & ((IData)(vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_31_88_THEN_0_MIN_ETC___05F_d325) 
									  - (IData)(1U)))))) 
								 >> 
								 (0xfU 
								  & ((IData)(vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_31_88_THEN_0_MIN_ETC___05F_d325) 
								     - (IData)(2U)))))))) 
							<< 0xbU)) 
						    | (0x7ffU 
						       & ((0xaU 
							   >= (IData)(vlTOPp->mkPNE_test__DOT__x___05Fh21287))
							   ? 
							  ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh16201) 
							   << (IData)(vlTOPp->mkPNE_test__DOT__x___05Fh21287))
							   : 0U))))));
    vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__024D_IN 
	= (((((0U == (0x7fffU & vlTOPp->compute_request_put[0U])) 
	      & (~ (vlTOPp->compute_request_put[0U] 
		    >> 0xfU))) ? 2U : (((0U == (0x7fffU 
						& vlTOPp->compute_request_put[0U])) 
					& (vlTOPp->compute_request_put[0U] 
					   >> 0xfU))
				        ? 1U : 0U)) 
	    << 0x13U) | ((0x40000U & (vlTOPp->compute_request_put[0U] 
				      << 3U)) | (((0U 
						   == 
						   (0x7fffU 
						    & vlTOPp->compute_request_put[0U])) 
						  & (~ 
						     (vlTOPp->compute_request_put[0U] 
						      >> 0xfU)))
						  ? 0U
						  : 
						 ((0x3f800U 
						   & ((((IData)(vlTOPp->mkPNE_test__DOT__IF_new_inp1461_BIT_14_THEN_b1984_ELSE_b1986___05Fq6) 
							<< 2U) 
						       + 
						       (3U 
							& ((2U 
							    > (IData)(vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_15_69_THEN_0_MIN_ETC___05F_d506))
							    ? 
							   ((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
							    << 
							    (0xfU 
							     & ((IData)(2U) 
								- (IData)(vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_15_69_THEN_0_MIN_ETC___05F_d506))))
							    : 
							   (0x7fffU 
							    & (((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
								& (~ 
								   ((IData)(0x7ffeU) 
								    << 
								    (0xfU 
								     & ((IData)(vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_15_69_THEN_0_MIN_ETC___05F_d506) 
									- (IData)(1U)))))) 
							       >> 
							       (0xfU 
								& ((IData)(vlTOPp->mkPNE_test__DOT__IF_IF_compute_request_put_BIT_15_69_THEN_0_MIN_ETC___05F_d506) 
								   - (IData)(2U)))))))) 
						      << 0xbU)) 
						  | (0x7ffU 
						     & ((0xaU 
							 >= (IData)(vlTOPp->mkPNE_test__DOT__x___05Fh26538))
							 ? 
							((IData)(vlTOPp->mkPNE_test__DOT__new_inp___05Fh21461) 
							 << (IData)(vlTOPp->mkPNE_test__DOT__x___05Fh26538))
							 : 0U))))));
}

void VmkPNE_test::_initial__TOP__4(VmkPNE_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkPNE_test::_initial__TOP__4\n"); );
    VmkPNE_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at FIFO2.v:71
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg = 0U;
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg = 1U;
    // INITIAL at FIFO2.v:71
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__ffO__DOT__data1_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg = 0U;
    vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg = 1U;
    // INITIAL at FIFO2.v:71
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] = 0xaU;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg[4U] = 0xaU;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg = 0U;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg = 1U;
    // INITIAL at FIFO2.v:71
    vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg = 0xaaaaaU;
    vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data1_reg = 0xaaaaaU;
    vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg = 0U;
    vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg = 1U;
    // INITIAL at FIFO2.v:71
    vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg = 0xaaaaaU;
    vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data1_reg = 0xaaaaaU;
    vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg = 0U;
    vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg = 1U;
    // INITIAL at FIFO2.v:71
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__data1_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg = 0U;
    vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg = 1U;
    // INITIAL at FIFO2.v:71
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg = VL_ULL(0xaaaaaaaaa);
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data1_reg = VL_ULL(0xaaaaaaaaa);
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg = 0U;
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg = 1U;
    // INITIAL at FIFO2.v:71
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] = 0x2aU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg[4U] = 0x2aU;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg = 0U;
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg = 1U;
}

void VmkPNE_test::_settle__TOP__5(VmkPNE_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkPNE_test::_settle__TOP__5\n"); );
    VmkPNE_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp117,127,0,4);
    VL_SIGW(__Vtemp118,127,0,4);
    VL_SIGW(__Vtemp125,159,0,5);
    VL_SIGW(__Vtemp127,127,0,4);
    VL_SIGW(__Vtemp128,127,0,4);
    VL_SIGW(__Vtemp129,127,0,4);
    VL_SIGW(__Vtemp130,127,0,4);
    VL_SIGW(__Vtemp134,127,0,4);
    VL_SIGW(__Vtemp136,127,0,4);
    VL_SIGW(__Vtemp147,127,0,4);
    VL_SIGW(__Vtemp148,127,0,4);
    VL_SIGW(__Vtemp149,127,0,4);
    VL_SIGW(__Vtemp152,159,0,5);
    VL_SIGW(__Vtemp155,127,0,4);
    VL_SIGW(__Vtemp156,127,0,4);
    VL_SIGW(__Vtemp178,127,0,4);
    VL_SIGW(__Vtemp180,127,0,4);
    // Body
    vlTOPp->compute_response_get[0U] = vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[0U];
    vlTOPp->compute_response_get[1U] = vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[1U];
    vlTOPp->compute_response_get[2U] = vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[2U];
    vlTOPp->compute_response_get[3U] = vlTOPp->mkPNE_test__DOT__ffO__DOT__data0_reg[3U];
    vlTOPp->RDY_compute_response_get = vlTOPp->mkPNE_test__DOT__ffO__DOT__empty_reg;
    vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_out = ((IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg) 
						   & (IData)(vlTOPp->mkPNE_test__DOT__ffO__DOT__full_reg));
    vlTOPp->mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133 
	= (3U & ((2U == (3U & (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
			       >> 0x13U))) ? 1U : (
						   (2U 
						    == 
						    (3U 
						     & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
							>> 0x13U)))
						    ? 
						   (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
						    >> 0x13U)
						    : 3U)));
    vlTOPp->RDY_compute_request_put = (((IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg) 
					& (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg)) 
				       & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__full_reg));
    __Vtemp117[0U] = ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[1U] 
		       << 0x1eU) | (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] 
				    >> 2U));
    __Vtemp117[1U] = ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[2U] 
		       << 0x1eU) | (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[1U] 
				    >> 2U));
    __Vtemp117[2U] = ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[3U] 
		       << 0x1eU) | (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[2U] 
				    >> 2U));
    __Vtemp117[3U] = ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
		       << 0x1eU) | (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[3U] 
				    >> 2U));
    VL_ADD_W(4, __Vtemp118, vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg, __Vtemp117);
    vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[0U] 
	= __Vtemp118[0U];
    vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[1U] 
	= __Vtemp118[1U];
    vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[2U] 
	= __Vtemp118[2U];
    vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
	= __Vtemp118[3U];
    vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1 
	= ((IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg) 
	   & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg));
    vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0 
	= (((IData)(vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg)) 
	   & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg));
    vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10 
	= (0xffU & (((1U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
				    >> 0x1fU))) ? VL_NEGATE_I((IData)(
								      (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
								       >> 0x18U)))
		      : (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
				 >> 0x18U))) - (IData)(0x38U)));
    vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1 
	= ((IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg) 
	   & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg));
    vlTOPp->mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1 
	= (((IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg) 
	    & (IData)(vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg)) 
	   & (IData)(vlTOPp->mkPNE_test__DOT__fftemp__DOT__empty_reg));
    vlTOPp->mkPNE_test__DOT__flag_truncated_frac___05Fh1985 
	= (1U & (((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
		   >> 7U) & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
			     >> 6U)) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
					>> 5U)));
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__024D_IN 
	= (((QData)((IData)((((1U == (3U & (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
					    >> 0x13U))) 
			      & (2U == (3U & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
					      >> 0x13U)))) 
			     | ((1U == (3U & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
					      >> 0x13U))) 
				& (2U == (3U & (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
						>> 0x13U))))))) 
	    << 0x23U) | (((QData)((IData)((((2U == 
					     (3U & 
					      (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
					       >> 0x13U))) 
					    & (2U == 
					       (3U 
						& (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
						   >> 0x13U))))
					    ? 2U : 
					   (((1U == 
					      (3U & 
					       (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
						>> 0x13U))) 
					     | (1U 
						== 
						(3U 
						 & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
						    >> 0x13U))))
					     ? 1U : 0U)))) 
			  << 0x21U) | (((QData)((IData)(
							(1U 
							 & ((((vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
							       ^ vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg) 
							      >> 0x12U) 
							     & ((IData)(vlTOPp->mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133) 
								>> 1U)) 
							    & (IData)(vlTOPp->mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133))))) 
					<< 0x20U) | (QData)((IData)(
								    ((0xff000000U 
								      & ((((0x80U 
									    & (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
									       >> 0xaU)) 
									   | (0x7fU 
									      & (vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg 
										>> 0xbU))) 
									  + 
									  ((0x80U 
									    & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
									       >> 0xaU)) 
									   | (0x7fU 
									      & (vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg 
										>> 0xbU)))) 
									 << 0x18U)) 
								     | (0xffffffU 
									& (IData)(
										(VL_ULL(0xffffffffffff) 
										& ((QData)((IData)(
										((0x800U 
										& ((IData)(vlTOPp->mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133) 
										<< 0xaU)) 
										| (0x7ffU 
										& vlTOPp->mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg)))) 
										* (QData)((IData)(
										((0x800U 
										& ((IData)(vlTOPp->mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133) 
										<< 0xbU)) 
										| (0x7ffU 
										& vlTOPp->mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg))))))))))))));
    __Vtemp125[0U] = ((0xffffff80U & (((1U & (((~ (
						   vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
						   >> 0x1fU)) 
					       & (~ 
						  (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
						   >> 1U))) 
					      & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
						 >> 0x1fU)))
				        ? 0xffffffffU
				        : ((1U & ((
						   (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
						    >> 0x1fU) 
						   & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
						      >> 1U)) 
						  & (~ 
						     (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
						      >> 0x1fU))))
					    ? 0U : 
					   vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[0U])) 
				      << 7U)) | ((0x40U 
						  & ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] 
						      << 5U) 
						     & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] 
							<< 6U))) 
						 | ((0x20U 
						     & ((vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U] 
							 << 4U) 
							& ((~ 
							    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[0U]) 
							   << 5U))) 
						    | (7U 
						       & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							  >> 2U)))));
    __Vtemp125[1U] = ((0x7fU & (((1U & (((~ (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
					     >> 0x1fU)) 
					 & (~ (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
					       >> 1U))) 
					& (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
					   >> 0x1fU)))
				  ? 0xffffffffU : (
						   (1U 
						    & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							 >> 0x1fU) 
							& (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							   >> 1U)) 
						       & (~ 
							  (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							   >> 0x1fU))))
						    ? 0U
						    : 
						   vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[0U])) 
				>> 0x19U)) | (0xffffff80U 
					      & (((1U 
						   & (((~ 
							(vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							 >> 0x1fU)) 
						       & (~ 
							  (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							   >> 1U))) 
						      & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							 >> 0x1fU)))
						   ? 0xffffffffU
						   : 
						  ((1U 
						    & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							 >> 0x1fU) 
							& (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							   >> 1U)) 
						       & (~ 
							  (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							   >> 0x1fU))))
						    ? 0U
						    : 
						   vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[1U])) 
						 << 7U)));
    __Vtemp125[2U] = ((0x7fU & (((1U & (((~ (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
					     >> 0x1fU)) 
					 & (~ (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
					       >> 1U))) 
					& (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
					   >> 0x1fU)))
				  ? 0xffffffffU : (
						   (1U 
						    & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							 >> 0x1fU) 
							& (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							   >> 1U)) 
						       & (~ 
							  (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							   >> 0x1fU))))
						    ? 0U
						    : 
						   vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[1U])) 
				>> 0x19U)) | (0xffffff80U 
					      & (((1U 
						   & (((~ 
							(vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							 >> 0x1fU)) 
						       & (~ 
							  (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							   >> 1U))) 
						      & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							 >> 0x1fU)))
						   ? 0xffffffffU
						   : 
						  ((1U 
						    & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							 >> 0x1fU) 
							& (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							   >> 1U)) 
						       & (~ 
							  (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							   >> 0x1fU))))
						    ? 0U
						    : 
						   vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[2U])) 
						 << 7U)));
    __Vtemp125[3U] = ((0x7fU & (((1U & (((~ (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
					     >> 0x1fU)) 
					 & (~ (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
					       >> 1U))) 
					& (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
					   >> 0x1fU)))
				  ? 0xffffffffU : (
						   (1U 
						    & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							 >> 0x1fU) 
							& (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							   >> 1U)) 
						       & (~ 
							  (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							   >> 0x1fU))))
						    ? 0U
						    : 
						   vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[2U])) 
				>> 0x19U)) | (0xffffff80U 
					      & (((1U 
						   & (((~ 
							(vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							 >> 0x1fU)) 
						       & (~ 
							  (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							   >> 1U))) 
						      & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							 >> 0x1fU)))
						   ? 0x7fffffffU
						   : 
						  ((1U 
						    & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
							 >> 0x1fU) 
							& (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
							   >> 1U)) 
						       & (~ 
							  (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
							   >> 0x1fU))))
						    ? 0x80000000U
						    : 
						   vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U])) 
						 << 7U)));
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[0U] 
	= __Vtemp125[0U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[1U] 
	= __Vtemp125[1U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[2U] 
	= __Vtemp125[2U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[3U] 
	= __Vtemp125[3U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN[4U] 
	= (0x7fU & (((1U & (((~ (vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
				 >> 0x1fU)) & (~ (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
						  >> 1U))) 
			    & (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
			       >> 0x1fU))) ? 0x7fffffffU
		      : ((1U & (((vlTOPp->mkPNE_test__DOT__fftemp__DOT__data0_reg[3U] 
				  >> 0x1fU) & (vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg[4U] 
					       >> 1U)) 
				& (~ (vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U] 
				      >> 0x1fU)))) ? 0x80000000U
			  : vlTOPp->mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166[3U])) 
		    >> 0x19U));
    VL_EXTEND_WI(112,24, __Vtemp127, (0xffffffU & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg)));
    VL_SHIFTR_WWI(112,112,8, __Vtemp128, __Vtemp127, 
		  (0xffU & ((IData)(0x16U) + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))));
    VL_EXTEND_WI(112,24, __Vtemp129, (0xffffffU & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg)));
    VL_SHIFTL_WWI(112,112,8, __Vtemp130, __Vtemp129, 
		  (0xffU & ((IData)(0x22U) + (IData)(
						     (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
						      >> 0x18U)))));
    __Vtemp134[3U] = ((0x7fff0000U & (((((IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
						  >> 0x1fU)) 
					 & (0x80U < 
					    (0xffU 
					     & (0x80U 
						^ ((IData)(0x16U) 
						   + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10)))))) 
					| (0x80U >= 
					   (0xffU & 
					    (0x80U 
					     ^ ((IData)(2U) 
						+ (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))
				        ? 0U : (0xffffffU 
						& ((0x17U 
						    >= 
						    (0xffU 
						     & ((IData)(0x16U) 
							- (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))
						    ? 
						   ((0xffffffU 
						     & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg)) 
						    >> 
						    (0xffU 
						     & ((IData)(0x16U) 
							- (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))
						    : 0U))) 
				      << 0x10U)) | 
		      (0xffffU & (((IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
					    >> 0x1fU)) 
				   & (0x80U < (0xffU 
					       & (0x80U 
						  ^ 
						  ((IData)(0x16U) 
						   + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))
				   ? __Vtemp128[3U]
				   : __Vtemp130[3U])));
    vlTOPp->mkPNE_test__DOT__x___05Fh1580[0U] = (((IData)(
							  (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
							   >> 0x1fU)) 
						  & (0x80U 
						     < 
						     (0xffU 
						      & (0x80U 
							 ^ 
							 ((IData)(0x16U) 
							  + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))
						  ? 
						 __Vtemp128[0U]
						  : 
						 __Vtemp130[0U]);
    vlTOPp->mkPNE_test__DOT__x___05Fh1580[1U] = (((IData)(
							  (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
							   >> 0x1fU)) 
						  & (0x80U 
						     < 
						     (0xffU 
						      & (0x80U 
							 ^ 
							 ((IData)(0x16U) 
							  + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))
						  ? 
						 __Vtemp128[1U]
						  : 
						 __Vtemp130[1U]);
    vlTOPp->mkPNE_test__DOT__x___05Fh1580[2U] = (((IData)(
							  (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
							   >> 0x1fU)) 
						  & (0x80U 
						     < 
						     (0xffU 
						      & (0x80U 
							 ^ 
							 ((IData)(0x16U) 
							  + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))
						  ? 
						 __Vtemp128[2U]
						  : 
						 __Vtemp130[2U]);
    vlTOPp->mkPNE_test__DOT__x___05Fh1580[3U] = __Vtemp134[3U];
    vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987 
	= ((IData)(vlTOPp->mkPNE_test__DOT__flag_truncated_frac___05Fh1985)
	    ? ((2U & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
		      >> 5U)) | (IData)(vlTOPp->mkPNE_test__DOT__flag_truncated_frac___05Fh1985))
	    : 0U);
    VL_NEGATE_W(4, __Vtemp136, vlTOPp->mkPNE_test__DOT__x___05Fh1580);
    vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[0U] 
	= ((1U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
			  >> 0x20U))) ? __Vtemp136[0U]
	    : vlTOPp->mkPNE_test__DOT__x___05Fh1580[0U]);
    vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[1U] 
	= ((1U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
			  >> 0x20U))) ? __Vtemp136[1U]
	    : vlTOPp->mkPNE_test__DOT__x___05Fh1580[1U]);
    vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[2U] 
	= ((1U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
			  >> 0x20U))) ? __Vtemp136[2U]
	    : vlTOPp->mkPNE_test__DOT__x___05Fh1580[2U]);
    vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[3U] 
	= ((0x80000000U & ((IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
				    >> 0x20U)) << 0x1fU)) 
	   | (0x7fffffffU & ((1U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
					    >> 0x20U)))
			      ? __Vtemp136[3U] : vlTOPp->mkPNE_test__DOT__x___05Fh1580[3U])));
    vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[0U] 
	= ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
						   >> 1U)))) 
			   << 2U)) | (IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987));
    vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[1U] 
	= ((3U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
					     >> 1U)))) 
		  >> 0x1eU)) | (0xfffffffcU & (VL_NEGATE_I((IData)(
								   (1U 
								    & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
								       >> 1U)))) 
					       << 2U)));
    vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[2U] 
	= ((3U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
					     >> 1U)))) 
		  >> 0x1eU)) | (0xfffffffcU & (VL_NEGATE_I((IData)(
								   (1U 
								    & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
								       >> 1U)))) 
					       << 2U)));
    vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
	= ((3U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
					     >> 1U)))) 
		  >> 0x1eU)) | (0xfffffffcU & (VL_NEGATE_I((IData)(
								   (1U 
								    & ((IData)(vlTOPp->mkPNE_test__DOT__truncated_frac___05Fh1987) 
								       >> 1U)))) 
					       << 2U)));
    VL_EXTEND_WI(112,24, __Vtemp147, (0xffffffU & (IData)(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg)));
    __Vtemp148[0U] = 0xffffffffU;
    __Vtemp148[1U] = 0xffffffffU;
    __Vtemp148[2U] = 0xffffffffU;
    __Vtemp148[3U] = 0xffffU;
    VL_SHIFTR_WWI(112,112,8, __Vtemp149, __Vtemp148, 
		  (0xffU & ((IData)(0x15U) + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))));
    __Vtemp152[0U] = ((0xfffffffcU & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[0U] 
				      << 2U)) | (((
						   ((IData)(
							    (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
							     >> 0x1fU)) 
						    & (0x80U 
						       < 
						       (0xffU 
							& (0x80U 
							   ^ 
							   ((IData)(0x16U) 
							    + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10)))))) 
						   & ((0x17U 
						       >= 
						       (0x1fU 
							& ((IData)(0x15U) 
							   + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10)))) 
						      & (IData)(
								(vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
								 >> 
								 (0x1fU 
								  & ((IData)(0x15U) 
								     + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10))))))) 
						  << 1U) 
						 | (1U 
						    & ((((~ (IData)(
								    (vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
								     >> 0x1fU))) 
							 | (0x80U 
							    >= 
							    (0xffU 
							     & (0x80U 
								^ 
								((IData)(0x16U) 
								 + (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10)))))) 
							| (0x81U 
							   >= 
							   (0xffU 
							    & (0x80U 
							       ^ 
							       ((IData)(0x16U) 
								+ (IData)(vlTOPp->mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10)))))) 
						       | (0U 
							  == 
							  ((((__Vtemp147[0U] 
							      & (~ 
								 __Vtemp149[0U])) 
							     | (__Vtemp147[1U] 
								& (~ 
								   __Vtemp149[1U]))) 
							    | (__Vtemp147[2U] 
							       & (~ 
								  __Vtemp149[2U]))) 
							   | (__Vtemp147[3U] 
							      & (~ 
								 __Vtemp149[3U]))))))));
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[0U] 
	= __Vtemp152[0U];
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[1U] 
	= ((3U & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[0U] 
		  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[1U] 
					       << 2U)));
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[2U] 
	= ((3U & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[1U] 
		  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[2U] 
					       << 2U)));
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[3U] 
	= ((3U & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[2U] 
		  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[3U] 
					       << 2U)));
    vlTOPp->mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN[4U] 
	= ((0x18U & ((((0U == (((vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[0U] 
				 | vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[1U]) 
				| vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[2U]) 
			       | vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[3U])) 
		       & (0U == (3U & (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
					       >> 0x21U)))))
		       ? 2U : (IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
				       >> 0x21U))) 
		     << 3U)) | ((4U & ((IData)((vlTOPp->mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg 
						>> 0x23U)) 
				       << 2U)) | (3U 
						  & (vlTOPp->mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227[3U] 
						     >> 0x1eU))));
    __Vtemp155[0U] = ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
		       << 0x19U) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
				    >> 7U));
    __Vtemp155[1U] = ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[2U] 
		       << 0x19U) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
				    >> 7U));
    __Vtemp155[2U] = ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[3U] 
		       << 0x19U) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[2U] 
				    >> 7U));
    __Vtemp155[3U] = ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
		       << 0x19U) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[3U] 
				    >> 7U));
    VL_ADD_W(4, __Vtemp156, __Vtemp155, vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74);
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[0U] 
	= __Vtemp156[0U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[1U] 
	= __Vtemp156[1U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[2U] 
	= __Vtemp156[2U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
	= __Vtemp156[3U];
    vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] = ((1U 
						  & (((~ 
						       (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU))) 
						     & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							>> 0x1fU)))
						  ? 0xffffffffU
						  : 
						 ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U) 
						       & (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							  >> 0x1fU))))
						   ? 0U
						   : 
						  vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[0U]));
    vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U] = ((1U 
						  & (((~ 
						       (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU))) 
						     & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							>> 0x1fU)))
						  ? 0xffffffffU
						  : 
						 ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U) 
						       & (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							  >> 0x1fU))))
						   ? 0U
						   : 
						  vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[1U]));
    vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U] = ((1U 
						  & (((~ 
						       (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU))) 
						     & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							>> 0x1fU)))
						  ? 0xffffffffU
						  : 
						 ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U) 
						       & (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							  >> 0x1fU))))
						   ? 0U
						   : 
						  vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[2U]));
    vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U] = ((1U 
						  & (((~ 
						       (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU))) 
						     & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							>> 0x1fU)))
						  ? 0x7fffffffU
						  : 
						 ((1U 
						   & (((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
							>> 6U) 
						       & (vlTOPp->mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74[3U] 
							  >> 0x1fU)) 
						      & (~ 
							 (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U] 
							  >> 0x1fU))))
						   ? 0x80000000U
						   : 
						  vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79[3U]));
    __Vtemp178[3U] = (((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
				   | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
				  | vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
				 | (0x7fffffffU & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
			 & (~ (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
			       >> 6U))) & (0U == (3U 
						  & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						      << 0x1dU) 
						     | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
							>> 3U))))) 
		       & (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
					<< 0x1fU) | 
				       (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
					>> 1U))))) ? 0U
		       : ((0x80000000U & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
					  << 0x19U)) 
			  | (0x7fffffffU & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U])));
    __Vtemp180[0U] = ((1U & ((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					 | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					| vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
				       | (0x7fffffffU 
					  & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
			       & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
				  >> 6U)) | vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U]) 
			     | ((1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
					       << 0x1dU) 
					      | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						 >> 3U)))) 
				| (1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))))
		       ? 0U : (((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					    | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					   | vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
					  | (0x7fffffffU 
					     & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
				  & (~ (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
					>> 6U))) & 
				 (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						<< 0x1dU) 
					       | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						  >> 3U))))) 
				& (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))
			        ? 0U : vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U]));
    __Vtemp180[1U] = ((1U & ((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					 | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					| vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
				       | (0x7fffffffU 
					  & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
			       & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
				  >> 6U)) | vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U]) 
			     | ((1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
					       << 0x1dU) 
					      | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						 >> 3U)))) 
				| (1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))))
		       ? 0U : (((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					    | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					   | vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
					  | (0x7fffffffU 
					     & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
				  & (~ (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
					>> 6U))) & 
				 (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						<< 0x1dU) 
					       | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						  >> 3U))))) 
				& (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))
			        ? 0U : vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]));
    __Vtemp180[2U] = ((1U & ((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					 | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					| vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
				       | (0x7fffffffU 
					  & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
			       & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
				  >> 6U)) | vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U]) 
			     | ((1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
					       << 0x1dU) 
					      | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						 >> 3U)))) 
				| (1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))))
		       ? 0U : (((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
					    | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
					   | vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
					  | (0x7fffffffU 
					     & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
				  & (~ (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
					>> 6U))) & 
				 (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						<< 0x1dU) 
					       | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						  >> 3U))))) 
				& (0U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
						 << 0x1fU) 
						| (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))
			        ? 0U : vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]));
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[0U] 
	= __Vtemp180[0U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[1U] 
	= __Vtemp180[1U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[2U] 
	= __Vtemp180[2U];
    vlTOPp->mkPNE_test__DOT__adder_fifo_output_reg__024D_IN[3U] 
	= ((1U & ((((0U == (((vlTOPp->mkPNE_test__DOT__x___05Fh2012[0U] 
			      | vlTOPp->mkPNE_test__DOT__x___05Fh2012[1U]) 
			     | vlTOPp->mkPNE_test__DOT__x___05Fh2012[2U]) 
			    | (0x7fffffffU & vlTOPp->mkPNE_test__DOT__x___05Fh2012[3U]))) 
		    & (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[4U] 
		       >> 6U)) | vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U]) 
		  | ((1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
				    << 0x1dU) | (vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						 >> 3U)))) 
		     | (1U == (3U & ((vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[1U] 
				      << 0x1fU) | (
						   vlTOPp->mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg[0U] 
						   >> 1U)))))))
	    ? 0x80000000U : __Vtemp178[3U]);
}

void VmkPNE_test::_eval(VmkPNE_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkPNE_test::_eval\n"); );
    VmkPNE_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

void VmkPNE_test::_eval_initial(VmkPNE_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkPNE_test::_eval_initial\n"); );
    VmkPNE_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__4(vlSymsp);
}

void VmkPNE_test::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkPNE_test::final\n"); );
    // Variables
    VmkPNE_test__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmkPNE_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmkPNE_test::_eval_settle(VmkPNE_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkPNE_test::_eval_settle\n"); );
    VmkPNE_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
}

VL_INLINE_OPT QData VmkPNE_test::_change_request(VmkPNE_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkPNE_test::_change_request\n"); );
    VmkPNE_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmkPNE_test::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkPNE_test::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
	Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
	Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((EN_compute_request_put & 0xfeU))) {
	Verilated::overWidthError("EN_compute_request_put");}
    if (VL_UNLIKELY((EN_compute_response_get & 0xfeU))) {
	Verilated::overWidthError("EN_compute_response_get");}
}
#endif // VL_DEBUG

void VmkPNE_test::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkPNE_test::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    RST_N = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(160,compute_request_put);
    EN_compute_request_put = VL_RAND_RESET_I(1);
    RDY_compute_request_put = VL_RAND_RESET_I(1);
    EN_compute_response_get = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128,compute_response_get);
    RDY_compute_response_get = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__adder_fifo_output_reg__024D_IN);
    VL_RAND_RESET_W(135,mkPNE_test__DOT__adder_fifo_stage0_reg__024D_IN);
    mkPNE_test__DOT__extracter1_fifo_output_reg__024D_IN = VL_RAND_RESET_I(21);
    mkPNE_test__DOT__extracter2_fifo_output_reg__024D_IN = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(133,mkPNE_test__DOT__multiplier_fifo_output_reg__024D_IN);
    mkPNE_test__DOT__multiplier_fifo_stage0_reg__024D_IN = VL_RAND_RESET_Q(36);
    mkPNE_test__DOT__CAN_FIRE_RL_adder_stage_1 = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__CAN_FIRE_RL_multiplier_stage_1 = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__CAN_FIRE_RL_rl_connect0 = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__CAN_FIRE_RL_rl_connect1 = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__CAN_FIRE_RL_rl_out = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__x___05Fh21287 = VL_RAND_RESET_I(11);
    mkPNE_test__DOT__x___05Fh26538 = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__SEXT_IF_adder_fifo_stage0_reg_first___05F4_BIT_7_7_ETC___05F_d74);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__adder_fifo_stage0_reg_first___05F4_BITS_134_TO_7_8_ETC___05F_d79);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__fftemp_first___05F58_PLUS_multiplier_fifo_output_r_ETC___05F_d166);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__twos_complement_carry_int_frac___05Fh1227);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__x___05Fh2012);
    VL_RAND_RESET_W(127,mkPNE_test__DOT__x___05Fh1580);
    mkPNE_test__DOT__new_inp___05Fh16201 = VL_RAND_RESET_I(15);
    mkPNE_test__DOT__new_inp___05Fh21461 = VL_RAND_RESET_I(15);
    mkPNE_test__DOT__IF_multiplier_fifo_stage0_reg_first_BIT_31_THE_ETC___05F_d10 = VL_RAND_RESET_I(8);
    mkPNE_test__DOT__IF_new_inp1461_BIT_14_THEN_b1984_ELSE_b1986___05Fq6 = VL_RAND_RESET_I(5);
    mkPNE_test__DOT__IF_new_inp6201_BIT_14_THEN_b6733_ELSE_b6735___05Fq8 = VL_RAND_RESET_I(5);
    mkPNE_test__DOT__IF_IF_compute_request_put_BIT_15_69_THEN_0_MIN_ETC___05F_d506 = VL_RAND_RESET_I(4);
    mkPNE_test__DOT__IF_IF_compute_request_put_BIT_31_88_THEN_0_MIN_ETC___05F_d325 = VL_RAND_RESET_I(4);
    mkPNE_test__DOT__x___05Fh16743 = VL_RAND_RESET_I(4);
    mkPNE_test__DOT__x___05Fh18881 = VL_RAND_RESET_I(4);
    mkPNE_test__DOT__x___05Fh21994 = VL_RAND_RESET_I(4);
    mkPNE_test__DOT__x___05Fh24132 = VL_RAND_RESET_I(4);
    mkPNE_test__DOT__IF_extracter1_fifo_output_reg_first___05F14_BITS_2_ETC___05F_d133 = VL_RAND_RESET_I(2);
    mkPNE_test__DOT__truncated_frac___05Fh1987 = VL_RAND_RESET_I(2);
    mkPNE_test__DOT__flag_truncated_frac___05Fh1985 = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__adder_fifo_output_reg__DOT__full_reg = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__adder_fifo_output_reg__DOT__empty_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__adder_fifo_output_reg__DOT__data0_reg);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__adder_fifo_output_reg__DOT__data1_reg);
    mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__full_reg = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__empty_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(135,mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data0_reg);
    VL_RAND_RESET_W(135,mkPNE_test__DOT__adder_fifo_stage0_reg__DOT__data1_reg);
    mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__full_reg = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__empty_reg = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data0_reg = VL_RAND_RESET_I(21);
    mkPNE_test__DOT__extracter1_fifo_output_reg__DOT__data1_reg = VL_RAND_RESET_I(21);
    mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__full_reg = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__empty_reg = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data0_reg = VL_RAND_RESET_I(21);
    mkPNE_test__DOT__extracter2_fifo_output_reg__DOT__data1_reg = VL_RAND_RESET_I(21);
    mkPNE_test__DOT__ffO__DOT__full_reg = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__ffO__DOT__empty_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__ffO__DOT__data0_reg);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__ffO__DOT__data1_reg);
    mkPNE_test__DOT__fftemp__DOT__full_reg = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__fftemp__DOT__empty_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__fftemp__DOT__data0_reg);
    VL_RAND_RESET_W(128,mkPNE_test__DOT__fftemp__DOT__data1_reg);
    mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__full_reg = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__empty_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(133,mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data0_reg);
    VL_RAND_RESET_W(133,mkPNE_test__DOT__multiplier_fifo_output_reg__DOT__data1_reg);
    mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__full_reg = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__empty_reg = VL_RAND_RESET_I(1);
    mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data0_reg = VL_RAND_RESET_Q(36);
    mkPNE_test__DOT__multiplier_fifo_stage0_reg__DOT__data1_reg = VL_RAND_RESET_Q(36);
    __Vtableidx1 = VL_RAND_RESET_I(4);
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[0] = 0xbU;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[1] = 0xbU;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[2] = 0xbU;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[3] = 0xaU;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[4] = 9U;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[5] = 8U;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[6] = 7U;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[7] = 6U;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[8] = 5U;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[9] = 4U;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[10] = 3U;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[11] = 2U;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[12] = 1U;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[13] = 0U;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[14] = 0U;
    __Vtable1_mkPNE_test__DOT__x___05Fh21287[15] = 0U;
    __Vtableidx2 = VL_RAND_RESET_I(4);
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[0] = 0xbU;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[1] = 0xbU;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[2] = 0xbU;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[3] = 0xaU;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[4] = 9U;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[5] = 8U;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[6] = 7U;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[7] = 6U;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[8] = 5U;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[9] = 4U;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[10] = 3U;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[11] = 2U;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[12] = 1U;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[13] = 0U;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[14] = 0U;
    __Vtable2_mkPNE_test__DOT__x___05Fh26538[15] = 0U;
    __Vclklast__TOP__CLK = VL_RAND_RESET_I(1);
}
