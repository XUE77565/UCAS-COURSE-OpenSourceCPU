// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCUSTOM_CPU__SYMS_H_
#define VERILATED_VCUSTOM_CPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcustom_cpu.h"

// INCLUDE MODULE CLASSES
#include "Vcustom_cpu___024root.h"
#include "Vcustom_cpu___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vcustom_cpu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcustom_cpu* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcustom_cpu___024root          TOP;
    Vcustom_cpu___024unit          TOP____024unit;

    // CONSTRUCTORS
    Vcustom_cpu__Syms(VerilatedContext* contextp, const char* namep, Vcustom_cpu* modelp);
    ~Vcustom_cpu__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
