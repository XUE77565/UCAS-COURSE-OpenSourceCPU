// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCUSTOM_CPU_H_
#define VERILATED_VCUSTOM_CPU_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vcustom_cpu__Syms;
class Vcustom_cpu___024root;
class VerilatedVcdC;
class Vcustom_cpu___024unit;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vcustom_cpu VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcustom_cpu__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&Inst_Req_Valid,0,0);
    VL_IN8(&Inst_Req_Ready,0,0);
    VL_IN8(&Inst_Valid,0,0);
    VL_OUT8(&Inst_Ready,0,0);
    VL_OUT8(&MemWrite,0,0);
    VL_OUT8(&Write_strb,3,0);
    VL_OUT8(&MemRead,0,0);
    VL_IN8(&Mem_Req_Ready,0,0);
    VL_IN8(&Read_data_Valid,0,0);
    VL_OUT8(&Read_data_Ready,0,0);
    VL_IN8(&intr,0,0);
    VL_OUT(&PC,31,0);
    VL_IN(&Instruction,31,0);
    VL_OUT(&Address,31,0);
    VL_OUT(&Write_data,31,0);
    VL_IN(&Read_data,31,0);
    VL_OUT(&cpu_perf_cnt_0,31,0);
    VL_OUT(&cpu_perf_cnt_1,31,0);
    VL_OUT(&cpu_perf_cnt_2,31,0);
    VL_OUT(&cpu_perf_cnt_3,31,0);
    VL_OUT(&cpu_perf_cnt_4,31,0);
    VL_OUT(&cpu_perf_cnt_5,31,0);
    VL_OUT(&cpu_perf_cnt_6,31,0);
    VL_OUT(&cpu_perf_cnt_7,31,0);
    VL_OUT(&cpu_perf_cnt_8,31,0);
    VL_OUT(&cpu_perf_cnt_9,31,0);
    VL_OUT(&cpu_perf_cnt_10,31,0);
    VL_OUT(&cpu_perf_cnt_11,31,0);
    VL_OUT(&cpu_perf_cnt_12,31,0);
    VL_OUT(&cpu_perf_cnt_13,31,0);
    VL_OUT(&cpu_perf_cnt_14,31,0);
    VL_OUT(&cpu_perf_cnt_15,31,0);
    VL_OUTW(&inst_retire,69,0,3);
    VL_OUT(&a0_out,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vcustom_cpu___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcustom_cpu___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcustom_cpu(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcustom_cpu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcustom_cpu();
  private:
    VL_UNCOPYABLE(Vcustom_cpu);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
