// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcustom_cpu__Syms.h"


void Vcustom_cpu___024root__trace_chg_0_sub_0(Vcustom_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcustom_cpu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root__trace_chg_0\n"); );
    // Body
    Vcustom_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcustom_cpu___024root*>(voidSelf);
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcustom_cpu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcustom_cpu___024root__trace_chg_0_sub_0(Vcustom_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root__trace_chg_0_sub_0\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect));
        bufp->chgQData(oldp+1,((((QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_yes)) 
                                 << 0x00000020U) | (QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_addr)))),33);
        bufp->chgIData(oldp+3,(((1U & ((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Branch_real) 
                                       | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                          >> 0x0000000cU)))
                                 ? ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                     << 8U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                               >> 0x00000018U))
                                 : ((IData)(4U) + (
                                                   (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                                    << 7U) 
                                                   | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                                      >> 0x00000019U))))),32);
        bufp->chgBit(oldp+4,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_valid));
        bufp->chgBit(oldp+5,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_ready));
        bufp->chgBit(oldp+6,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_valid));
        bufp->chgBit(oldp+7,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_ready));
        bufp->chgBit(oldp+8,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_work));
        bufp->chgBit(oldp+9,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__MEM_ready));
        bufp->chgBit(oldp+10,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_to_WB_valid));
        bufp->chgQData(oldp+11,((((QData)((IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__PC_reg)) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__Instruction_reg)))),64);
        bufp->chgWData(oldp+13,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data),256);
        bufp->chgWData(oldp+21,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data),183);
        bufp->chgQData(oldp+27,((((QData)((IData)((1U 
                                                   & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                      >> 7U)))) 
                                  << 0x00000026U) | 
                                 (((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write)) 
                                   << 0x00000025U) 
                                  | (((QData)((IData)(
                                                      (0x0000001fU 
                                                       & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U]))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)))))),39);
        __Vtemp_2[0U] = (IData)((((QData)((IData)((0x0000001fU 
                                                   & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U]))) 
                                  << 0x00000021U) | 
                                 (((QData)((IData)(
                                                   (1U 
                                                    & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
                                                       >> 5U)))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_data)))));
        __Vtemp_2[1U] = ((0xffffffc0U & ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                          << 0x0000001aU) 
                                         | (0x03ffffc0U 
                                            & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
                                               >> 6U)))) 
                         | (IData)(((((QData)((IData)(
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
        __Vtemp_2[2U] = ((0x00000040U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] 
                                         >> 0x00000010U)) 
                         | (0x0000003fU & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                           >> 6U)));
        bufp->chgWData(oldp+29,(__Vtemp_2),71);
        bufp->chgQData(oldp+32,((((QData)((IData)((1U 
                                                   & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                                      >> 0x0000000bU)))) 
                                  << 0x00000026U) | 
                                 (((QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write)) 
                                   << 0x00000025U) 
                                  | (((QData)((IData)(
                                                      (0x0000001fU 
                                                       & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U]))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_data)))))),39);
        bufp->chgQData(oldp+34,((((QData)((IData)((1U 
                                                   & vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U]))) 
                                  << 0x00000025U) | 
                                 (((QData)((IData)(
                                                   (0x0000001fU 
                                                    & (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                                       >> 1U)))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U]))))),38);
        bufp->chgCData(oldp+36,((0x0000001fU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                                >> 0x00000019U))),5);
        bufp->chgIData(oldp+37,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                                  << 2U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                            >> 0x0000001eU))),32);
        bufp->chgCData(oldp+38,((7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                       >> 0x00000015U))),3);
        bufp->chgIData(oldp+39,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                  << 0x0000000bU) | 
                                 (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                  >> 0x00000015U))),32);
        bufp->chgIData(oldp+40,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                  << 0x0000000bU) | 
                                 (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                  >> 0x00000015U))),32);
        bufp->chgCData(oldp+41,((3U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                       >> 0x00000013U))),2);
        bufp->chgIData(oldp+42,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                  << 0x0000000dU) | 
                                 (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                  >> 0x00000013U))),32);
        bufp->chgCData(oldp+43,((0x0000001fU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                >> 0x0000000eU))),5);
        bufp->chgIData(oldp+44,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                  << 7U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                            >> 0x00000019U))),32);
        bufp->chgCData(oldp+45,((7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                       >> 8U))),3);
        bufp->chgBit(oldp+46,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                     >> 0x00000018U))));
        bufp->chgIData(oldp+47,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                  << 8U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                            >> 0x00000018U))),32);
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                     >> 0x0000000dU))));
        bufp->chgBit(oldp+49,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                                     >> 0x0000001eU))));
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                     >> 0x0000000cU))));
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                     >> 0x0000000bU))));
        bufp->chgBit(oldp+52,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                     >> 7U))));
        bufp->chgBit(oldp+53,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                     >> 6U))));
        bufp->chgBit(oldp+54,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                     >> 5U))));
        bufp->chgCData(oldp+55,((0x0000001fU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U])),5);
        bufp->chgIData(oldp+56,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U]),32);
        bufp->chgBit(oldp+57,((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                               >> 0x0000001fU)));
        bufp->chgWData(oldp+58,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg),256);
        bufp->chgIData(oldp+66,((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)),32);
        bufp->chgIData(oldp+67,(((0U == (3U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                               >> 0x00000013U)))
                                  ? (((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                       << 0x0000000dU) 
                                      | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                         >> 0x00000013U)) 
                                     << (0x0000001fU 
                                         & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                            >> 0x0000000eU)))
                                  : ((2U == (3U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                   >> 0x00000013U)))
                                      ? (((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                           << 0x0000000dU) 
                                          | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                             >> 0x00000013U)) 
                                         >> (0x0000001fU 
                                             & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                >> 0x0000000eU)))
                                      : ((3U == (3U 
                                                 & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
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
                                                >> 0x00000013U)))))),32);
        bufp->chgBit(oldp+68,((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))));
        bufp->chgBit(oldp+69,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Branch_real));
        bufp->chgIData(oldp+70,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result),32);
        bufp->chgBit(oldp+71,((1U & ((0U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                   >> 8U)))
                                      ? (0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                                      : ((1U == (7U 
                                                 & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                    >> 8U)))
                                          ? (~ (0U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))
                                          : (((4U == 
                                               (7U 
                                                & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                   >> 8U))) 
                                              | (6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                     >> 8U))))
                                              ? (~ 
                                                 (0U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))
                                              : (((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                       >> 8U))) 
                                                  | (7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                         >> 8U))))
                                                  ? 
                                                 (0U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                                                  : 0U)))))));
        bufp->chgQData(oldp+72,(((- (QData)((IData)(
                                                    (1U 
                                                     & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                                                        >> 0x0000001eU))))) 
                                 & ((QData)((IData)(
                                                    ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                      << 0x0000000bU) 
                                                     | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                        >> 0x00000015U)))) 
                                    * (QData)((IData)(
                                                      ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                        << 0x0000000bU) 
                                                       | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                          >> 0x00000015U))))))),64);
        bufp->chgBit(oldp+74,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__block_cancel));
        bufp->chgIData(oldp+75,((0xfffffffcU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)),32);
        bufp->chgCData(oldp+76,((3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)),2);
        bufp->chgCData(oldp+77,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Write_strb),4);
        bufp->chgIData(oldp+78,(((0U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                               >> 8U)))
                                  ? ((0U == (3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                      ? (0x000000ffU 
                                         & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])
                                      : ((1U == (3U 
                                                 & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                          ? (0x0000ff00U 
                                             & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                                                << 8U))
                                          : ((2U == 
                                              (3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                              ? (0x00ff0000U 
                                                 & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                                                    << 0x00000010U))
                                              : VL_SHIFTL_III(32,32,32, vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U], 0x00000018U))))
                                  : ((1U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                   >> 8U)))
                                      ? ((0U == (3U 
                                                 & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                          ? (0x0000ffffU 
                                             & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])
                                          : VL_SHIFTL_III(32,32,32, vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U], 0x00000010U))
                                      : vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U]))),32);
        bufp->chgCData(oldp+79,((0x000000ffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])),8);
        bufp->chgCData(oldp+80,((0x000000ffU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                                                >> 8U))),8);
        bufp->chgBit(oldp+81,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write));
        bufp->chgBit(oldp+82,((1U & ((2U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                   >> 0x00000015U)))
                                      ? (1U & (((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                 >> 0x00000014U) 
                                                & ((~ (IData)(
                                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                                               >> 0x0000001fU))) 
                                                   & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                      >> 0x00000014U))) 
                                               | ((~ 
                                                   (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                    >> 0x00000014U)) 
                                                  & ((~ 
                                                      (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                       >> 0x00000014U)) 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                                                >> 0x0000001fU))))))
                                      : ((6U == (7U 
                                                 & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                    >> 0x00000015U)))
                                          ? (1U & (
                                                   ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                     >> 0x00000014U) 
                                                    & ((~ 
                                                        (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                         >> 0x00000014U)) 
                                                       & (~ (IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                                                     >> 0x0000001fU))))) 
                                                   | ((~ 
                                                       (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                        >> 0x00000014U)) 
                                                      & ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                          >> 0x00000014U) 
                                                         & (IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                                                    >> 0x0000001fU))))))
                                          : 0U)))));
        bufp->chgBit(oldp+83,((1U & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                             >> 0x00000020U)))));
        bufp->chgIData(oldp+84,(((IData)(1U) + ((~ 
                                                 ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                   << 0x0000000bU) 
                                                  | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                     >> 0x00000015U))) 
                                                + (
                                                   (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                    << 0x0000000bU) 
                                                   | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                      >> 0x00000015U))))),32);
        bufp->chgQData(oldp+85,((QData)((IData)(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                  << 0x0000000bU) 
                                                 | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                    >> 0x00000015U))))),33);
        bufp->chgQData(oldp+87,((QData)((IData)(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                  << 0x0000000bU) 
                                                 | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                    >> 0x00000015U))))),33);
        bufp->chgQData(oldp+89,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__alu_ex__DOT__unsigend_sub),33);
        bufp->chgIData(oldp+91,((((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                   << 0x0000000dU) 
                                  | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                     >> 0x00000013U)) 
                                 << (0x0000001fU & 
                                     (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                      >> 0x0000000eU)))),32);
        bufp->chgIData(oldp+92,((((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                   << 0x0000000dU) 
                                  | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                     >> 0x00000013U)) 
                                 >> (0x0000001fU & 
                                     (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                      >> 0x0000000eU)))),32);
        bufp->chgIData(oldp+93,(VL_SHIFTRS_III(32,32,5, 
                                               ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                 << 0x0000000dU) 
                                                | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                   >> 0x00000013U)), 
                                               (0x0000001fU 
                                                & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                   >> 0x0000000eU)))),32);
        bufp->chgQData(oldp+94,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg),64);
        bufp->chgIData(oldp+96,((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                         >> 0x00000020U))),32);
        bufp->chgIData(oldp+97,((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg)),32);
        bufp->chgCData(oldp+98,((0x0000001fU & (IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 2U)))),5);
        bufp->chgCData(oldp+99,((0x0000001fU & (IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 7U)))),5);
        bufp->chgCData(oldp+100,((0x0000001fU & (IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 0x0000000fU)))),5);
        bufp->chgCData(oldp+101,((0x0000001fU & (IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 0x00000014U)))),5);
        bufp->chgCData(oldp+102,((7U & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                >> 0x0000000cU)))),3);
        bufp->chgCData(oldp+103,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__func_r),4);
        bufp->chgCData(oldp+104,((0x0000007fU & (IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 0x00000019U)))),7);
        bufp->chgIData(oldp+105,(((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                           >> 0x0000000cU)) 
                                  << 0x0000000cU)),32);
        bufp->chgIData(oldp+106,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__I_imm),32);
        bufp->chgIData(oldp+107,((((- (IData)((1U & (IData)(
                                                            (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                             >> 0x0000001fU))))) 
                                   << 0x0000000cU) 
                                  | ((0x00000fe0U & 
                                      ((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                >> 0x00000019U)) 
                                       << 5U)) | (0x0000001fU 
                                                  & (IData)(
                                                            (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                             >> 7U)))))),32);
        bufp->chgIData(oldp+108,((((- (IData)((1U & (IData)(
                                                            (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                             >> 0x0000001fU))))) 
                                   << 0x0000000cU) 
                                  | ((0x00000800U & 
                                      ((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
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
                                              << 1U)))))),32);
        bufp->chgIData(oldp+109,((((- (IData)((1U & (IData)(
                                                            (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                             >> 0x0000001fU))))) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & ((IData)(
                                                   (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                    >> 0x0000000cU)) 
                                           << 1U)) 
                                       | (1U & (IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 0x00000014U)))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & ((IData)(
                                                   (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                    >> 0x00000015U)) 
                                           << 1U))))),32);
        bufp->chgIData(oldp+110,(((0U == (0x0000001fU 
                                          & (IData)(
                                                    (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                     >> 0x0000000fU))))
                                   ? 0U : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile
                                  [(0x0000001fU & (IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 0x0000000fU)))])),32);
        bufp->chgIData(oldp+111,(((0U == (0x0000001fU 
                                          & (IData)(
                                                    (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                     >> 0x00000014U))))
                                   ? 0U : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile
                                  [(0x0000001fU & (IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 0x00000014U)))])),32);
        bufp->chgIData(oldp+112,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true),32);
        bufp->chgIData(oldp+113,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata2_true),32);
        bufp->chgBit(oldp+114,((0x18U == (0x0000001fU 
                                          & (IData)(
                                                    (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                     >> 2U))))));
        bufp->chgCData(oldp+115,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ALUop),3);
        bufp->chgCData(oldp+116,(((1U == (7U & (IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 0x0000000cU))))
                                   ? 0U : ((5U == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__func_r))
                                            ? 2U : 
                                           ((0x0dU 
                                             == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__func_r))
                                             ? 3U : 1U)))),2);
        bufp->chgBit(oldp+117,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__Jump));
        bufp->chgBit(oldp+118,(((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_10) 
                                & ((5U == (7U & (IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 0x0000000cU)))) 
                                   | (1U == (7U & (IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 0x0000000cU))))))));
        bufp->chgBit(oldp+119,((0U == (0x0000001fU 
                                       & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                  >> 2U))))));
        bufp->chgBit(oldp+120,((8U == (0x0000001fU 
                                       & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                  >> 2U))))));
        bufp->chgIData(oldp+121,((((4U == (0x0000001fU 
                                           & (IData)(
                                                     (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                      >> 2U)))) 
                                   | (0U == (0x0000001fU 
                                             & (IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 2U)))))
                                   ? vlSelfRef.custom_cpu__DOT__ID_EX__DOT__I_imm
                                   : ((8U == (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 2U))))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                  >> 0x0000001fU))))) 
                                           << 0x0000000cU) 
                                          | ((0x00000fe0U 
                                              & ((IData)(
                                                         (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                          >> 0x00000019U)) 
                                                 << 5U)) 
                                             | (0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 7U)))))
                                       : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata2_true))),32);
        bufp->chgCData(oldp+122,((0x0000001fU & ((4U 
                                                  == 
                                                  (0x0000001fU 
                                                   & (IData)(
                                                             (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                              >> 2U))))
                                                  ? (IData)(
                                                            (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                             >> 0x00000014U))
                                                  : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata2_true))),5);
        bufp->chgBit(oldp+123,((IData)((0x0000000002000030ULL 
                                        == (0x00000000fe00707cULL 
                                            & vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg)))));
        bufp->chgBit(oldp+124,((0x00100073U == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg))));
        bufp->chgBit(oldp+125,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_work));
        bufp->chgBit(oldp+126,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_done));
        bufp->chgBit(oldp+127,(((((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write) 
                                  & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_3) 
                                     | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_4))) 
                                 & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                    >> 7U)) | ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                                >> 0x0000000bU) 
                                               & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write) 
                                                  & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_5) 
                                                     | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_6)))))));
        bufp->chgBit(oldp+128,(((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write) 
                                & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_3) 
                                   | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_4)))));
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+130,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write));
        bufp->chgCData(oldp+131,((0x0000001fU & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U])),5);
        bufp->chgIData(oldp+132,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_data),32);
        bufp->chgBit(oldp+133,(((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write) 
                                & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_5) 
                                   | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_6)))));
        bufp->chgBit(oldp+134,((1U & vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U])));
        bufp->chgIData(oldp+135,(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U]),32);
        bufp->chgCData(oldp+136,((0x0000001fU & (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                                 >> 1U))),5);
        bufp->chgBit(oldp+137,(((5U == (0x0000001fU 
                                        & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                   >> 2U)))) 
                                | ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__Jump) 
                                   | ((0U == (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                         >> 2U)))) 
                                      | ((0x0dU == 
                                          (0x0000001fU 
                                           & (IData)(
                                                     (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                      >> 2U)))) 
                                         | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_10)))))));
        bufp->chgIData(oldp+138,((0xfffffffeU & (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true 
                                                 + vlSelfRef.custom_cpu__DOT__ID_EX__DOT__I_imm))),32);
        bufp->chgIData(oldp+139,(((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                           >> 0x00000020U)) 
                                  + (((- (IData)((1U 
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
                                                 << 1U))))))),32);
        bufp->chgIData(oldp+140,(((0x1bU == (0x0000001fU 
                                             & (IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 2U))))
                                   ? ((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                               >> 0x00000020U)) 
                                      + (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                 >> 0x0000001fU))))) 
                                          << 0x00000014U) 
                                         | ((((0x000001feU 
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
                                   : (0xfffffffeU & 
                                      (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true 
                                       + vlSelfRef.custom_cpu__DOT__ID_EX__DOT__I_imm)))),32);
        bufp->chgIData(oldp+141,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_addr),32);
        bufp->chgBit(oldp+142,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_out));
        bufp->chgBit(oldp+143,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__predictor_update));
        bufp->chgBit(oldp+144,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_yes));
        bufp->chgCData(oldp+145,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state),5);
        bufp->chgIData(oldp+146,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[0]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[1]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[2]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[3]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[4]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[5]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[6]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[7]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[8]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[9]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[10]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[11]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[12]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[13]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[14]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[15]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[16]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[17]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[18]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[19]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[20]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[21]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[22]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[23]),32);
        bufp->chgIData(oldp+170,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[24]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[25]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[26]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[27]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[28]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[29]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[30]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[31]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+179,(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state),5);
        bufp->chgIData(oldp+180,(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__Instruction_reg),32);
        bufp->chgIData(oldp+181,(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__PC_reg),32);
        bufp->chgBit(oldp+182,(((~ (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect)) 
                                & (0x10U == (IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state)))));
        bufp->chgWData(oldp+183,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg),183);
        bufp->chgIData(oldp+189,(((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] 
                                   << 0x0000000aU) 
                                  | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                                     >> 0x00000016U))),32);
        bufp->chgIData(oldp+190,(((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                                   << 0x0000000dU) 
                                  | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                     >> 0x00000013U))),32);
        bufp->chgCData(oldp+191,((0x0000001fU & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                 >> 0x0000000eU))),5);
        bufp->chgIData(oldp+192,(((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                   << 0x00000014U) 
                                  | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
                                     >> 0x0000000cU))),32);
        bufp->chgCData(oldp+193,((3U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                        >> 0x0000000cU))),2);
        bufp->chgCData(oldp+194,((7U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                                        >> 0x00000013U))),3);
        bufp->chgBit(oldp+195,((1U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+196,((1U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+197,((1U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] 
                                      >> 0x00000016U))));
        bufp->chgCData(oldp+198,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state),5);
        bufp->chgBit(oldp+199,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work));
        bufp->chgBit(oldp+200,((0x10U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state))));
        bufp->chgIData(oldp+201,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current),32);
        bufp->chgCData(oldp+202,((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                  >> 0x00000018U)),8);
        bufp->chgCData(oldp+203,((0x000000ffU & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                 >> 0x00000010U))),8);
        bufp->chgCData(oldp+204,((0x000000ffU & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                                 >> 8U))),8);
        bufp->chgCData(oldp+205,((0x000000ffU & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current)),8);
        bufp->chgWData(oldp+206,(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg),71);
        bufp->chgIData(oldp+209,(((vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[2U] 
                                   << 0x0000001aU) 
                                  | (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                     >> 6U))),32);
        bufp->chgBit(oldp+210,((1U & (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+211,(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__WB_work));
        bufp->chgBit(oldp+212,((vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                & (IData)(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__WB_work))));
    }
    bufp->chgBit(oldp+213,(vlSelfRef.clk));
    bufp->chgBit(oldp+214,(vlSelfRef.rst));
    bufp->chgIData(oldp+215,(vlSelfRef.PC),32);
    bufp->chgBit(oldp+216,(vlSelfRef.Inst_Req_Valid));
    bufp->chgBit(oldp+217,(vlSelfRef.Inst_Req_Ready));
    bufp->chgIData(oldp+218,(vlSelfRef.Instruction),32);
    bufp->chgBit(oldp+219,(vlSelfRef.Inst_Valid));
    bufp->chgBit(oldp+220,(vlSelfRef.Inst_Ready));
    bufp->chgIData(oldp+221,(vlSelfRef.Address),32);
    bufp->chgBit(oldp+222,(vlSelfRef.MemWrite));
    bufp->chgIData(oldp+223,(vlSelfRef.Write_data),32);
    bufp->chgCData(oldp+224,(vlSelfRef.Write_strb),4);
    bufp->chgBit(oldp+225,(vlSelfRef.MemRead));
    bufp->chgBit(oldp+226,(vlSelfRef.Mem_Req_Ready));
    bufp->chgIData(oldp+227,(vlSelfRef.Read_data),32);
    bufp->chgBit(oldp+228,(vlSelfRef.Read_data_Valid));
    bufp->chgBit(oldp+229,(vlSelfRef.Read_data_Ready));
    bufp->chgBit(oldp+230,(vlSelfRef.intr));
    bufp->chgIData(oldp+231,(vlSelfRef.cpu_perf_cnt_0),32);
    bufp->chgIData(oldp+232,(vlSelfRef.cpu_perf_cnt_1),32);
    bufp->chgIData(oldp+233,(vlSelfRef.cpu_perf_cnt_2),32);
    bufp->chgIData(oldp+234,(vlSelfRef.cpu_perf_cnt_3),32);
    bufp->chgIData(oldp+235,(vlSelfRef.cpu_perf_cnt_4),32);
    bufp->chgIData(oldp+236,(vlSelfRef.cpu_perf_cnt_5),32);
    bufp->chgIData(oldp+237,(vlSelfRef.cpu_perf_cnt_6),32);
    bufp->chgIData(oldp+238,(vlSelfRef.cpu_perf_cnt_7),32);
    bufp->chgIData(oldp+239,(vlSelfRef.cpu_perf_cnt_8),32);
    bufp->chgIData(oldp+240,(vlSelfRef.cpu_perf_cnt_9),32);
    bufp->chgIData(oldp+241,(vlSelfRef.cpu_perf_cnt_10),32);
    bufp->chgIData(oldp+242,(vlSelfRef.cpu_perf_cnt_11),32);
    bufp->chgIData(oldp+243,(vlSelfRef.cpu_perf_cnt_12),32);
    bufp->chgIData(oldp+244,(vlSelfRef.cpu_perf_cnt_13),32);
    bufp->chgIData(oldp+245,(vlSelfRef.cpu_perf_cnt_14),32);
    bufp->chgIData(oldp+246,(vlSelfRef.cpu_perf_cnt_15),32);
    bufp->chgWData(oldp+247,(vlSelfRef.inst_retire),70);
    bufp->chgIData(oldp+250,(vlSelfRef.a0_out),32);
    bufp->chgCData(oldp+251,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_next_state),5);
    bufp->chgCData(oldp+252,(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_next_state),5);
    bufp->chgCData(oldp+253,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_next_state),5);
}

void Vcustom_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root__trace_cleanup\n"); );
    // Body
    Vcustom_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcustom_cpu___024root*>(voidSelf);
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
