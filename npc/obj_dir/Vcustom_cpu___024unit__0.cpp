// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcustom_cpu.h for the primary calling header

#include "Vcustom_cpu__pch.h"

extern "C" int pmem_read(int raddr);

void Vcustom_cpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcustom_cpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = (pmem_read__Vfuncrtn__Vcvt);
}

extern "C" void pmem_write(int addr, int data, const svBitVecVal* mask);

void Vcustom_cpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ data, CData/*3:0*/ mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcustom_cpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    svBitVecVal mask__Vcvt[1];
    VL_SET_SVBV_I(4, mask__Vcvt, mask);
    pmem_write(addr__Vcvt, data__Vcvt, mask__Vcvt);
}

extern "C" void set_ebreak();

void Vcustom_cpu___024unit____Vdpiimwrap_set_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcustom_cpu___024unit____Vdpiimwrap_set_ebreak_TOP____024unit\n"); );
    // Body
    set_ebreak();
}
