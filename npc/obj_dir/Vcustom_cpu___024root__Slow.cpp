// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcustom_cpu.h for the primary calling header

#include "Vcustom_cpu__pch.h"

void Vcustom_cpu___024root___ctor_var_reset(Vcustom_cpu___024root* vlSelf);

Vcustom_cpu___024root::Vcustom_cpu___024root(Vcustom_cpu__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcustom_cpu___024root___ctor_var_reset(this);
}

void Vcustom_cpu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcustom_cpu___024root::~Vcustom_cpu___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
