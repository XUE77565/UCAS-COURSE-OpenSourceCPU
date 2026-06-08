// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcustom_cpu.h for the primary calling header

#include "Vcustom_cpu__pch.h"

void Vcustom_cpu___024unit___ctor_var_reset(Vcustom_cpu___024unit* vlSelf);

Vcustom_cpu___024unit::Vcustom_cpu___024unit() = default;
Vcustom_cpu___024unit::~Vcustom_cpu___024unit() = default;

void Vcustom_cpu___024unit::ctor(Vcustom_cpu__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcustom_cpu___024unit___ctor_var_reset(this);
}

void Vcustom_cpu___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcustom_cpu___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
