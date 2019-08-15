// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhdmi_driver__Syms.h"


//======================

void Vhdmi_driver::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vhdmi_driver* t=(Vhdmi_driver*)userthis;
    Vhdmi_driver__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vhdmi_driver::traceChgThis(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity 
					      >> 3U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vhdmi_driver::traceChgThis__2(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__address)
			    ? 0x72U : (IData)(vlTOPp->hdmi_driver__DOT__data))),8);
    }
}

void Vhdmi_driver::traceChgThis__3(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+2,(vlTOPp->hdmi_driver__DOT__data),8);
    }
}

void Vhdmi_driver::traceChgThis__4(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+3,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__next_state),5);
    }
}

void Vhdmi_driver::traceChgThis__5(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+4,(vlTOPp->hdmi_driver__DOT__clk_divide),10);
	vcdp->chgBit(c+5,(vlTOPp->hdmi_driver__DOT__clk_50k));
	vcdp->chgBus(c+6,(vlTOPp->hdmi_driver__DOT__mI2C_CLK_DIV),16);
	vcdp->chgBit(c+7,(vlTOPp->hdmi_driver__DOT__mI2C_CTRL_CLK));
    }
}

void Vhdmi_driver::traceChgThis__6(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+8,(vlTOPp->hdmi_driver__DOT__done));
	vcdp->chgBit(c+9,(vlTOPp->hdmi_driver__DOT__sda__out__out0));
	vcdp->chgBus(c+10,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__counter),4);
	vcdp->chgBus(c+11,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state),5);
	vcdp->chgBit(c+12,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__ack));
	vcdp->chgBus(c+13,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__byte_num_local),3);
	vcdp->chgBit(c+14,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__address));
    }
}

void Vhdmi_driver::traceChgThis__7(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+15,(vlTOPp->hdmi_driver__DOT__byte_lut),8);
	vcdp->chgBit(c+16,((1U & ((0x19U <= (IData)(vlTOPp->hdmi_driver__DOT__byte_lut))
				   ? 0U : 1U))));
    }
}

void Vhdmi_driver::traceChgThis__8(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+17,(vlTOPp->hdmi_driver__DOT__byte_lut_next),8);
    }
}

void Vhdmi_driver::traceChgThis__9(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+18,(vlTOPp->clk_50));
	vcdp->chgBit(c+19,(vlTOPp->reset_al));
	vcdp->chgBit(c+20,(vlTOPp->H_sync));
	vcdp->chgBit(c+21,(vlTOPp->V_sync));
	vcdp->chgBus(c+22,(vlTOPp->CountX),10);
	vcdp->chgBus(c+23,(vlTOPp->CountY),10);
	vcdp->chgBus(c+24,(vlTOPp->RED),8);
	vcdp->chgBus(c+25,(vlTOPp->GREEN),8);
	vcdp->chgBus(c+26,(vlTOPp->BLUE),8);
	vcdp->chgBit(c+27,(vlTOPp->Draw_enable));
	vcdp->chgBit(c+28,(vlTOPp->scl));
	vcdp->chgBit(c+29,(vlTOPp->sda));
	vcdp->chgBit(c+30,(vlTOPp->fail));
	vcdp->chgBit(c+31,(vlTOPp->rst));
	vcdp->chgBit(c+32,(vlTOPp->clk_25));
	vcdp->chgBit(c+33,(vlTOPp->HDMI_INT));
	vcdp->chgBit(c+34,((1U & (~ (IData)(vlTOPp->reset_al)))));
    }
}
