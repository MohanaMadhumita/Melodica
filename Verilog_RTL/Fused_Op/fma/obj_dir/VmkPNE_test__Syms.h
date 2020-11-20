// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VmkPNE_test__Syms_H_
#define _VmkPNE_test__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VmkPNE_test.h"

// SYMS CLASS
class VmkPNE_test__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VmkPNE_test*                   TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_mkPNE_test__adder_fifo_output_reg;
    VerilatedScope __Vscope_mkPNE_test__adder_fifo_output_reg__error_checks;
    VerilatedScope __Vscope_mkPNE_test__adder_fifo_stage0_reg;
    VerilatedScope __Vscope_mkPNE_test__adder_fifo_stage0_reg__error_checks;
    VerilatedScope __Vscope_mkPNE_test__extracter1_fifo_output_reg;
    VerilatedScope __Vscope_mkPNE_test__extracter1_fifo_output_reg__error_checks;
    VerilatedScope __Vscope_mkPNE_test__extracter2_fifo_output_reg;
    VerilatedScope __Vscope_mkPNE_test__extracter2_fifo_output_reg__error_checks;
    VerilatedScope __Vscope_mkPNE_test__ffO;
    VerilatedScope __Vscope_mkPNE_test__ffO__error_checks;
    VerilatedScope __Vscope_mkPNE_test__fftemp;
    VerilatedScope __Vscope_mkPNE_test__fftemp__error_checks;
    VerilatedScope __Vscope_mkPNE_test__multiplier_fifo_output_reg;
    VerilatedScope __Vscope_mkPNE_test__multiplier_fifo_output_reg__error_checks;
    VerilatedScope __Vscope_mkPNE_test__multiplier_fifo_stage0_reg;
    VerilatedScope __Vscope_mkPNE_test__multiplier_fifo_stage0_reg__error_checks;
    
    // CREATORS
    VmkPNE_test__Syms(VmkPNE_test* topp, const char* namep);
    ~VmkPNE_test__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
