// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcustom_cpu__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcustom_cpu::Vcustom_cpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcustom_cpu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , Inst_Req_Valid{vlSymsp->TOP.Inst_Req_Valid}
    , Inst_Req_Ready{vlSymsp->TOP.Inst_Req_Ready}
    , Inst_Valid{vlSymsp->TOP.Inst_Valid}
    , Inst_Ready{vlSymsp->TOP.Inst_Ready}
    , MemWrite{vlSymsp->TOP.MemWrite}
    , Write_strb{vlSymsp->TOP.Write_strb}
    , MemRead{vlSymsp->TOP.MemRead}
    , Mem_Req_Ready{vlSymsp->TOP.Mem_Req_Ready}
    , Read_data_Valid{vlSymsp->TOP.Read_data_Valid}
    , Read_data_Ready{vlSymsp->TOP.Read_data_Ready}
    , intr{vlSymsp->TOP.intr}
    , PC{vlSymsp->TOP.PC}
    , Instruction{vlSymsp->TOP.Instruction}
    , Address{vlSymsp->TOP.Address}
    , Write_data{vlSymsp->TOP.Write_data}
    , Read_data{vlSymsp->TOP.Read_data}
    , cpu_perf_cnt_0{vlSymsp->TOP.cpu_perf_cnt_0}
    , cpu_perf_cnt_1{vlSymsp->TOP.cpu_perf_cnt_1}
    , cpu_perf_cnt_2{vlSymsp->TOP.cpu_perf_cnt_2}
    , cpu_perf_cnt_3{vlSymsp->TOP.cpu_perf_cnt_3}
    , cpu_perf_cnt_4{vlSymsp->TOP.cpu_perf_cnt_4}
    , cpu_perf_cnt_5{vlSymsp->TOP.cpu_perf_cnt_5}
    , cpu_perf_cnt_6{vlSymsp->TOP.cpu_perf_cnt_6}
    , cpu_perf_cnt_7{vlSymsp->TOP.cpu_perf_cnt_7}
    , cpu_perf_cnt_8{vlSymsp->TOP.cpu_perf_cnt_8}
    , cpu_perf_cnt_9{vlSymsp->TOP.cpu_perf_cnt_9}
    , cpu_perf_cnt_10{vlSymsp->TOP.cpu_perf_cnt_10}
    , cpu_perf_cnt_11{vlSymsp->TOP.cpu_perf_cnt_11}
    , cpu_perf_cnt_12{vlSymsp->TOP.cpu_perf_cnt_12}
    , cpu_perf_cnt_13{vlSymsp->TOP.cpu_perf_cnt_13}
    , cpu_perf_cnt_14{vlSymsp->TOP.cpu_perf_cnt_14}
    , cpu_perf_cnt_15{vlSymsp->TOP.cpu_perf_cnt_15}
    , inst_retire{vlSymsp->TOP.inst_retire}
    , a0_out{vlSymsp->TOP.a0_out}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcustom_cpu::Vcustom_cpu(const char* _vcname__)
    : Vcustom_cpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcustom_cpu::~Vcustom_cpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcustom_cpu___024root___eval_debug_assertions(Vcustom_cpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vcustom_cpu___024root___eval_static(Vcustom_cpu___024root* vlSelf);
void Vcustom_cpu___024root___eval_initial(Vcustom_cpu___024root* vlSelf);
void Vcustom_cpu___024root___eval_settle(Vcustom_cpu___024root* vlSelf);
void Vcustom_cpu___024root___eval(Vcustom_cpu___024root* vlSelf);

void Vcustom_cpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcustom_cpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcustom_cpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcustom_cpu___024root___eval_static(&(vlSymsp->TOP));
        Vcustom_cpu___024root___eval_initial(&(vlSymsp->TOP));
        Vcustom_cpu___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcustom_cpu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcustom_cpu::eventsPending() { return false; }

uint64_t Vcustom_cpu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcustom_cpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcustom_cpu___024root___eval_final(Vcustom_cpu___024root* vlSelf);

VL_ATTR_COLD void Vcustom_cpu::final() {
    Vcustom_cpu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcustom_cpu::hierName() const { return vlSymsp->name(); }
const char* Vcustom_cpu::modelName() const { return "Vcustom_cpu"; }
unsigned Vcustom_cpu::threads() const { return 1; }
void Vcustom_cpu::prepareClone() const { contextp()->prepareClone(); }
void Vcustom_cpu::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcustom_cpu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcustom_cpu___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcustom_cpu___024root__trace_init_top(Vcustom_cpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcustom_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcustom_cpu___024root*>(voidSelf);
    Vcustom_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vcustom_cpu___024root__trace_decl_types(tracep);
    Vcustom_cpu___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcustom_cpu___024root__trace_register(Vcustom_cpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcustom_cpu::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcustom_cpu::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 262);
    Vcustom_cpu___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
