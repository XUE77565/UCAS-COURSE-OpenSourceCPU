// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcustom_cpu.h for the primary calling header

#ifndef VERILATED_VCUSTOM_CPU___024ROOT_H_
#define VERILATED_VCUSTOM_CPU___024ROOT_H_  // guard

#include "verilated.h"
class Vcustom_cpu___024unit;


class Vcustom_cpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcustom_cpu___024root final {
  public:
    // CELLS
    Vcustom_cpu___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(Inst_Req_Valid,0,0);
        VL_IN8(Inst_Req_Ready,0,0);
        VL_IN8(Inst_Valid,0,0);
        VL_OUT8(Inst_Ready,0,0);
        VL_OUT8(MemWrite,0,0);
        VL_OUT8(Write_strb,3,0);
        VL_OUT8(MemRead,0,0);
        VL_IN8(Mem_Req_Ready,0,0);
        VL_IN8(Read_data_Valid,0,0);
        VL_OUT8(Read_data_Ready,0,0);
        VL_IN8(intr,0,0);
        CData/*0:0*/ custom_cpu__DOT__inst_Req_Valid;
        CData/*4:0*/ custom_cpu__DOT__IF_EX__DOT__IF_current_state;
        CData/*4:0*/ custom_cpu__DOT__IF_EX__DOT__IF_next_state;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT__ID_ready;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT__IF_to_ID_valid;
        CData/*3:0*/ custom_cpu__DOT__ID_EX__DOT__func_r;
        CData/*2:0*/ custom_cpu__DOT__ID_EX__DOT__ALUop;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT__Jump;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT__ID_work;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT__ID_done;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT__MEM_write;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT__predictor_update;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT__prediction_yes;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_3;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_4;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_5;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_6;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_10;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect;
        CData/*0:0*/ custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_out;
        CData/*4:0*/ custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state;
        CData/*4:0*/ custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_next_state;
        CData/*0:0*/ custom_cpu__DOT__EX_EX__DOT__EX_ready;
        CData/*0:0*/ custom_cpu__DOT__EX_EX__DOT__ID_to_EX_valid;
        CData/*0:0*/ custom_cpu__DOT__EX_EX__DOT__MEM_ready;
        CData/*0:0*/ custom_cpu__DOT__EX_EX__DOT__Branch_real;
        CData/*0:0*/ custom_cpu__DOT__EX_EX__DOT__block_cancel;
        CData/*0:0*/ custom_cpu__DOT__EX_EX__DOT__EX_work;
        CData/*3:0*/ custom_cpu__DOT__EX_EX__DOT__Write_strb;
        CData/*0:0*/ custom_cpu__DOT__EX_EX__DOT__EX_write;
        CData/*0:0*/ custom_cpu__DOT__MEM_EX__DOT__MEM_to_WB_valid;
        CData/*4:0*/ custom_cpu__DOT__MEM_EX__DOT__MEM_current_state;
        CData/*4:0*/ custom_cpu__DOT__MEM_EX__DOT__MEM_next_state;
        CData/*0:0*/ custom_cpu__DOT__MEM_EX__DOT__MEM_work;
        CData/*0:0*/ custom_cpu__DOT__WB_EX__DOT__WB_work;
        CData/*4:0*/ __Vtableidx4;
        CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*10:0*/ __Vtableidx1;
        SData/*8:0*/ __Vtableidx2;
        SData/*11:0*/ __Vtableidx3;
        VL_OUT(PC,31,0);
        VL_IN(Instruction,31,0);
        VL_OUT(Address,31,0);
        VL_OUT(Write_data,31,0);
    };
    struct {
        VL_IN(Read_data,31,0);
        VL_OUT(cpu_perf_cnt_0,31,0);
        VL_OUT(cpu_perf_cnt_1,31,0);
        VL_OUT(cpu_perf_cnt_2,31,0);
        VL_OUT(cpu_perf_cnt_3,31,0);
        VL_OUT(cpu_perf_cnt_4,31,0);
        VL_OUT(cpu_perf_cnt_5,31,0);
        VL_OUT(cpu_perf_cnt_6,31,0);
        VL_OUT(cpu_perf_cnt_7,31,0);
        VL_OUT(cpu_perf_cnt_8,31,0);
        VL_OUT(cpu_perf_cnt_9,31,0);
        VL_OUT(cpu_perf_cnt_10,31,0);
        VL_OUT(cpu_perf_cnt_11,31,0);
        VL_OUT(cpu_perf_cnt_12,31,0);
        VL_OUT(cpu_perf_cnt_13,31,0);
        VL_OUT(cpu_perf_cnt_14,31,0);
        VL_OUT(cpu_perf_cnt_15,31,0);
        VL_OUTW(inst_retire,69,0,3);
        VL_OUT(a0_out,31,0);
        IData/*31:0*/ custom_cpu__DOT__IF_EX__DOT__Instruction_reg;
        IData/*31:0*/ custom_cpu__DOT__IF_EX__DOT__PC_reg;
        IData/*31:0*/ custom_cpu__DOT__ID_EX__DOT__I_imm;
        IData/*31:0*/ custom_cpu__DOT__ID_EX__DOT__RF_wdata;
        IData/*31:0*/ custom_cpu__DOT__ID_EX__DOT__rdata1_true;
        IData/*31:0*/ custom_cpu__DOT__ID_EX__DOT__rdata2_true;
        IData/*31:0*/ custom_cpu__DOT__ID_EX__DOT__MEM_data;
        IData/*31:0*/ custom_cpu__DOT__ID_EX__DOT__prediction_addr;
        IData/*31:0*/ custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__unnamedblk1__DOT__i;
        VlWide<8>/*255:0*/ custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data;
        VlWide<6>/*182:0*/ custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data;
        VlWide<8>/*255:0*/ custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg;
        IData/*31:0*/ custom_cpu__DOT__EX_EX__DOT__Result;
        VlWide<6>/*182:0*/ custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg;
        IData/*31:0*/ custom_cpu__DOT__MEM_EX__DOT__Read_data_current;
        VlWide<3>/*70:0*/ custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg;
        QData/*32:0*/ custom_cpu__DOT__EX_EX__DOT__alu_ex__DOT__unsigend_sub;
        QData/*32:0*/ __VdfgRegularize_h6e95ff9d_0_3;
        VlUnpacked<IData/*31:0*/, 32> custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vcustom_cpu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcustom_cpu___024root(Vcustom_cpu__Syms* symsp, const char* namep);
    ~Vcustom_cpu___024root();
    VL_UNCOPYABLE(Vcustom_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
