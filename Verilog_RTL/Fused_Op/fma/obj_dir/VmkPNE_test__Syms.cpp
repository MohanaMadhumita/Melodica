// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VmkPNE_test__Syms.h"
#include "VmkPNE_test.h"

// FUNCTIONS
VmkPNE_test__Syms::VmkPNE_test__Syms(VmkPNE_test* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_didInit(false)
	// Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scope names
    __Vscope_mkPNE_test__adder_fifo_output_reg.configure(this,name(),"mkPNE_test.adder_fifo_output_reg");
    __Vscope_mkPNE_test__adder_fifo_output_reg__error_checks.configure(this,name(),"mkPNE_test.adder_fifo_output_reg.error_checks");
    __Vscope_mkPNE_test__adder_fifo_stage0_reg.configure(this,name(),"mkPNE_test.adder_fifo_stage0_reg");
    __Vscope_mkPNE_test__adder_fifo_stage0_reg__error_checks.configure(this,name(),"mkPNE_test.adder_fifo_stage0_reg.error_checks");
    __Vscope_mkPNE_test__extracter1_fifo_output_reg.configure(this,name(),"mkPNE_test.extracter1_fifo_output_reg");
    __Vscope_mkPNE_test__extracter1_fifo_output_reg__error_checks.configure(this,name(),"mkPNE_test.extracter1_fifo_output_reg.error_checks");
    __Vscope_mkPNE_test__extracter2_fifo_output_reg.configure(this,name(),"mkPNE_test.extracter2_fifo_output_reg");
    __Vscope_mkPNE_test__extracter2_fifo_output_reg__error_checks.configure(this,name(),"mkPNE_test.extracter2_fifo_output_reg.error_checks");
    __Vscope_mkPNE_test__ffO.configure(this,name(),"mkPNE_test.ffO");
    __Vscope_mkPNE_test__ffO__error_checks.configure(this,name(),"mkPNE_test.ffO.error_checks");
    __Vscope_mkPNE_test__fftemp.configure(this,name(),"mkPNE_test.fftemp");
    __Vscope_mkPNE_test__fftemp__error_checks.configure(this,name(),"mkPNE_test.fftemp.error_checks");
    __Vscope_mkPNE_test__multiplier_fifo_output_reg.configure(this,name(),"mkPNE_test.multiplier_fifo_output_reg");
    __Vscope_mkPNE_test__multiplier_fifo_output_reg__error_checks.configure(this,name(),"mkPNE_test.multiplier_fifo_output_reg.error_checks");
    __Vscope_mkPNE_test__multiplier_fifo_stage0_reg.configure(this,name(),"mkPNE_test.multiplier_fifo_stage0_reg");
    __Vscope_mkPNE_test__multiplier_fifo_stage0_reg__error_checks.configure(this,name(),"mkPNE_test.multiplier_fifo_stage0_reg.error_checks");
}
