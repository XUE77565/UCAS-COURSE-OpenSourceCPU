// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcustom_cpu.h for the primary calling header

#ifndef VERILATED_VCUSTOM_CPU___024UNIT_H_
#define VERILATED_VCUSTOM_CPU___024UNIT_H_  // guard

#include "verilated.h"


class Vcustom_cpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcustom_cpu___024unit final {
  public:

    // INTERNAL VARIABLES
    Vcustom_cpu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcustom_cpu___024unit();
    ~Vcustom_cpu___024unit();
    void ctor(Vcustom_cpu__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcustom_cpu___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
