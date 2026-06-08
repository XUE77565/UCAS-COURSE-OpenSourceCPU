// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcustom_cpu__Syms.h"


VL_ATTR_COLD void Vcustom_cpu___024root__trace_init_sub__TOP__0(Vcustom_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root__trace_init_sub__TOP__0\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+216,0,"Inst_Req_Valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"Inst_Req_Ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"Instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+219,0,"Inst_Valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"Inst_Ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"Address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"Write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"Write_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+225,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"Mem_Req_Ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"Read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+228,0,"Read_data_Valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"Read_data_Ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"intr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"cpu_perf_cnt_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"cpu_perf_cnt_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"cpu_perf_cnt_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"cpu_perf_cnt_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"cpu_perf_cnt_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"cpu_perf_cnt_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"cpu_perf_cnt_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"cpu_perf_cnt_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"cpu_perf_cnt_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"cpu_perf_cnt_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"cpu_perf_cnt_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"cpu_perf_cnt_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"cpu_perf_cnt_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"cpu_perf_cnt_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"cpu_perf_cnt_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"cpu_perf_cnt_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+247,0,"inst_retire",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBus(c+250,0,"a0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("custom_cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+216,0,"Inst_Req_Valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"Inst_Req_Ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"Instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+219,0,"Inst_Valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"Inst_Ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"Address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"Write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"Write_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+225,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"Mem_Req_Ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"Read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+228,0,"Read_data_Valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"Read_data_Ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"intr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"cpu_perf_cnt_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"cpu_perf_cnt_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"cpu_perf_cnt_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"cpu_perf_cnt_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"cpu_perf_cnt_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"cpu_perf_cnt_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"cpu_perf_cnt_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"cpu_perf_cnt_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"cpu_perf_cnt_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"cpu_perf_cnt_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"cpu_perf_cnt_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"cpu_perf_cnt_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"cpu_perf_cnt_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"cpu_perf_cnt_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"cpu_perf_cnt_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"cpu_perf_cnt_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+247,0,"inst_retire",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBus(c+250,0,"a0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+0,0,"prediction_incorrect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"predictor_to_IF_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+3,0,"PC_correct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"IF_to_ID_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"ID_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"ID_to_EX_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"EX_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"EX_to_MEM_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"MEM_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"MEM_to_WB_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"WB_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"inst_Req_Valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+11,0,"IF_to_ID_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+13,0,"ID_to_EX_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+21,0,"EX_to_MEM_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 182,0);
    tracep->declQuad(c+27,0,"EX_to_ID_bypath_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declArray(c+29,0,"MEM_to_WB_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declQuad(c+32,0,"MEM_to_ID_bypath_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+34,0,"WB_to_ID_bypath_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("EX_EX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"prediction_incorrect",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+13,0,"ID_to_EX_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+21,0,"EX_to_MEM_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 182,0);
    tracep->declQuad(c+27,0,"EX_to_ID_bypath_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBit(c+7,0,"EX_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"EX_to_MEM_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"ID_to_EX_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"MEM_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"PC_correct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"U_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"ALUop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"ALUop_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"ALUop_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"Shiftop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"Shiftop_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"Shiftop_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"PC_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"func",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+46,0,"prediction_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"prediction_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"AluShi_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"RF_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"RF_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"rdata2_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"ebreak_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+58,0,"ID_to_EX_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+66,0,"ALU_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"Shifter_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"Branch_real",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"Branch_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+72,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+74,0,"block_cancel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"EX_work",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"EX_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"Address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"Write_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+78,0,"Write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"reg_byte_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"reg_byte_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+52,0,"EX_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"EX_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"ALUop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+82,0,"Overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"CarryOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"temp_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+85,0,"unsigned_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+87,0,"unsigned_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+89,0,"unsigend_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("shifter_ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"Shiftop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+67,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"A_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"result_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"result_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"result_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ID_EX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+11,0,"IF_to_ID_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+27,0,"EX_to_ID_bypath_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+32,0,"MEM_to_ID_bypath_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+34,0,"WB_to_ID_bypath_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declArray(c+13,0,"ID_to_EX_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declQuad(c+1,0,"predictor_to_IF_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+0,0,"prediction_incorrect",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"ID_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"ID_to_EX_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"IF_to_ID_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"EX_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"a0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+94,0,"IF_to_ID_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+96,0,"PC_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"Instruction_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+99,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+100,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+102,0,"func",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+103,0,"func_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+104,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+105,0,"U_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"I_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"S_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"B_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"J_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"RF_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+256,0,"RF_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"rdata1_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"rdata2_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"ALUop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+116,0,"Shiftop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+117,0,"Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"AluShi_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"Branch_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"ALUop_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"ALUop_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"Shiftop_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"Shiftop_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+100,0,"raddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"raddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+123,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"ebreak_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"ID_work",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"ID_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"EX_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"EX_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"EX_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"EX_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+128,0,"EX_related",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"MEM_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"MEM_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"MEM_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+132,0,"MEM_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+133,0,"MEM_related",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"WB_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"WB_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"WB_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+137,0,"RF_wen_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"Jump_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"PC_Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"PC_Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"prediction_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,0,"prediction_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"predictor_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"prediction_yes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("prediction_ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"is_Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"predictor_update",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"prediction_incorrect",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"prediction_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"predictor_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+251,0,"predictor_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+257,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+258,0,"S_TAKE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+259,0,"W_TAKE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+260,0,"W_NTAKE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+261,0,"S_NTAKE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file_ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+100,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+134,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"a0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+146+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("IF_EX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"Instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+219,0,"Inst_Valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"Inst_Ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"Inst_Req_Valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"Inst_Req_Ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+11,0,"IF_to_ID_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+0,0,"prediction_incorrect",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"predictor_to_IF_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+3,0,"PC_correct",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"IF_to_ID_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"ID_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+258,0,"IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+259,0,"IW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+260,0,"INS_GO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+261,0,"INS_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+179,0,"IF_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+252,0,"IF_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+180,0,"Instruction_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"prediction_yes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"prediction_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"PC_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+182,0,"IF_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("MEM_EX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"Address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"Write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"Write_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+225,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"Mem_Req_Ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"Read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+228,0,"Read_data_Valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"Read_data_Ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+21,0,"EX_to_MEM_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 182,0);
    tracep->declArray(c+29,0,"MEM_to_WB_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declQuad(c+32,0,"MEM_to_ID_bypath_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBit(c+9,0,"MEM_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"MEM_to_WB_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"EX_to_MEM_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"WB_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+183,0,"EX_to_MEM_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 182,0);
    tracep->declBus(c+189,0,"Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"U_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+192,0,"PC_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+194,0,"func",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+129,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"RF_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"RF_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+197,0,"ebreak_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+258,0,"SL_BEFORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+259,0,"SL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+260,0,"RDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+261,0,"SL_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+198,0,"MEM_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+253,0,"MEM_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+199,0,"MEM_work",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"MEM_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"Read_data_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"read_byte_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+203,0,"read_byte_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+204,0,"read_byte_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+205,0,"read_byte_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"RF_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WB_EX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+29,0,"MEM_to_WB_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declQuad(c+34,0,"WB_to_ID_bypath_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+10,0,"MEM_to_WB_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"WB_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+247,0,"inst_retired",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declArray(c+206,0,"MEM_to_WB_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declBit(c+134,0,"RF_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"PC_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"RF_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"RF_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+210,0,"ebreak_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"WB_work",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"WB_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"inst_retire_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"inst_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcustom_cpu___024root__trace_init_top(Vcustom_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root__trace_init_top\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcustom_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcustom_cpu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcustom_cpu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcustom_cpu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcustom_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcustom_cpu___024root__trace_register(Vcustom_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root__trace_register\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcustom_cpu___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vcustom_cpu___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vcustom_cpu___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vcustom_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcustom_cpu___024root__trace_const_0_sub_0(Vcustom_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcustom_cpu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root__trace_const_0\n"); );
    // Body
    Vcustom_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcustom_cpu___024root*>(voidSelf);
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcustom_cpu___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcustom_cpu___024root__trace_const_0_sub_0(Vcustom_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root__trace_const_0_sub_0\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+254,(1U));
    bufp->fullBit(oldp+255,(vlSelfRef.custom_cpu__DOT__inst_Req_Valid));
    bufp->fullIData(oldp+256,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__RF_wdata),32);
    bufp->fullCData(oldp+257,(1U),5);
    bufp->fullCData(oldp+258,(2U),5);
    bufp->fullCData(oldp+259,(4U),5);
    bufp->fullCData(oldp+260,(8U),5);
    bufp->fullCData(oldp+261,(0x10U),5);
}

VL_ATTR_COLD void Vcustom_cpu___024root__trace_full_0_sub_0(Vcustom_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcustom_cpu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root__trace_full_0\n"); );
    // Body
    Vcustom_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcustom_cpu___024root*>(voidSelf);
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcustom_cpu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcustom_cpu___024root__trace_full_0_sub_0(Vcustom_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcustom_cpu___024root__trace_full_0_sub_0\n"); );
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect));
    bufp->fullQData(oldp+1,((((QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_yes)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_addr)))),33);
    bufp->fullIData(oldp+3,(((1U & ((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Branch_real) 
                                    | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                       >> 0x0000000cU)))
                              ? ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                  << 8U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                            >> 0x00000018U))
                              : ((IData)(4U) + ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                                 << 7U) 
                                                | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                                   >> 0x00000019U))))),32);
    bufp->fullBit(oldp+4,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_valid));
    bufp->fullBit(oldp+5,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_ready));
    bufp->fullBit(oldp+6,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_valid));
    bufp->fullBit(oldp+7,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_ready));
    bufp->fullBit(oldp+8,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_work));
    bufp->fullBit(oldp+9,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__MEM_ready));
    bufp->fullBit(oldp+10,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_to_WB_valid));
    bufp->fullQData(oldp+11,((((QData)((IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__PC_reg)) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__Instruction_reg)))),64);
    bufp->fullWData(oldp+13,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data),256);
    bufp->fullWData(oldp+21,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_to_MEM_data),183);
    bufp->fullQData(oldp+27,((((QData)((IData)((1U 
                                                & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                   >> 7U)))) 
                               << 0x00000026U) | (((QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write)) 
                                                   << 0x00000025U) 
                                                  | (((QData)((IData)(
                                                                      (0x0000001fU 
                                                                       & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U]))) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)))))),39);
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x0000001fU 
                                               & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U]))) 
                              << 0x00000021U) | (((QData)((IData)(
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
                     | (IData)(((((QData)((IData)((0x0000001fU 
                                                   & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U]))) 
                                  << 0x00000021U) | 
                                 (((QData)((IData)(
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
    bufp->fullWData(oldp+29,(__Vtemp_2),71);
    bufp->fullQData(oldp+32,((((QData)((IData)((1U 
                                                & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                                   >> 0x0000000bU)))) 
                               << 0x00000026U) | (((QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write)) 
                                                   << 0x00000025U) 
                                                  | (((QData)((IData)(
                                                                      (0x0000001fU 
                                                                       & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U]))) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_data)))))),39);
    bufp->fullQData(oldp+34,((((QData)((IData)((1U 
                                                & vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U]))) 
                               << 0x00000025U) | (((QData)((IData)(
                                                                   (0x0000001fU 
                                                                    & (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                                                       >> 1U)))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U]))))),38);
    bufp->fullCData(oldp+36,((0x0000001fU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                             >> 0x00000019U))),5);
    bufp->fullIData(oldp+37,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                               << 2U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                                         >> 0x0000001eU))),32);
    bufp->fullCData(oldp+38,((7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                    >> 0x00000015U))),3);
    bufp->fullIData(oldp+39,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                               << 0x0000000bU) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                  >> 0x00000015U))),32);
    bufp->fullIData(oldp+40,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                               << 0x0000000bU) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                  >> 0x00000015U))),32);
    bufp->fullCData(oldp+41,((3U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                    >> 0x00000013U))),2);
    bufp->fullIData(oldp+42,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                               << 0x0000000dU) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                  >> 0x00000013U))),32);
    bufp->fullCData(oldp+43,((0x0000001fU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                             >> 0x0000000eU))),5);
    bufp->fullIData(oldp+44,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[6U] 
                               << 7U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                         >> 0x00000019U))),32);
    bufp->fullCData(oldp+45,((7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                    >> 8U))),3);
    bufp->fullBit(oldp+46,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                                  >> 0x00000018U))));
    bufp->fullIData(oldp+47,(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[5U] 
                               << 8U) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                         >> 0x00000018U))),32);
    bufp->fullBit(oldp+48,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                  >> 0x0000000dU))));
    bufp->fullBit(oldp+49,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                                  >> 0x0000001eU))));
    bufp->fullBit(oldp+50,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                  >> 0x0000000cU))));
    bufp->fullBit(oldp+51,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                  >> 0x0000000bU))));
    bufp->fullBit(oldp+52,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                  >> 7U))));
    bufp->fullBit(oldp+53,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                  >> 6U))));
    bufp->fullBit(oldp+54,((1U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                  >> 5U))));
    bufp->fullCData(oldp+55,((0x0000001fU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U])),5);
    bufp->fullIData(oldp+56,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U]),32);
    bufp->fullBit(oldp+57,((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                            >> 0x0000001fU)));
    bufp->fullWData(oldp+58,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg),256);
    bufp->fullIData(oldp+66,((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)),32);
    bufp->fullIData(oldp+67,(((0U == (3U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                            >> 0x00000013U)))
                               ? (((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                    << 0x0000000dU) 
                                   | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                      >> 0x00000013U)) 
                                  << (0x0000001fU & 
                                      (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
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
                                   : ((3U == (3U & 
                                              (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
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
    bufp->fullBit(oldp+68,((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))));
    bufp->fullBit(oldp+69,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Branch_real));
    bufp->fullIData(oldp+70,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result),32);
    bufp->fullBit(oldp+71,((1U & ((0U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                >> 8U)))
                                   ? (0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                                   : ((1U == (7U & 
                                              (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                               >> 8U)))
                                       ? (~ (0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))
                                       : (((4U == (7U 
                                                   & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                      >> 8U))) 
                                           | (6U == 
                                              (7U & 
                                               (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                >> 8U))))
                                           ? (~ (0U 
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
                                               ? (0U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                                               : 0U)))))));
    bufp->fullQData(oldp+72,(((- (QData)((IData)((1U 
                                                  & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[7U] 
                                                     >> 0x0000001eU))))) 
                              & ((QData)((IData)(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                   << 0x0000000bU) 
                                                  | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                     >> 0x00000015U)))) 
                                 * (QData)((IData)(
                                                   ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                     << 0x0000000bU) 
                                                    | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                       >> 0x00000015U))))))),64);
    bufp->fullBit(oldp+74,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__block_cancel));
    bufp->fullIData(oldp+75,((0xfffffffcU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)),32);
    bufp->fullCData(oldp+76,((3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result)),2);
    bufp->fullCData(oldp+77,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Write_strb),4);
    bufp->fullIData(oldp+78,(((0U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                            >> 8U)))
                               ? ((0U == (3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                   ? (0x000000ffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])
                                   : ((1U == (3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                       ? (0x0000ff00U 
                                          & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                                             << 8U))
                                       : ((2U == (3U 
                                                  & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                           ? (0x00ff0000U 
                                              & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                                                 << 0x00000010U))
                                           : VL_SHIFTL_III(32,32,32, vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U], 0x00000018U))))
                               : ((1U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                >> 8U)))
                                   ? ((0U == (3U & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__Result))
                                       ? (0x0000ffffU 
                                          & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])
                                       : VL_SHIFTL_III(32,32,32, vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U], 0x00000010U))
                                   : vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U]))),32);
    bufp->fullCData(oldp+79,((0x000000ffU & vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U])),8);
    bufp->fullCData(oldp+80,((0x000000ffU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[0U] 
                                             >> 8U))),8);
    bufp->fullBit(oldp+81,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write));
    bufp->fullBit(oldp+82,((1U & ((2U == (7U & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                >> 0x00000015U)))
                                   ? (1U & (((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                              >> 0x00000014U) 
                                             & ((~ (IData)(
                                                           (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                                            >> 0x0000001fU))) 
                                                & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                   >> 0x00000014U))) 
                                            | ((~ (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                   >> 0x00000014U)) 
                                               & ((~ 
                                                   (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                    >> 0x00000014U)) 
                                                  & (IData)(
                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                                             >> 0x0000001fU))))))
                                   : ((6U == (7U & 
                                              (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                               >> 0x00000015U)))
                                       ? (1U & (((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
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
    bufp->fullBit(oldp+83,((1U & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                          >> 0x00000020U)))));
    bufp->fullIData(oldp+84,(((IData)(1U) + ((~ ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                  << 0x0000000bU) 
                                                 | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                    >> 0x00000015U))) 
                                             + ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                                 << 0x0000000bU) 
                                                | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                   >> 0x00000015U))))),32);
    bufp->fullQData(oldp+85,((QData)((IData)(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[4U] 
                                               << 0x0000000bU) 
                                              | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                                 >> 0x00000015U))))),33);
    bufp->fullQData(oldp+87,((QData)((IData)(((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[3U] 
                                               << 0x0000000bU) 
                                              | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                                 >> 0x00000015U))))),33);
    bufp->fullQData(oldp+89,(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__alu_ex__DOT__unsigend_sub),33);
    bufp->fullIData(oldp+91,((((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                << 0x0000000dU) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                   >> 0x00000013U)) 
                              << (0x0000001fU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                 >> 0x0000000eU)))),32);
    bufp->fullIData(oldp+92,((((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                << 0x0000000dU) | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                   >> 0x00000013U)) 
                              >> (0x0000001fU & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                 >> 0x0000000eU)))),32);
    bufp->fullIData(oldp+93,(VL_SHIFTRS_III(32,32,5, 
                                            ((vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[2U] 
                                              << 0x0000000dU) 
                                             | (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                >> 0x00000013U)), 
                                            (0x0000001fU 
                                             & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                                >> 0x0000000eU)))),32);
    bufp->fullQData(oldp+94,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg),64);
    bufp->fullIData(oldp+96,((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                      >> 0x00000020U))),32);
    bufp->fullIData(oldp+97,((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg)),32);
    bufp->fullCData(oldp+98,((0x0000001fU & (IData)(
                                                    (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                     >> 2U)))),5);
    bufp->fullCData(oldp+99,((0x0000001fU & (IData)(
                                                    (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                     >> 7U)))),5);
    bufp->fullCData(oldp+100,((0x0000001fU & (IData)(
                                                     (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                      >> 0x0000000fU)))),5);
    bufp->fullCData(oldp+101,((0x0000001fU & (IData)(
                                                     (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                      >> 0x00000014U)))),5);
    bufp->fullCData(oldp+102,((7U & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                             >> 0x0000000cU)))),3);
    bufp->fullCData(oldp+103,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__func_r),4);
    bufp->fullCData(oldp+104,((0x0000007fU & (IData)(
                                                     (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                      >> 0x00000019U)))),7);
    bufp->fullIData(oldp+105,(((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                        >> 0x0000000cU)) 
                               << 0x0000000cU)),32);
    bufp->fullIData(oldp+106,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__I_imm),32);
    bufp->fullIData(oldp+107,((((- (IData)((1U & (IData)(
                                                         (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                          >> 0x0000001fU))))) 
                                << 0x0000000cU) | (
                                                   (0x00000fe0U 
                                                    & ((IData)(
                                                               (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                >> 0x00000019U)) 
                                                       << 5U)) 
                                                   | (0x0000001fU 
                                                      & (IData)(
                                                                (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                                 >> 7U)))))),32);
    bufp->fullIData(oldp+108,((((- (IData)((1U & (IData)(
                                                         (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                          >> 0x0000001fU))))) 
                                << 0x0000000cU) | (
                                                   (0x00000800U 
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
                                                            << 1U)))))),32);
    bufp->fullIData(oldp+109,((((- (IData)((1U & (IData)(
                                                         (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                          >> 0x0000001fU))))) 
                                << 0x00000014U) | (
                                                   (((0x000001feU 
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
                                                         << 1U))))),32);
    bufp->fullIData(oldp+110,(((0U == (0x0000001fU 
                                       & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                  >> 0x0000000fU))))
                                ? 0U : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile
                               [(0x0000001fU & (IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 0x0000000fU)))])),32);
    bufp->fullIData(oldp+111,(((0U == (0x0000001fU 
                                       & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                  >> 0x00000014U))))
                                ? 0U : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile
                               [(0x0000001fU & (IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 0x00000014U)))])),32);
    bufp->fullIData(oldp+112,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true),32);
    bufp->fullIData(oldp+113,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata2_true),32);
    bufp->fullBit(oldp+114,((0x18U == (0x0000001fU 
                                       & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                  >> 2U))))));
    bufp->fullCData(oldp+115,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ALUop),3);
    bufp->fullCData(oldp+116,(((1U == (7U & (IData)(
                                                    (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                     >> 0x0000000cU))))
                                ? 0U : ((5U == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__func_r))
                                         ? 2U : ((0x0dU 
                                                  == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__func_r))
                                                  ? 3U
                                                  : 1U)))),2);
    bufp->fullBit(oldp+117,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__Jump));
    bufp->fullBit(oldp+118,(((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_10) 
                             & ((5U == (7U & (IData)(
                                                     (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                      >> 0x0000000cU)))) 
                                | (1U == (7U & (IData)(
                                                       (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                        >> 0x0000000cU))))))));
    bufp->fullBit(oldp+119,((0U == (0x0000001fU & (IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 2U))))));
    bufp->fullBit(oldp+120,((8U == (0x0000001fU & (IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 2U))))));
    bufp->fullIData(oldp+121,((((4U == (0x0000001fU 
                                        & (IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
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
    bufp->fullCData(oldp+122,((0x0000001fU & ((4U == 
                                               (0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                           >> 2U))))
                                               ? (IData)(
                                                         (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                          >> 0x00000014U))
                                               : vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata2_true))),5);
    bufp->fullBit(oldp+123,((IData)((0x0000000002000030ULL 
                                     == (0x00000000fe00707cULL 
                                         & vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg)))));
    bufp->fullBit(oldp+124,((0x00100073U == (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg))));
    bufp->fullBit(oldp+125,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_work));
    bufp->fullBit(oldp+126,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__ID_done));
    bufp->fullBit(oldp+127,(((((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write) 
                               & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_3) 
                                  | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_4))) 
                              & (vlSelfRef.custom_cpu__DOT__EX_EX__DOT__ID_to_EX_data_reg[1U] 
                                 >> 7U)) | ((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                             >> 0x0000000bU) 
                                            & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write) 
                                               & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_5) 
                                                  | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_6)))))));
    bufp->fullBit(oldp+128,(((IData)(vlSelfRef.custom_cpu__DOT__EX_EX__DOT__EX_write) 
                             & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_3) 
                                | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_4)))));
    bufp->fullBit(oldp+129,((1U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+130,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write));
    bufp->fullCData(oldp+131,((0x0000001fU & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U])),5);
    bufp->fullIData(oldp+132,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_data),32);
    bufp->fullBit(oldp+133,(((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__MEM_write) 
                             & ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_5) 
                                | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_6)))));
    bufp->fullBit(oldp+134,((1U & vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U])));
    bufp->fullIData(oldp+135,(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[0U]),32);
    bufp->fullCData(oldp+136,((0x0000001fU & (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                              >> 1U))),5);
    bufp->fullBit(oldp+137,(((5U == (0x0000001fU & (IData)(
                                                           (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                            >> 2U)))) 
                             | ((IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__Jump) 
                                | ((0U == (0x0000001fU 
                                           & (IData)(
                                                     (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                      >> 2U)))) 
                                   | ((0x0dU == (0x0000001fU 
                                                 & (IData)(
                                                           (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                            >> 2U)))) 
                                      | (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT____VdfgRegularize_h98a0652e_0_10)))))));
    bufp->fullIData(oldp+138,((0xfffffffeU & (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true 
                                              + vlSelfRef.custom_cpu__DOT__ID_EX__DOT__I_imm))),32);
    bufp->fullIData(oldp+139,(((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                        >> 0x00000020U)) 
                               + (((- (IData)((1U & (IData)(
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
                                              << 1U))))))),32);
    bufp->fullIData(oldp+140,(((0x1bU == (0x0000001fU 
                                          & (IData)(
                                                    (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                                     >> 2U))))
                                ? ((IData)((vlSelfRef.custom_cpu__DOT__ID_EX__DOT__IF_to_ID_data_reg 
                                            >> 0x00000020U)) 
                                   + (((- (IData)((1U 
                                                   & (IData)(
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
                                               << 1U)))))
                                : (0xfffffffeU & (vlSelfRef.custom_cpu__DOT__ID_EX__DOT__rdata1_true 
                                                  + vlSelfRef.custom_cpu__DOT__ID_EX__DOT__I_imm)))),32);
    bufp->fullIData(oldp+141,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_addr),32);
    bufp->fullBit(oldp+142,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_out));
    bufp->fullBit(oldp+143,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__predictor_update));
    bufp->fullBit(oldp+144,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_yes));
    bufp->fullCData(oldp+145,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_current_state),5);
    bufp->fullIData(oldp+146,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[0]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[1]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[2]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[3]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[4]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[5]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[6]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[7]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[8]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[9]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[10]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[11]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[12]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[13]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[14]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[15]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[16]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[17]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[18]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[19]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[20]),32);
    bufp->fullIData(oldp+167,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[21]),32);
    bufp->fullIData(oldp+168,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[22]),32);
    bufp->fullIData(oldp+169,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[23]),32);
    bufp->fullIData(oldp+170,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[24]),32);
    bufp->fullIData(oldp+171,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[25]),32);
    bufp->fullIData(oldp+172,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[26]),32);
    bufp->fullIData(oldp+173,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[27]),32);
    bufp->fullIData(oldp+174,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[28]),32);
    bufp->fullIData(oldp+175,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[29]),32);
    bufp->fullIData(oldp+176,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[30]),32);
    bufp->fullIData(oldp+177,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__regfile[31]),32);
    bufp->fullIData(oldp+178,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__reg_file_ex__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+179,(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state),5);
    bufp->fullIData(oldp+180,(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__Instruction_reg),32);
    bufp->fullIData(oldp+181,(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__PC_reg),32);
    bufp->fullBit(oldp+182,(((~ (IData)(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__prediction_incorrect)) 
                             & (0x10U == (IData)(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_current_state)))));
    bufp->fullWData(oldp+183,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg),183);
    bufp->fullIData(oldp+189,(((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] 
                                << 0x0000000aU) | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                                                   >> 0x00000016U))),32);
    bufp->fullIData(oldp+190,(((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                                << 0x0000000dU) | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                                   >> 0x00000013U))),32);
    bufp->fullCData(oldp+191,((0x0000001fU & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                              >> 0x0000000eU))),5);
    bufp->fullIData(oldp+192,(((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                << 0x00000014U) | (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[2U] 
                                                   >> 0x0000000cU))),32);
    bufp->fullCData(oldp+193,((3U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[3U] 
                                     >> 0x0000000cU))),2);
    bufp->fullCData(oldp+194,((7U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[4U] 
                                     >> 0x00000013U))),3);
    bufp->fullBit(oldp+195,((1U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[1U] 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+196,((1U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+197,((1U & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__EX_to_MEM_data_reg[5U] 
                                   >> 0x00000016U))));
    bufp->fullCData(oldp+198,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state),5);
    bufp->fullBit(oldp+199,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_work));
    bufp->fullBit(oldp+200,((0x10U == (IData)(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_current_state))));
    bufp->fullIData(oldp+201,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current),32);
    bufp->fullCData(oldp+202,((vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                               >> 0x00000018U)),8);
    bufp->fullCData(oldp+203,((0x000000ffU & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                              >> 0x00000010U))),8);
    bufp->fullCData(oldp+204,((0x000000ffU & (vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current 
                                              >> 8U))),8);
    bufp->fullCData(oldp+205,((0x000000ffU & vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__Read_data_current)),8);
    bufp->fullWData(oldp+206,(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg),71);
    bufp->fullIData(oldp+209,(((vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[2U] 
                                << 0x0000001aU) | (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                                                   >> 6U))),32);
    bufp->fullBit(oldp+210,((1U & (vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[2U] 
                                   >> 6U))));
    bufp->fullBit(oldp+211,(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__WB_work));
    bufp->fullBit(oldp+212,((vlSelfRef.custom_cpu__DOT__WB_EX__DOT__MEM_to_WB_data_reg[1U] 
                             & (IData)(vlSelfRef.custom_cpu__DOT__WB_EX__DOT__WB_work))));
    bufp->fullBit(oldp+213,(vlSelfRef.clk));
    bufp->fullBit(oldp+214,(vlSelfRef.rst));
    bufp->fullIData(oldp+215,(vlSelfRef.PC),32);
    bufp->fullBit(oldp+216,(vlSelfRef.Inst_Req_Valid));
    bufp->fullBit(oldp+217,(vlSelfRef.Inst_Req_Ready));
    bufp->fullIData(oldp+218,(vlSelfRef.Instruction),32);
    bufp->fullBit(oldp+219,(vlSelfRef.Inst_Valid));
    bufp->fullBit(oldp+220,(vlSelfRef.Inst_Ready));
    bufp->fullIData(oldp+221,(vlSelfRef.Address),32);
    bufp->fullBit(oldp+222,(vlSelfRef.MemWrite));
    bufp->fullIData(oldp+223,(vlSelfRef.Write_data),32);
    bufp->fullCData(oldp+224,(vlSelfRef.Write_strb),4);
    bufp->fullBit(oldp+225,(vlSelfRef.MemRead));
    bufp->fullBit(oldp+226,(vlSelfRef.Mem_Req_Ready));
    bufp->fullIData(oldp+227,(vlSelfRef.Read_data),32);
    bufp->fullBit(oldp+228,(vlSelfRef.Read_data_Valid));
    bufp->fullBit(oldp+229,(vlSelfRef.Read_data_Ready));
    bufp->fullBit(oldp+230,(vlSelfRef.intr));
    bufp->fullIData(oldp+231,(vlSelfRef.cpu_perf_cnt_0),32);
    bufp->fullIData(oldp+232,(vlSelfRef.cpu_perf_cnt_1),32);
    bufp->fullIData(oldp+233,(vlSelfRef.cpu_perf_cnt_2),32);
    bufp->fullIData(oldp+234,(vlSelfRef.cpu_perf_cnt_3),32);
    bufp->fullIData(oldp+235,(vlSelfRef.cpu_perf_cnt_4),32);
    bufp->fullIData(oldp+236,(vlSelfRef.cpu_perf_cnt_5),32);
    bufp->fullIData(oldp+237,(vlSelfRef.cpu_perf_cnt_6),32);
    bufp->fullIData(oldp+238,(vlSelfRef.cpu_perf_cnt_7),32);
    bufp->fullIData(oldp+239,(vlSelfRef.cpu_perf_cnt_8),32);
    bufp->fullIData(oldp+240,(vlSelfRef.cpu_perf_cnt_9),32);
    bufp->fullIData(oldp+241,(vlSelfRef.cpu_perf_cnt_10),32);
    bufp->fullIData(oldp+242,(vlSelfRef.cpu_perf_cnt_11),32);
    bufp->fullIData(oldp+243,(vlSelfRef.cpu_perf_cnt_12),32);
    bufp->fullIData(oldp+244,(vlSelfRef.cpu_perf_cnt_13),32);
    bufp->fullIData(oldp+245,(vlSelfRef.cpu_perf_cnt_14),32);
    bufp->fullIData(oldp+246,(vlSelfRef.cpu_perf_cnt_15),32);
    bufp->fullWData(oldp+247,(vlSelfRef.inst_retire),70);
    bufp->fullIData(oldp+250,(vlSelfRef.a0_out),32);
    bufp->fullCData(oldp+251,(vlSelfRef.custom_cpu__DOT__ID_EX__DOT__prediction_ex__DOT__predictor_next_state),5);
    bufp->fullCData(oldp+252,(vlSelfRef.custom_cpu__DOT__IF_EX__DOT__IF_next_state),5);
    bufp->fullCData(oldp+253,(vlSelfRef.custom_cpu__DOT__MEM_EX__DOT__MEM_next_state),5);
}
