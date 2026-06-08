// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcustom_cpu.h for the primary calling header

#include "Vcustom_cpu__pch.h"

void Vcustom_cpu___024root___eval_triggers_vec__ico(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_triggers_vec__ico\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vcustom_cpu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*4:0*/, 512> Vcustom_cpu__ConstPool__TABLE_ha9976d2a_0;
extern const VlUnpacked<CData/*4:0*/, 4096> Vcustom_cpu__ConstPool__TABLE_h1eebf72c_0;
extern const VlUnpacked<CData/*4:0*/, 2048> Vcustom_cpu__ConstPool__TABLE_h9fae46a8_0;

void Vcustom_cpu___024root___ico_sequent__TOP__0(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___ico_sequent__TOP__0\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx2 = ((((IData)(vlSelfRef.rst) 
                                << 8U) | ((0x18U == 
                                           (0x0000001fU 
                                            & (IData)(
                                                      (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                       >> 2U)))) 
                                          << 7U)) | 
                              (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect) 
                                << 6U) | (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__predictor_update) 
                                           << 5U) | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_next_state 
        = Vcustom_cpu__ConstPool__TABLE_ha9976d2a_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.__Vtableidx3 = ((((((IData)((0U != (0x00000c00U 
                                                  & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U]))) 
                                  << 5U) | (((IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work) 
                                             << 4U) 
                                            | (8U & 
                                               (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                                >> 7U)))) 
                                | ((4U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                          >> 9U)) | 
                                   (((IData)(vlSelfRef.Read_data_Ready) 
                                     << 1U) | (IData)(vlSelfRef.Read_data_Valid)))) 
                               << 6U) | (((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_work) 
                                          << 5U) | (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)));
    vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_next_state 
        = Vcustom_cpu__ConstPool__TABLE_h1eebf72c_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.__Vtableidx1 = ((((IData)(vlSelfRef.Inst_Req_Valid) 
                                << 0x0000000aU) | (
                                                   ((IData)(vlSelfRef.Inst_Req_Ready) 
                                                    << 9U) 
                                                   | ((IData)(vlSelfRef.Inst_Valid) 
                                                      << 8U))) 
                              | (((IData)(vlSelfRef.Inst_Ready) 
                                  << 7U) | (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect) 
                                             << 6U) 
                                            | (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_ready) 
                                                << 5U) 
                                               | (IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state)))));
    vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_next_state 
        = Vcustom_cpu__ConstPool__TABLE_h9fae46a8_0
        [vlSelfRef.__Vtableidx1];
}

void Vcustom_cpu___024root___eval_ico(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_ico\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vcustom_cpu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcustom_cpu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcustom_cpu___024root___eval_phase__ico(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_phase__ico\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcustom_cpu___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcustom_cpu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vcustom_cpu___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vcustom_cpu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcustom_cpu___024root___eval_triggers_vec__act(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_triggers_vec__act\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool Vcustom_cpu___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcustom_cpu___024unit____Vdpiimwrap_set_ebreak_TOP____024unit();
void Vcustom_cpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ data, CData/*3:0*/ mask);
void Vcustom_cpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
extern const VlUnpacked<CData/*3:0*/, 32> Vcustom_cpu__ConstPool__TABLE_h81236597_0;

void Vcustom_cpu___024root___nba_sequent__TOP__0(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___nba_sequent__TOP__0\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_pmem_read__0__Vfuncout;
    __Vfunc_pmem_read__0__Vfuncout = 0;
    IData/*31:0*/ __Vdly__custom_cpu__DOT__IF_EX__DOT__Instruction_reg;
    __Vdly__custom_cpu__DOT__IF_EX__DOT__Instruction_reg = 0;
    IData/*31:0*/ __Vdly__custom_cpu__DOT__IF_EX__DOT__PC_reg;
    __Vdly__custom_cpu__DOT__IF_EX__DOT__PC_reg = 0;
    VlWide<6>/*182:0*/ __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg;
    VL_ZERO_W(183, __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg);
    CData/*0:0*/ __VdlySet__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v0;
    __VdlySet__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v0 = 0;
    IData/*31:0*/ __VdlyVal__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32;
    __VdlyVal__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32 = 0;
    CData/*4:0*/ __VdlyDim0__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32;
    __VdlyDim0__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32 = 0;
    CData/*0:0*/ __VdlySet__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32;
    __VdlySet__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32 = 0;
    // Body
    __Vdly__custom_cpu__DOT__IF_EX__DOT__Instruction_reg 
        = vlSelfRef.custom_cpu__DOT__IF_EX__DOT__Instruction_reg;
    if (((vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[2U] 
          >> 6U) & (IData)(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__WB_work))) {
        Vcustom_cpu___024unit____Vdpiimwrap_set_ebreak_TOP____024unit();
    }
    __VdlySet__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v0 = 0U;
    __VdlySet__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32 = 0U;
    if (((4U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)) 
         & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
            >> 0x0000000aU))) {
        Vcustom_cpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.Address, vlSelfRef.Write_data, (IData)(vlSelfRef.Write_strb));
    }
    __Vdly__custom_cpu__DOT__IF_EX__DOT__PC_reg = vlSelfRef.custom_cpu__DOT__IF_EX__DOT__PC_reg;
    __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
        = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U];
    __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
        = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U];
    __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
        = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U];
    __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
        = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U];
    __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
        = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U];
    __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] 
        = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U];
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__predictor_update 
        = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_valid;
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__block_cancel 
        = ((IData)(vlSelfRef.rst) || (1U & (~ (IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_valid))));
    if (vlSelfRef.rst) {
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__unnamedblk1__DOT__i = 0x00000020U;
        __Vdly__custom_cpu__DOT__IF_EX__DOT__Instruction_reg = 0U;
        __VdlySet__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v0 = 1U;
        vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U] = 0U;
        vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] = 0U;
        vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[2U] = 0U;
        __Vdly__custom_cpu__DOT__IF_EX__DOT__PC_reg = 0x80000000U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg = 0ULL;
        __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] = 0U;
        __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] = 0U;
        __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] = 0U;
        __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] = 0U;
        __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] = 0U;
        __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] = 0U;
        vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] = 0U;
        vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] = 0U;
        vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] = 0U;
        vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] = 0U;
        vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] = 0U;
        vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] = 0U;
        vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] = 0U;
        vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state = 1U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_work = 0U;
        vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work = 0U;
    } else {
        __Vdly__custom_cpu__DOT__IF_EX__DOT__Instruction_reg 
            = (((IData)(vlSelfRef.Inst_Ready) & (IData)(vlSelfRef.Inst_Valid))
                ? vlSelfRef.Instruction : vlSelfRef.custom_cpu__DOT__IF_EX__DOT__Instruction_reg);
        if ((vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
             & (0U != (0x0000001fU & (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                      >> 1U))))) {
            __VdlyVal__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32 
                = vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U];
            __VdlyDim0__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32 
                = (0x0000001fU & (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                  >> 1U));
            __VdlySet__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32 = 1U;
        }
        if (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_to_WB_valid) {
            vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U] 
                = (IData)((((QData)((IData)((0x0000001fU 
                                             & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U]))) 
                            << 0x00000021U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
                                                                    >> 5U)))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_data)))));
            vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                = ((0xffffffc0U & ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                    << 0x0000001aU) 
                                   | (0x03ffffc0U & 
                                      (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
                                       >> 6U)))) | (IData)(
                                                           ((((QData)((IData)(
                                                                              (0x0000001fU 
                                                                               & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U]))) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
                                                                                >> 5U)))) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_data)))) 
                                                            >> 0x00000020U)));
            vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[2U] 
                = ((0x00000040U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] 
                                   >> 0x00000010U)) 
                   | (0x0000003fU & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                     >> 6U)));
        } else {
            vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U] 
                = vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U];
            vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                = vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U];
            vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[2U] 
                = vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[2U];
        }
        if (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect) {
            __Vdly__custom_cpu__DOT__IF_EX__DOT__PC_reg 
                = ((1U & ((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Branch_real) 
                          | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                             >> 0x0000000cU))) ? ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                     >> 0x00000018U))
                    : ((IData)(4U) + ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                       << 7U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                                 >> 0x00000019U))));
            vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_work = 0U;
        } else {
            __Vdly__custom_cpu__DOT__IF_EX__DOT__PC_reg 
                = (((0x10U == (IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state)) 
                    & (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_ready))
                    ? ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_yes)
                        ? vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_addr
                        : ((IData)(4U) + vlSelfRef.custom_cpu__DOT__IF_EX__DOT__PC_reg))
                    : vlSelfRef.custom_cpu__DOT__IF_EX__DOT__PC_reg);
            if (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_ready) {
                vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_work 
                    = vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_valid;
            }
        }
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
            = (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_valid) 
                & (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_ready))
                ? (((QData)((IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__PC_reg)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__Instruction_reg)))
                : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg);
        if (((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__MEM_ready) 
             & (IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_work))) {
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[0U];
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[1U];
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[2U];
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[3U];
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[4U];
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[5U];
        } else {
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
                = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U];
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U];
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
                = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U];
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U];
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U];
            __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] 
                = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U];
        }
        if (((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_valid) 
             & (IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_ready))) {
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[0U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[1U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[2U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[3U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[4U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[5U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[6U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[7U];
        } else {
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U];
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U];
        }
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state 
            = vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_next_state;
        if (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__MEM_ready) {
            vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_work;
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current = 0U;
    } else if (((4U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)) 
                & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                   >> 0x0000000bU))) {
        Vcustom_cpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.Address, __Vfunc_pmem_read__0__Vfuncout);
        vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
            = __Vfunc_pmem_read__0__Vfuncout;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state = 1U;
        vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_work = 0U;
        vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state = 1U;
    } else {
        vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state 
            = vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_next_state;
        if (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_ready) {
            vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_work 
                = vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_valid;
        }
        vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state 
            = vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_next_state;
    }
    vlSelfRef.custom_cpu__DOT__WB_EX__DOT__WB_work 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_to_WB_valid));
    if (__VdlySet__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v0) {
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[0U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[1U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[2U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[3U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[4U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[5U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[6U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[7U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[8U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[9U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[10U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[11U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[12U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[13U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[14U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[15U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[16U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[17U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[18U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[19U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[20U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[21U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[22U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[23U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[24U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[25U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[26U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[27U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[28U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[29U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[30U] = 0U;
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[31U] = 0U;
    }
    if (__VdlySet__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32) {
        vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[__VdlyDim0__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32] 
            = __VdlyVal__custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile__v32;
    }
    vlSelfRef.custom_cpu__DOT__IF_EX__DOT__Instruction_reg 
        = __Vdly__custom_cpu__DOT__IF_EX__DOT__Instruction_reg;
    vlSelfRef.custom_cpu__DOT__IF_EX__DOT__PC_reg = __Vdly__custom_cpu__DOT__IF_EX__DOT__PC_reg;
    vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
        = __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U];
    vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
        = __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U];
    vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
        = __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U];
    vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
        = __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U];
    vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
        = __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U];
    vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] 
        = __Vdly__custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U];
    vlSelfRef.a0_out = vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[10U];
    vlSelfRef.PC = vlSelfRef.custom_cpu__DOT__IF_EX__DOT__PC_reg;
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_10 
        = ((4U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                          >> 2U)))) 
           | (0x0cU == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                               >> 2U)))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__func_r = 
        ((8U & ((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                         >> 0x0000001eU)) << 3U)) | 
         (7U & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                        >> 0x0000000cU))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__I_imm = 
        (((- (IData)((1U & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                    >> 0x0000001fU))))) 
          << 0x0000000cU) | (0x00000fffU & (IData)(
                                                   (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                    >> 0x00000014U))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__Jump = (
                                                   (0x1bU 
                                                    == 
                                                    (0x0000001fU 
                                                     & (IData)(
                                                               (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                >> 2U)))) 
                                                   | (0x19U 
                                                      == 
                                                      (0x0000001fU 
                                                       & (IData)(
                                                                 (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                  >> 2U)))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_4 
        = ((0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                   >> 0x00000014U))) 
           == (0x0000001fU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U]));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_3 
        = ((0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                   >> 0x0000000fU))) 
           == (0x0000001fU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U]));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__alu_ex__DOT__unsigend_sub 
        = (0x00000001ffffffffULL & (1ULL + ((~ (QData)((IData)(
                                                               ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                 << 0x0000000bU) 
                                                                | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                                   >> 0x00000015U))))) 
                                            + (QData)((IData)(
                                                              ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                                << 0x0000000bU) 
                                                               | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                  >> 0x00000015U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((2U 
                                                 & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                    >> 0x00000013U)) 
                                                | (1U 
                                                   & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                      >> 0x00000014U)));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_out 
        = ((2U == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state)) 
           | (4U == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state)));
    vlSelfRef.Address = ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
                          << 0x00000014U) | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                             >> 0x0000000cU));
    vlSelfRef.Write_data = ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                             << 0x0000001aU) | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
                                                >> 6U));
    vlSelfRef.Write_strb = (0x0000000fU & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                           >> 6U));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_6 
        = ((0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                   >> 0x00000014U))) 
           == (0x0000001fU & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U]));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_data 
        = (IData)((0x000000ffffffffffULL & (((0x1bU 
                                              == (0x0000001fU 
                                                  & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                     >> 0x0000000eU))) 
                                             | (0x19U 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                    >> 0x0000000eU))))
                                             ? (4ULL 
                                                + (QData)((IData)(
                                                                  ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                                    << 0x00000014U) 
                                                                   | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
                                                                      >> 0x0000000cU)))))
                                             : ((5U 
                                                 == 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                     >> 0x0000000eU)))
                                                 ? 
                                                ((QData)((IData)(
                                                                 ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                                   << 0x00000014U) 
                                                                  | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
                                                                     >> 0x0000000cU)))) 
                                                 + (QData)((IData)(
                                                                   ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                                                                     << 0x0000000dU) 
                                                                    | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                                       >> 0x00000013U)))))
                                                 : 
                                                ((0x0dU 
                                                  == 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                      >> 0x0000000eU)))
                                                  ? (QData)((IData)(
                                                                    ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                                                                      << 0x0000000dU) 
                                                                     | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                                        >> 0x00000013U))))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                       >> 0x0000000eU)))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                                                        >> 0x00000013U)))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                         >> 0x0000000cU)))
                                                     ? 
                                                    ((0x00200000U 
                                                      & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U])
                                                      ? (QData)((IData)(
                                                                        (0x000000ffU 
                                                                         & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current)))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x00ffffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                                >> 7U))))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0x000000ffU 
                                                                         & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current)))))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                          >> 0x0000000cU)))
                                                      ? 
                                                     ((0x00200000U 
                                                       & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U])
                                                       ? (QData)((IData)(
                                                                         (0x000000ffU 
                                                                          & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                             >> 8U))))
                                                       : 
                                                      (((QData)((IData)(
                                                                        (0x00ffffffU 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                                >> 0x0000000fU))))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0x000000ffU 
                                                                          & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                             >> 8U))))))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                           >> 0x0000000cU)))
                                                       ? 
                                                      ((0x00200000U 
                                                        & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U])
                                                        ? (QData)((IData)(
                                                                          (0x000000ffU 
                                                                           & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                              >> 0x00000010U))))
                                                        : 
                                                       (((QData)((IData)(
                                                                         (0x00ffffffU 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                                >> 0x00000017U))))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0x000000ffU 
                                                                           & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                              >> 0x00000010U))))))
                                                       : 
                                                      ((0x00200000U 
                                                        & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U])
                                                        ? (QData)((IData)(
                                                                          (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                           >> 0x00000018U)))
                                                        : 
                                                       (((QData)((IData)(
                                                                         (0x00ffffffU 
                                                                          & (- (IData)(
                                                                                (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                                >> 0x0000001fU)))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                           >> 0x00000018U))))))))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                                                         >> 0x00000013U)))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                          >> 0x0000000cU)))
                                                      ? 
                                                     ((0x00200000U 
                                                       & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U])
                                                       ? (QData)((IData)(
                                                                         (0x0000ffffU 
                                                                          & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current)))
                                                       : 
                                                      (((QData)((IData)(
                                                                        (0x00ffffffU 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                                >> 0x0000000fU))))))) 
                                                        << 0x00000010U) 
                                                       | (QData)((IData)(
                                                                         (0x0000ffffU 
                                                                          & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current)))))
                                                      : 
                                                     ((0x00200000U 
                                                       & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U])
                                                       ? (QData)((IData)(
                                                                         (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                          >> 0x00000010U)))
                                                       : 
                                                      (((QData)((IData)(
                                                                        (0x00ffffffU 
                                                                         & (- (IData)(
                                                                                (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                                >> 0x0000001fU)))))) 
                                                        << 0x00000010U) 
                                                       | (QData)((IData)(
                                                                         (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                                          >> 0x00000010U))))))
                                                     : (QData)((IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current))))
                                                   : (QData)((IData)(
                                                                     ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] 
                                                                       << 0x0000000aU) 
                                                                      | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                                                                         >> 0x00000016U))))))))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_5 
        = ((0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                   >> 0x0000000fU))) 
           == (0x0000001fU & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U]));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write 
        = ((IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work) 
           & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
              >> 5U));
    vlSelfRef.inst_retire[0U] = (IData)((((QData)((IData)(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U])) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[2U] 
                                                             << 0x0000001aU) 
                                                            | (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                                               >> 6U))))));
    vlSelfRef.inst_retire[1U] = (IData)(((((QData)((IData)(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            ((vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[2U] 
                                                              << 0x0000001aU) 
                                                             | (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                                                >> 6U))))) 
                                         >> 0x00000020U));
    vlSelfRef.inst_retire[2U] = (0x0000003fU & (((vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                                  & (IData)(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__WB_work)) 
                                                 << 5U) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                                      >> 1U))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ALUop = 
        (((0U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                         >> 2U)))) 
          | (8U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                           >> 2U)))))
          ? 2U : ((IData)((0x0000000000000060ULL == 
                           (0x000000000000607cULL & vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg)))
                   ? 6U : ((IData)((0x0000000000004060ULL 
                                    == (0x000000000000607cULL 
                                        & vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg)))
                            ? 7U : ((IData)((0x0000000000006060ULL 
                                             == (0x000000000000607cULL 
                                                 & vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg)))
                                     ? 3U : ((IData)(
                                                     ((0x0000000000000030ULL 
                                                       == 
                                                       (0x000000000000007cULL 
                                                        & vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg)) 
                                                      & (8U 
                                                         == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__func_r))))
                                              ? 6U : 
                                             ((0U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 0x0000000cU))))
                                               ? 2U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                               >> 0x0000000cU))))
                                                   ? 7U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                >> 0x0000000cU))))
                                                    ? 3U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                 >> 0x0000000cU))))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                  >> 0x0000000cU))))
                                                      ? 1U
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                   >> 0x0000000cU))))
                                                       ? 0U
                                                       : 1U)))))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (0x00000001ffffffffULL 
                                                & ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                        >> 0x00000015U)))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                                      << 0x0000000bU) 
                                                                     | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                        >> 0x00000015U)))) 
                                                    & (QData)((IData)(
                                                                      ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                        << 0x0000000bU) 
                                                                       | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                                          >> 0x00000015U)))))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                         >> 0x00000015U)))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                                       << 0x0000000bU) 
                                                                      | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                         >> 0x00000015U)))) 
                                                     | (QData)((IData)(
                                                                       ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                         << 0x0000000bU) 
                                                                        | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                                           >> 0x00000015U)))))
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                          >> 0x00000015U)))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                                        << 0x0000000bU) 
                                                                       | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                          >> 0x00000015U)))) 
                                                      ^ (QData)((IData)(
                                                                        ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                          << 0x0000000bU) 
                                                                         | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                                            >> 0x00000015U)))))
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                           >> 0x00000015U)))
                                                       ? (QData)((IData)(
                                                                         (~ 
                                                                          (((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                                             << 0x0000000bU) 
                                                                            | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                               >> 0x00000015U)) 
                                                                           | ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                               << 0x0000000bU) 
                                                                              | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                                                >> 0x00000015U))))))
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                            >> 0x00000015U)))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                                          << 0x0000000bU) 
                                                                         | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                            >> 0x00000015U)))) 
                                                        + (QData)((IData)(
                                                                          ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                            << 0x0000000bU) 
                                                                           | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                                              >> 0x00000015U)))))
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                             >> 0x00000015U)))
                                                         ? vlSelfRef.custom_cpu__DOT__EX_EX__DOT__alu_ex__DOT__unsigend_sub
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                              >> 0x00000015U)))
                                                          ? 
                                                         ((2U 
                                                           == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                                                           ? 1ULL
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                                                            ? 0ULL
                                                            : 
                                                           ((((IData)(1U) 
                                                              + 
                                                              ((~ 
                                                                ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                  << 0x0000000bU) 
                                                                 | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                                    >> 0x00000015U))) 
                                                               + 
                                                               ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                                 << 0x0000000bU) 
                                                                | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                                   >> 0x00000015U)))) 
                                                             >> 0x0000001fU)
                                                             ? 1ULL
                                                             : 0ULL)))
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                               >> 0x00000015U)))
                                                           ? 
                                                          VL_SHIFTR_QQI(33,33,32, vlSelfRef.custom_cpu__DOT__EX_EX__DOT__alu_ex__DOT__unsigend_sub, 0x00000020U)
                                                           : 0ULL)))))))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_yes 
        = ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__Jump) 
           | (IData)(((0x0000000000000060ULL == (0x000000000000007cULL 
                                                 & vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg)) 
                      & (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_out))));
    vlSelfRef.Inst_Ready = ((4U == (IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state)) 
                            | (1U == (IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state)));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Branch_real 
        = (1U & (((0U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                >> 8U))) ? (0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                   : ((1U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                    >> 8U))) ? (~ (0U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))
                       : (((4U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                         >> 8U))) | 
                           (6U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                         >> 8U)))) ? 
                          (~ (0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))
                           : (((5U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                             >> 8U))) 
                               | (7U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                               >> 8U))))
                               ? (0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                               : 0U)))) & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                           >> 0x0000000bU)));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result = 
        (((0x1bU == (0x0000001fU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                    >> 0x00000019U))) 
          | (0x19U == (0x0000001fU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                      >> 0x00000019U))))
          ? ((IData)(4U) + ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                             << 7U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                       >> 0x00000019U)))
          : ((5U == (0x0000001fU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                    >> 0x00000019U)))
              ? (((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                   << 7U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                             >> 0x00000019U)) + ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                                                  << 2U) 
                                                 | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                                    >> 0x0000001eU)))
              : ((0x0dU == (0x0000001fU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                           >> 0x00000019U)))
                  ? ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                      << 2U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                >> 0x0000001eU)) : 
                 ((0x40000000U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U])
                   ? ((IData)((- (QData)((IData)((1U 
                                                  & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                                                     >> 0x0000001eU)))))) 
                      & (IData)(((QData)((IData)(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                   << 0x0000000bU) 
                                                  | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                     >> 0x00000015U)))) 
                                 * (QData)((IData)(
                                                   ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                     << 0x0000000bU) 
                                                    | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                       >> 0x00000015U)))))))
                   : ((0x00002000U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U])
                       ? ((0U == (3U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                        >> 0x00000013U)))
                           ? (((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                << 0x0000000dU) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                   >> 0x00000013U)) 
                              << (0x0000001fU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                 >> 0x0000000eU)))
                           : ((2U == (3U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                            >> 0x00000013U)))
                               ? (((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                    << 0x0000000dU) 
                                   | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                      >> 0x00000013U)) 
                                  >> (0x0000001fU & 
                                      (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                       >> 0x0000000eU)))
                               : ((3U == (3U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                >> 0x00000013U)))
                                   ? VL_SHIFTRS_III(32,32,5, 
                                                    ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                      << 0x0000000dU) 
                                                     | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                        >> 0x00000013U)), 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                        >> 0x0000000eU)))
                                   : ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                       << 0x0000000dU) 
                                      | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                         >> 0x00000013U)))))
                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))))));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write 
        = ((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_work) 
           & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
              >> 5U));
    vlSelfRef.MemWrite = ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                           >> 0x0000000aU) & (4U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)));
    vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_to_WB_valid 
        = ((0x10U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)) 
           & (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work));
    vlSelfRef.Read_data_Ready = ((8U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)) 
                                 | (1U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)));
    vlSelfRef.MemRead = ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                          >> 0x0000000bU) & (4U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__MEM_ready 
        = (1U & ((~ (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work)) 
                 | (0x10U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect 
        = (1U & ((~ (IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__block_cancel)) 
                 & ((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Branch_real) 
                    ^ (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                       >> 0x00000018U))));
    vlSelfRef.__Vtableidx4 = ((((1U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                              >> 8U))) 
                                << 4U) | (((2U == (3U 
                                                   & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)) 
                                           << 3U) | 
                                          ((1U == (3U 
                                                   & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)) 
                                           << 2U))) 
                              | (((0U == (3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)) 
                                  << 1U) | (0U == (7U 
                                                   & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                      >> 8U)))));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Write_strb 
        = Vcustom_cpu__ConstPool__TABLE_h81236597_0
        [vlSelfRef.__Vtableidx4];
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata2_true 
        = ((0U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                          >> 0x00000014U))))
            ? 0U : (((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write) 
                     & (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_4))
                     ? vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result
                     : (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write) 
                         & (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_6))
                         ? vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_data
                         : ((vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                             & ((0x0000001fU & (IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 0x00000014U))) 
                                == (0x0000001fU & (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                                   >> 1U))))
                             ? vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U]
                             : ((0U == (0x0000001fU 
                                        & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                   >> 0x00000014U))))
                                 ? 0U : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile
                                [(0x0000001fU & (IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 0x00000014U)))])))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true 
        = ((0U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                          >> 0x0000000fU))))
            ? 0U : (((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write) 
                     & (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_3))
                     ? vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result
                     : (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write) 
                         & (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_5))
                         ? vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_data
                         : ((vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                             & ((0x0000001fU & (IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 0x0000000fU))) 
                                == (0x0000001fU & (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                                   >> 1U))))
                             ? vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U]
                             : ((0U == (0x0000001fU 
                                        & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                   >> 0x0000000fU))))
                                 ? 0U : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile
                                [(0x0000001fU & (IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 0x0000000fU)))])))));
    vlSelfRef.__Vtableidx3 = ((((((IData)((0U != (0x00000c00U 
                                                  & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U]))) 
                                  << 5U) | (((IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work) 
                                             << 4U) 
                                            | (8U & 
                                               (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                                >> 7U)))) 
                                | ((4U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                          >> 9U)) | 
                                   (((IData)(vlSelfRef.Read_data_Ready) 
                                     << 1U) | (IData)(vlSelfRef.Read_data_Valid)))) 
                               << 6U) | (((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_work) 
                                          << 5U) | (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)));
    vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_next_state 
        = Vcustom_cpu__ConstPool__TABLE_h1eebf72c_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_ready 
        = (1U & ((~ (IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_work)) 
                 | (IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__MEM_ready)));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_valid 
        = ((~ (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect)) 
           & (8U == (IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state)));
    vlSelfRef.__Vtableidx2 = ((((IData)(vlSelfRef.rst) 
                                << 8U) | ((0x18U == 
                                           (0x0000001fU 
                                            & (IData)(
                                                      (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                       >> 2U)))) 
                                          << 7U)) | 
                              (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect) 
                                << 6U) | (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__predictor_update) 
                                           << 5U) | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_next_state 
        = Vcustom_cpu__ConstPool__TABLE_ha9976d2a_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.Inst_Req_Valid = ((2U == (IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state)) 
                                & ((~ (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect)) 
                                   & (~ (IData)(vlSelfRef.MemRead))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_done 
        = (1U & (~ (((((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write) 
                       & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_3) 
                          | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_4))) 
                      & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                         >> 7U)) | ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                     >> 0x0000000bU) 
                                    & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write) 
                                       & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_5) 
                                          | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_6))))) 
                    | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect))));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[0U] 
        = ((0xffffffc0U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[0U]) 
           | (0x0000003fU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U]));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[0U] 
        = ((0x0000003fU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[0U]) 
           | (((0U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                             >> 8U))) ? ((0U == (3U 
                                                 & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                          ? (0x000000ffU 
                                             & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])
                                          : ((1U == 
                                              (3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                              ? (0x0000ff00U 
                                                 & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                                                    << 8U))
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                                  ? 
                                                 (0x00ff0000U 
                                                  & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                                                     << 0x00000010U))
                                                  : 
                                                 VL_SHIFTL_III(32,32,32, vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U], 0x00000018U))))
                : ((1U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                 >> 8U))) ? ((0U == 
                                              (3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                              ? (0x0000ffffU 
                                                 & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])
                                              : VL_SHIFTL_III(32,32,32, vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U], 0x00000010U))
                    : vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])) 
              << 6U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[1U] 
        = ((0xffffffc0U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[1U]) 
           | (((0U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                             >> 8U))) ? ((0U == (3U 
                                                 & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                          ? (0x000000ffU 
                                             & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])
                                          : ((1U == 
                                              (3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                              ? (0x0000ff00U 
                                                 & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                                                    << 8U))
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                                  ? 
                                                 (0x00ff0000U 
                                                  & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                                                     << 0x00000010U))
                                                  : 
                                                 VL_SHIFTL_III(32,32,32, vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U], 0x00000018U))))
                : ((1U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                 >> 8U))) ? ((0U == 
                                              (3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                              ? (0x0000ffffU 
                                                 & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])
                                              : VL_SHIFTL_III(32,32,32, vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U], 0x00000010U))
                    : vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])) 
              >> 0x0000001aU));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[1U] 
        = ((0x0000003fU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[1U]) 
           | ((IData)((((QData)((IData)((0xfffffffcU 
                                         & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))) 
                        << 6U) | (QData)((IData)(((0x00000030U 
                                                   & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                      >> 2U)) 
                                                  | (IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Write_strb)))))) 
              << 6U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[2U] 
        = ((0xfffff000U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[2U]) 
           | (((IData)((((QData)((IData)((0xfffffffcU 
                                          & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))) 
                         << 6U) | (QData)((IData)((
                                                   (0x00000030U 
                                                    & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                       >> 2U)) 
                                                   | (IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Write_strb)))))) 
               >> 0x0000001aU) | ((IData)(((((QData)((IData)(
                                                             (0xfffffffcU 
                                                              & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))) 
                                             << 6U) 
                                            | (QData)((IData)(
                                                              ((0x00000030U 
                                                                & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                                   >> 2U)) 
                                                               | (IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Write_strb))))) 
                                           >> 0x00000020U)) 
                                  << 6U)));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[2U] 
        = ((0x00000fffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[2U]) 
           | ((IData)((((QData)((IData)((3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                                            << 7U) 
                                                           | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                                              >> 0x00000019U)))))) 
              << 0x0000000cU));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[3U] 
        = (((IData)((((QData)((IData)((3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))) 
                      << 0x00000020U) | (QData)((IData)(
                                                        ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                                          << 7U) 
                                                         | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                                            >> 0x00000019U)))))) 
            >> 0x00000014U) | (((IData)((0x0000001fffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U])) 
                                             << 7U) 
                                            | ((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U])) 
                                               >> 0x00000019U)))) 
                                << 0x0000000eU) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (3U 
                                                                               & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                                                                << 7U) 
                                                                                | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                                                                >> 0x00000019U))))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000cU)));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[4U] 
        = ((0xfff80000U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[4U]) 
           | (((0x00000fffU & ((IData)((0x0000001fffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U])) 
                                            << 7U) 
                                           | ((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U])) 
                                              >> 0x00000019U)))) 
                               >> 0x00000012U)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (3U 
                                                                               & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                                                                << 7U) 
                                                                                | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                                                                >> 0x00000019U))))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000014U)) 
              | ((0x00003000U & ((IData)((0x0000001fffffffffULL 
                                          & (((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U])) 
                                              << 7U) 
                                             | ((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U])) 
                                                >> 0x00000019U)))) 
                                 >> 0x00000012U)) | 
                 ((IData)(((0x0000001fffffffffULL & 
                            (((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U])) 
                              << 7U) | ((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U])) 
                                        >> 0x00000019U))) 
                           >> 0x00000020U)) << 0x0000000eU))));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[4U] 
        = ((0x0007ffffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[4U]) 
           | ((IData)((((QData)((IData)((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                                         >> 0x0000001fU))) 
                        << 0x00000023U) | (((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)) 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                                 >> 8U))))))) 
              << 0x00000013U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data[5U] 
        = (0x007fffffU & (((IData)((((QData)((IData)(
                                                     (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                                                      >> 0x0000001fU))) 
                                     << 0x00000023U) 
                                    | (((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)) 
                                        << 3U) | (QData)((IData)(
                                                                 (7U 
                                                                  & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                                     >> 8U))))))) 
                           >> 0x0000000dU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                                                                          >> 0x0000001fU))) 
                                                         << 0x00000023U) 
                                                        | (((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)) 
                                                            << 3U) 
                                                           | (QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                                                >> 8U)))))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000013U)));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_addr 
        = ((0x18U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                             >> 2U))))
            ? ((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                        >> 0x00000020U)) + (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                    >> 0x0000001fU))))) 
                                             << 0x0000000cU) 
                                            | ((0x00000800U 
                                                & ((IData)(
                                                           (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                            >> 7U)) 
                                                   << 0x0000000bU)) 
                                               | ((0x000007e0U 
                                                   & ((IData)(
                                                              (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                               >> 0x00000019U)) 
                                                      << 5U)) 
                                                  | (0x0000001eU 
                                                     & ((IData)(
                                                                (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                 >> 8U)) 
                                                        << 1U))))))
            : ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__Jump)
                ? ((0x1bU == (0x0000001fU & (IData)(
                                                    (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                     >> 2U))))
                    ? ((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                >> 0x00000020U)) + 
                       (((- (IData)((1U & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                   >> 0x0000001fU))))) 
                         << 0x00000014U) | ((((0x000001feU 
                                               & ((IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 0x0000000cU)) 
                                                  << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                            >> 0x00000014U)))) 
                                             << 0x0000000bU) 
                                            | (0x000007feU 
                                               & ((IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 0x00000015U)) 
                                                  << 1U)))))
                    : (0xfffffffeU & (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true 
                                      + vlSelfRef.custom_cpu__DOT__ID_EX__DOT__I_imm)))
                : 0U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_valid 
        = ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_done) 
           & ((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_ready) 
              & (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_work)));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_ready 
        = (1U & ((~ (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_work)) 
                 | ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_done) 
                    & (IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_ready))));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[0U] 
        = vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata2_true;
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[1U] 
        = ((0xfff80000U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[1U]) 
           | ((((0x000000f8U & (((4U == (0x0000001fU 
                                         & (IData)(
                                                   (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                    >> 2U))))
                                  ? (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                             >> 0x00000014U))
                                  : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata2_true) 
                                << 3U)) | ((((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_10) 
                                             & ((5U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                             >> 0x0000000cU)))) 
                                                | (1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                               >> 0x0000000cU)))))) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__Jump) 
                                               << 1U) 
                                              | (0x18U 
                                                 == 
                                                 (0x0000001fU 
                                                  & (IData)(
                                                            (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                             >> 2U))))))) 
               << 0x0000000bU) | ((0x00000700U & ((IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 0x0000000cU)) 
                                                  << 8U)) 
                                  | (((0U == (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 2U)))) 
                                      << 7U) | (((8U 
                                                  == 
                                                  (0x0000001fU 
                                                   & (IData)(
                                                             (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                              >> 2U)))) 
                                                 << 6U) 
                                                | ((((5U 
                                                      == 
                                                      (0x0000001fU 
                                                       & (IData)(
                                                                 (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                  >> 2U)))) 
                                                     | ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__Jump) 
                                                        | ((0U 
                                                            == 
                                                            (0x0000001fU 
                                                             & (IData)(
                                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                        >> 2U)))) 
                                                           | ((0x0dU 
                                                               == 
                                                               (0x0000001fU 
                                                                & (IData)(
                                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                           >> 2U)))) 
                                                              | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_10))))) 
                                                    << 5U) 
                                                   | (0x0000001fU 
                                                      & (IData)(
                                                                (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                 >> 7U)))))))));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[1U] 
        = ((0x0007ffffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[1U]) 
           | (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true 
              << 0x00000013U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[2U] 
        = ((0xfff80000U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[2U]) 
           | (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true 
              >> 0x0000000dU));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[2U] 
        = ((0xffe7ffffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[2U]) 
           | (((1U == (7U & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                     >> 0x0000000cU))))
                ? 0U : ((5U == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__func_r))
                         ? 2U : ((0x0dU == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__func_r))
                                  ? 3U : 1U))) << 0x00000013U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[2U] 
        = ((0x001fffffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[2U]) 
           | ((((4U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                               >> 2U)))) 
                | (0U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                 >> 2U)))))
                ? vlSelfRef.custom_cpu__DOT__ID_EX__DOT__I_imm
                : ((8U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                  >> 2U))))
                    ? (((- (IData)((1U & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                  >> 0x0000001fU))))) 
                        << 0x0000000cU) | ((0x00000fe0U 
                                            & ((IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 0x00000019U)) 
                                               << 5U)) 
                                           | (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 7U)))))
                    : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata2_true)) 
              << 0x00000015U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[3U] 
        = ((0xffe00000U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[3U]) 
           | ((((4U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                               >> 2U)))) 
                | (0U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                 >> 2U)))))
                ? vlSelfRef.custom_cpu__DOT__ID_EX__DOT__I_imm
                : ((8U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                  >> 2U))))
                    ? (((- (IData)((1U & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                  >> 0x0000001fU))))) 
                        << 0x0000000cU) | ((0x00000fe0U 
                                            & ((IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 0x00000019U)) 
                                               << 5U)) 
                                           | (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 7U)))))
                    : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata2_true)) 
              >> 0x0000000bU));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[3U] 
        = ((0x001fffffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[3U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ALUop)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true)))) 
              << 0x00000015U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[4U] 
        = (((IData)((((QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ALUop)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true)))) 
            >> 0x0000000bU) | ((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_addr 
                                << 0x00000018U) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ALUop)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000015U)));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[5U] 
        = ((0xfe000000U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[5U]) 
           | (((0x001fffffU & (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_addr 
                               >> 8U)) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ALUop)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true))) 
                                                   >> 0x00000020U)) 
                                          >> 0x0000000bU)) 
              | (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_out) 
                  << 0x00000018U) | (0x00e00000U & 
                                     (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_addr 
                                      >> 8U)))));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[5U] 
        = ((0x01ffffffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[5U]) 
           | ((IData)((((QData)((IData)((0x0000001fU 
                                         & (IData)(
                                                   (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                    >> 2U))))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 0x00000020U))))) 
              << 0x00000019U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[6U] 
        = (((IData)((((QData)((IData)((0x0000001fU 
                                       & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                  >> 2U))))) 
                      << 0x00000020U) | (QData)((IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 0x00000020U))))) 
            >> 7U) | ((IData)(((((QData)((IData)((0x0000001fU 
                                                  & (IData)(
                                                            (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                             >> 2U))))) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                    >> 0x00000020U)))) 
                               >> 0x00000020U)) << 0x00000019U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[7U] 
        = ((0xfffffc00U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[7U]) 
           | ((IData)(((((QData)((IData)((0x0000001fU 
                                          & (IData)(
                                                    (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                     >> 2U))))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                            >> 0x00000020U)))) 
                       >> 0x00000020U)) >> 7U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[7U] 
        = ((0xc00003ffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[7U]) 
           | (0x3ffffc00U & ((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                      >> 0x0000000cU)) 
                             << 0x0000000aU)));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[7U] 
        = ((0x3fffffffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data[7U]) 
           | (0xc0000000U & (((0x00100073U == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg)) 
                              << 0x0000001fU) | ((IData)(
                                                         (0x0000000002000030ULL 
                                                          == 
                                                          (0x00000000fe00707cULL 
                                                           & vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg))) 
                                                 << 0x0000001eU))));
    vlSelfRef.__Vtableidx1 = ((((IData)(vlSelfRef.Inst_Req_Valid) 
                                << 0x0000000aU) | (
                                                   ((IData)(vlSelfRef.Inst_Req_Ready) 
                                                    << 9U) 
                                                   | ((IData)(vlSelfRef.Inst_Valid) 
                                                      << 8U))) 
                              | (((IData)(vlSelfRef.Inst_Ready) 
                                  << 7U) | (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect) 
                                             << 6U) 
                                            | (((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_ready) 
                                                << 5U) 
                                               | (IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state)))));
    vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_next_state 
        = Vcustom_cpu__ConstPool__TABLE_h9fae46a8_0
        [vlSelfRef.__Vtableidx1];
}

void Vcustom_cpu___024root___eval_nba(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_nba\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcustom_cpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vcustom_cpu___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcustom_cpu___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcustom_cpu___024root___eval_phase__act(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_phase__act\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcustom_cpu___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcustom_cpu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcustom_cpu___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcustom_cpu___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcustom_cpu___024root___eval_phase__nba(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_phase__nba\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcustom_cpu___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcustom_cpu___024root___eval_nba(vlSelf);
        Vcustom_cpu___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcustom_cpu___024root___eval(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcustom_cpu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/xyzabc/Desktop/ysyx/UCAS-COURSE-OpenXiangshan/npc/vsrc/top.v", 4, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vcustom_cpu___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcustom_cpu___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/xyzabc/Desktop/ysyx/UCAS-COURSE-OpenXiangshan/npc/vsrc/top.v", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcustom_cpu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/xyzabc/Desktop/ysyx/UCAS-COURSE-OpenXiangshan/npc/vsrc/top.v", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vcustom_cpu___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcustom_cpu___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vcustom_cpu___024root___eval_debug_assertions(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_debug_assertions\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.Inst_Req_Ready & 0xfeU)))) {
        Verilated::overWidthError("Inst_Req_Ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.Inst_Valid & 0xfeU)))) {
        Verilated::overWidthError("Inst_Valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.Mem_Req_Ready & 0xfeU)))) {
        Verilated::overWidthError("Mem_Req_Ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.Read_data_Valid & 0xfeU)))) {
        Verilated::overWidthError("Read_data_Valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.intr & 0xfeU)))) {
        Verilated::overWidthError("intr");
    }
}
#endif  // VL_DEBUG
