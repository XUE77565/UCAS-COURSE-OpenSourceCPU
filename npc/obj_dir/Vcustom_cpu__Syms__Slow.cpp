// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcustom_cpu__pch.h"

Vcustom_cpu__Syms::Vcustom_cpu__Syms(VerilatedContext* contextp, const char* namep, Vcustom_cpu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(396);
    // Setup sub module instances
    TOP____024unit.ctor(this, "$unit");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-8);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    // Setup export functions - final: 0
    // Setup export functions - final: 1
}

Vcustom_cpu__Syms::~Vcustom_cpu__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP____024unit.dtor();
}
