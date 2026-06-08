// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcustom_cpu.h for the primary calling header

#include "Vcustom_cpu__pch.h"

VL_ATTR_COLD void Vcustom_cpu___024root___eval_static__TOP(Vcustom_cpu___024root* vlSelf);
VL_ATTR_COLD void Vcustom_cpu___024root____Vm_traceActivitySetAll(Vcustom_cpu___024root* vlSelf);

VL_ATTR_COLD void Vcustom_cpu___024root___eval_static(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_static\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcustom_cpu___024root___eval_static__TOP(vlSelf);
    Vcustom_cpu___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vcustom_cpu___024root___eval_static__TOP(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_static__TOP\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5488017929647549223ull);
}

VL_ATTR_COLD void Vcustom_cpu___024root___eval_initial(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_initial\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcustom_cpu___024root___eval_final(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_final\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcustom_cpu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcustom_cpu___024root___eval_phase__stl(Vcustom_cpu___024root* vlSelf);

VL_ATTR_COLD void Vcustom_cpu___024root___eval_settle(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_settle\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcustom_cpu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/xyzabc/Desktop/ysyx/UCAS-COURSE-OpenXiangshan/npc/vsrc/top.v", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vcustom_cpu___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vcustom_cpu___024root___eval_triggers_vec__stl(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_triggers_vec__stl\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vcustom_cpu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcustom_cpu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcustom_cpu___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcustom_cpu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*4:0*/, 4096> Vcustom_cpu__ConstPool__TABLE_h1eebf72c_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vcustom_cpu__ConstPool__TABLE_h81236597_0;
extern const VlUnpacked<CData/*4:0*/, 512> Vcustom_cpu__ConstPool__TABLE_ha9976d2a_0;
extern const VlUnpacked<CData/*4:0*/, 2048> Vcustom_cpu__ConstPool__TABLE_h9fae46a8_0;

VL_ATTR_COLD void Vcustom_cpu___024root___stl_sequent__TOP__0(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___stl_sequent__TOP__0\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PC = vlSelfRef.custom_cpu__DOT__IF_EX__DOT__PC_reg;
    vlSelfRef.Address = ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
                          << 0x00000014U) | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                             >> 0x0000000cU));
    vlSelfRef.Write_data = ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                             << 0x0000001aU) | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
                                                >> 6U));
    vlSelfRef.Write_strb = (0x0000000fU & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                           >> 6U));
    vlSelfRef.a0_out = vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[10U];
    vlSelfRef.MemWrite = ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                           >> 0x0000000aU) & (4U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)));
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
    vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_to_WB_valid 
        = ((0x10U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)) 
           & (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work));
    vlSelfRef.Read_data_Ready = ((8U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)) 
                                 | (1U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)));
    vlSelfRef.Inst_Ready = ((4U == (IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state)) 
                            | (1U == (IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state)));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_10 
        = ((4U == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                          >> 2U)))) 
           | (0x0cU == (0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                               >> 2U)))));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_out 
        = ((2U == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state)) 
           | (4U == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state)));
    vlSelfRef.MemRead = ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                          >> 0x0000000bU) & (4U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state)));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__MEM_ready 
        = (1U & ((~ (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work)) 
                 | (0x10U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state))));
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
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_3 
        = ((0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                   >> 0x0000000fU))) 
           == (0x0000001fU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U]));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_5 
        = ((0x0000001fU & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                   >> 0x0000000fU))) 
           == (0x0000001fU & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U]));
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write 
        = ((IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work) 
           & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
              >> 5U));
    vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write 
        = ((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_work) 
           & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
              >> 5U));
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
    vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_yes 
        = ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__Jump) 
           | (IData)(((0x0000000000000060ULL == (0x000000000000007cULL 
                                                 & vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg)) 
                      & (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_out))));
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

VL_ATTR_COLD void Vcustom_cpu___024root___eval_stl(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_stl\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vcustom_cpu___024root___stl_sequent__TOP__0(vlSelf);
        Vcustom_cpu___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vcustom_cpu___024root___eval_phase__stl(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___eval_phase__stl\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcustom_cpu___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcustom_cpu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcustom_cpu___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcustom_cpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcustom_cpu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcustom_cpu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vcustom_cpu___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vcustom_cpu___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcustom_cpu___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcustom_cpu___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcustom_cpu___024root____Vm_traceActivitySetAll(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root____Vm_traceActivitySetAll\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vcustom_cpu___024root___ctor_var_reset(Vcustom_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root___ctor_var_reset\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700755172620096637ull);
    vlSelf->Inst_Req_Valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14137557445835842802ull);
    vlSelf->Inst_Req_Ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6989136464829654867ull);
    vlSelf->Instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6259496675603560950ull);
    vlSelf->Inst_Valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1120782595635893045ull);
    vlSelf->Inst_Ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1553433150701407397ull);
    vlSelf->Address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 224589347255615128ull);
    vlSelf->MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6222392603918024337ull);
    vlSelf->Write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1508782950897973885ull);
    vlSelf->Write_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2756982455163288992ull);
    vlSelf->MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434942013124915871ull);
    vlSelf->Mem_Req_Ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9949210113208926132ull);
    vlSelf->Read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 291261158078230329ull);
    vlSelf->Read_data_Valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18339342530187887789ull);
    vlSelf->Read_data_Ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4987552130788350629ull);
    vlSelf->intr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14971099311476308605ull);
    vlSelf->cpu_perf_cnt_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2503374738791894739ull);
    vlSelf->cpu_perf_cnt_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17573868642813161362ull);
    vlSelf->cpu_perf_cnt_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10368084779119699867ull);
    vlSelf->cpu_perf_cnt_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9744431223232109843ull);
    vlSelf->cpu_perf_cnt_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13271406394272813879ull);
    vlSelf->cpu_perf_cnt_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9895156224584512190ull);
    vlSelf->cpu_perf_cnt_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10841956254381754459ull);
    vlSelf->cpu_perf_cnt_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3636172390688354386ull);
    vlSelf->cpu_perf_cnt_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4144373565970307010ull);
    vlSelf->cpu_perf_cnt_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3520720010082573940ull);
    vlSelf->cpu_perf_cnt_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8156917852830041497ull);
    vlSelf->cpu_perf_cnt_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12235970838383888108ull);
    vlSelf->cpu_perf_cnt_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 628774395198449512ull);
    vlSelf->cpu_perf_cnt_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14642831783472814310ull);
    vlSelf->cpu_perf_cnt_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14873709629399668243ull);
    vlSelf->cpu_perf_cnt_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14969926006562558022ull);
    VL_SCOPED_RAND_RESET_W(70, vlSelf->inst_retire, __VscopeHash, 10022733830328690451ull);
    vlSelf->a0_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10517687020880746488ull);
    vlSelf->custom_cpu__DOT__inst_Req_Valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17691616095585752044ull);
    vlSelf->custom_cpu__DOT__IF_EX__DOT__IF_current_state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2686340004503902228ull);
    vlSelf->custom_cpu__DOT__IF_EX__DOT__IF_next_state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7646405919625158196ull);
    vlSelf->custom_cpu__DOT__IF_EX__DOT__Instruction_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8972873979842026400ull);
    vlSelf->custom_cpu__DOT__IF_EX__DOT__PC_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5890864495973943992ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__ID_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9686200284555241700ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__IF_to_ID_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9423267669392419825ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8512596943364818898ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__func_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13534094383094642768ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__I_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12698225814180179305ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__RF_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8826532478829913756ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__rdata1_true = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15722193673612465631ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__rdata2_true = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15121312805800419298ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__ALUop = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10994424580016222805ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10987885599135578569ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__ID_work = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17597466013893799967ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__ID_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14333972569265440183ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__MEM_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 515209649293689293ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__MEM_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7769644174558115746ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__prediction_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10086056308947665920ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__predictor_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10580882261364502749ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__prediction_yes = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 580735587659137913ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_3 = 0;
    vlSelf->custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_4 = 0;
    vlSelf->custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_5 = 0;
    vlSelf->custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_6 = 0;
    vlSelf->custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_10 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17688318835497277149ull);
    }
    vlSelf->custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16971313100252172475ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14760784557447953351ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14041920745961213335ull);
    vlSelf->custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_next_state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1680519647607280467ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data, __VscopeHash, 2084467956435603514ull);
    VL_SCOPED_RAND_RESET_W(183, vlSelf->custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data, __VscopeHash, 7978946387972507071ull);
    vlSelf->custom_cpu__DOT__EX_EX__DOT__EX_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15524945895525110708ull);
    vlSelf->custom_cpu__DOT__EX_EX__DOT__ID_to_EX_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14822199651726482650ull);
    vlSelf->custom_cpu__DOT__EX_EX__DOT__MEM_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15182200628199828525ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg, __VscopeHash, 7950096884356183224ull);
    vlSelf->custom_cpu__DOT__EX_EX__DOT__Branch_real = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540108936778042649ull);
    vlSelf->custom_cpu__DOT__EX_EX__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14370850290891913506ull);
    vlSelf->custom_cpu__DOT__EX_EX__DOT__block_cancel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17530663178244166137ull);
    vlSelf->custom_cpu__DOT__EX_EX__DOT__EX_work = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6178133438959338381ull);
    vlSelf->custom_cpu__DOT__EX_EX__DOT__Write_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8647725880325139619ull);
    vlSelf->custom_cpu__DOT__EX_EX__DOT__EX_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15530325126960028849ull);
    vlSelf->custom_cpu__DOT__EX_EX__DOT__alu_ex__DOT__unsigend_sub = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3889031481152139094ull);
    vlSelf->custom_cpu__DOT__MEM_EX__DOT__MEM_to_WB_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6549950190953379427ull);
    VL_SCOPED_RAND_RESET_W(183, vlSelf->custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg, __VscopeHash, 11010710126216805396ull);
    vlSelf->custom_cpu__DOT__MEM_EX__DOT__MEM_current_state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14525218699955029314ull);
    vlSelf->custom_cpu__DOT__MEM_EX__DOT__MEM_next_state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17842790471042632838ull);
    vlSelf->custom_cpu__DOT__MEM_EX__DOT__MEM_work = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2060505050383781527ull);
    vlSelf->custom_cpu__DOT__MEM_EX__DOT__Read_data_current = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6747098544885040339ull);
    VL_SCOPED_RAND_RESET_W(71, vlSelf->custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg, __VscopeHash, 5167041459146098685ull);
    vlSelf->custom_cpu__DOT__WB_EX__DOT__WB_work = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10117514283106953993ull);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
