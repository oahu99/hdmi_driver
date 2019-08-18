// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vhdmi_driver_H_
#define _Vhdmi_driver_H_

#include "verilated.h"

class Vhdmi_driver__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vhdmi_driver) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(clk_50,0,0);
    VL_OUT8(clk_25,0,0);
    VL_OUT8(mI2C_CTRL_CLK,0,0);
    VL_IN8(reset_al,0,0);
    VL_OUT8(H_sync,0,0);
    VL_OUT8(V_sync,0,0);
    VL_OUT8(RED,7,0);
    VL_OUT8(GREEN,7,0);
    VL_OUT8(BLUE,7,0);
    VL_OUT8(Draw_enable,0,0);
    VL_OUT8(scl,0,0);
    VL_OUT8(sda,0,0);
    VL_OUT8(fail,0,0);
    VL_OUT8(rst,0,0);
    VL_IN8(HDMI_INT,0,0);
    VL_OUT16(CountX,9,0);
    VL_OUT16(CountY,9,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(hdmi_driver__DOT__done,0,0);
    VL_SIG8(hdmi_driver__DOT__data,7,0);
    VL_SIG8(hdmi_driver__DOT__byte_lut,7,0);
    VL_SIG8(hdmi_driver__DOT__byte_lut_next,7,0);
    VL_SIG8(hdmi_driver__DOT__clk_50k,0,0);
    VL_SIG8(hdmi_driver__DOT__I2C_0__DOT__counter,3,0);
    VL_SIG8(hdmi_driver__DOT__I2C_0__DOT__message,7,0);
    VL_SIG8(hdmi_driver__DOT__I2C_0__DOT__state,4,0);
    VL_SIG8(hdmi_driver__DOT__I2C_0__DOT__next_state,4,0);
    VL_SIG8(hdmi_driver__DOT__I2C_0__DOT__ack,0,0);
    VL_SIG8(hdmi_driver__DOT__I2C_0__DOT__byte_num_local,2,0);
    VL_SIG8(hdmi_driver__DOT__I2C_0__DOT__address,0,0);
    VL_SIG16(hdmi_driver__DOT__clk_divide,9,0);
    VL_SIG16(hdmi_driver__DOT__mI2C_CLK_DIV,15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtableidx1,7,0);
    VL_SIG8(__Vdly__hdmi_driver__DOT__byte_lut,7,0);
    VL_SIG8(__VinpClk__TOP__clk_25,0,0);
    VL_SIG8(__VinpClk__TOP__mI2C_CTRL_CLK,0,0);
    VL_SIG8(__VinpClk__TOP__hdmi_driver__DOT__done,0,0);
    VL_SIG8(__Vclklast__TOP__clk_50,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__clk_25,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__mI2C_CTRL_CLK,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__hdmi_driver__DOT__done,0,0);
    VL_SIG8(__Vchglast__TOP__clk_25,0,0);
    VL_SIG8(__Vchglast__TOP__mI2C_CTRL_CLK,0,0);
    VL_SIG8(__Vchglast__TOP__hdmi_driver__DOT__done,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    static VL_ST_SIG8(__Vtable1_hdmi_driver__DOT__data[256],7,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vhdmi_driver__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vhdmi_driver);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vhdmi_driver(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vhdmi_driver();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vhdmi_driver__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vhdmi_driver__Syms* symsp, bool first);
  private:
    static QData _change_request(Vhdmi_driver__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vhdmi_driver__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vhdmi_driver__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vhdmi_driver__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__7(Vhdmi_driver__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vhdmi_driver__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vhdmi_driver__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vhdmi_driver__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vhdmi_driver__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vhdmi_driver__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vhdmi_driver__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
