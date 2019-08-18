// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhdmi_driver__Syms.h"


//======================

void Vhdmi_driver::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vhdmi_driver::traceInit, &Vhdmi_driver::traceFull, &Vhdmi_driver::traceChg, this);
}
void Vhdmi_driver::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vhdmi_driver* t=(Vhdmi_driver*)userthis;
    Vhdmi_driver__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vhdmi_driver::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vhdmi_driver* t=(Vhdmi_driver*)userthis;
    Vhdmi_driver__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vhdmi_driver::traceInitThis(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vhdmi_driver::traceFullThis(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vhdmi_driver::traceInitThis__1(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+15,"clk_50",-1);
	vcdp->declBit(c+16,"reset_al",-1);
	vcdp->declBit(c+17,"H_sync",-1);
	vcdp->declBit(c+18,"V_sync",-1);
	vcdp->declBus(c+19,"CountX",-1,9,0);
	vcdp->declBus(c+20,"CountY",-1,9,0);
	vcdp->declBus(c+21,"RED",-1,7,0);
	vcdp->declBus(c+22,"GREEN",-1,7,0);
	vcdp->declBus(c+23,"BLUE",-1,7,0);
	vcdp->declBit(c+24,"Draw_enable",-1);
	vcdp->declBit(c+25,"scl",-1);
	vcdp->declBit(c+26,"sda",-1);
	vcdp->declBit(c+27,"fail",-1);
	vcdp->declBit(c+28,"rst",-1);
	vcdp->declBit(c+29,"clk_25",-1);
	vcdp->declBit(c+30,"HDMI_INT",-1);
	vcdp->declBit(c+31,"mI2C_CTRL_CLK",-1);
	vcdp->declBit(c+15,"hdmi_driver clk_50",-1);
	vcdp->declBit(c+16,"hdmi_driver reset_al",-1);
	vcdp->declBit(c+17,"hdmi_driver H_sync",-1);
	vcdp->declBit(c+18,"hdmi_driver V_sync",-1);
	vcdp->declBus(c+19,"hdmi_driver CountX",-1,9,0);
	vcdp->declBus(c+20,"hdmi_driver CountY",-1,9,0);
	vcdp->declBus(c+21,"hdmi_driver RED",-1,7,0);
	vcdp->declBus(c+22,"hdmi_driver GREEN",-1,7,0);
	vcdp->declBus(c+23,"hdmi_driver BLUE",-1,7,0);
	vcdp->declBit(c+24,"hdmi_driver Draw_enable",-1);
	vcdp->declBit(c+25,"hdmi_driver scl",-1);
	vcdp->declBit(c+26,"hdmi_driver sda",-1);
	vcdp->declBit(c+27,"hdmi_driver fail",-1);
	vcdp->declBit(c+28,"hdmi_driver rst",-1);
	vcdp->declBit(c+29,"hdmi_driver clk_25",-1);
	vcdp->declBit(c+30,"hdmi_driver HDMI_INT",-1);
	vcdp->declBit(c+31,"hdmi_driver mI2C_CTRL_CLK",-1);
	vcdp->declBus(c+33,"hdmi_driver slave_address",-1,6,0);
	vcdp->declBus(c+3,"hdmi_driver data",-1,7,0);
	vcdp->declBus(c+34,"hdmi_driver byte_num",-1,2,0);
	vcdp->declBus(c+14,"hdmi_driver byte_lut",-1,7,0);
	vcdp->declBus(c+13,"hdmi_driver byte_lut_next",-1,7,0);
	vcdp->declBus(c+4,"hdmi_driver clk_divide",-1,9,0);
	vcdp->declBit(c+35,"hdmi_driver read_write",-1);
	vcdp->declBit(c+36,"hdmi_driver start",-1);
	vcdp->declBit(c+5,"hdmi_driver clk_50k",-1);
	vcdp->declBit(c+32,"hdmi_driver reset",-1);
	vcdp->declBit(c+7,"hdmi_driver done",-1);
	vcdp->declBus(c+6,"hdmi_driver mI2C_CLK_DIV",-1,15,0);
	vcdp->declBus(c+37,"hdmi_driver CLK_Freq",-1,31,0);
	vcdp->declBus(c+38,"hdmi_driver I2C_Freq",-1,31,0);
	vcdp->declBit(c+31,"hdmi_driver I2C_0 clk_50k",-1);
	vcdp->declBit(c+32,"hdmi_driver I2C_0 reset",-1);
	vcdp->declBit(c+36,"hdmi_driver I2C_0 start",-1);
	vcdp->declBit(c+26,"hdmi_driver I2C_0 sda",-1);
	vcdp->declBit(c+25,"hdmi_driver I2C_0 scl",-1);
	vcdp->declBus(c+33,"hdmi_driver I2C_0 slave_address",-1,6,0);
	vcdp->declBit(c+35,"hdmi_driver I2C_0 read_write",-1);
	vcdp->declBus(c+3,"hdmi_driver I2C_0 data",-1,7,0);
	vcdp->declBus(c+34,"hdmi_driver I2C_0 byte_num",-1,2,0);
	vcdp->declBit(c+7,"hdmi_driver I2C_0 done",-1);
	vcdp->declBit(c+27,"hdmi_driver I2C_0 fail",-1);
	vcdp->declBus(c+8,"hdmi_driver I2C_0 counter",-1,3,0);
	vcdp->declBus(c+2,"hdmi_driver I2C_0 message",-1,7,0);
	vcdp->declBus(c+9,"hdmi_driver I2C_0 state",-1,4,0);
	vcdp->declBus(c+1,"hdmi_driver I2C_0 next_state",-1,4,0);
	vcdp->declBit(c+10,"hdmi_driver I2C_0 ack",-1);
	vcdp->declBus(c+11,"hdmi_driver I2C_0 byte_num_local",-1,2,0);
	vcdp->declBit(c+12,"hdmi_driver I2C_0 address",-1);
	vcdp->declBus(c+39,"hdmi_driver I2C_0 IDLE",-1,31,0);
	vcdp->declBus(c+40,"hdmi_driver I2C_0 SEND_1",-1,31,0);
	vcdp->declBus(c+41,"hdmi_driver I2C_0 ACK_NACK_1",-1,31,0);
	vcdp->declBus(c+42,"hdmi_driver I2C_0 FAIL",-1,31,0);
	vcdp->declBus(c+43,"hdmi_driver I2C_0 START_1",-1,31,0);
	vcdp->declBus(c+44,"hdmi_driver I2C_0 START_2",-1,31,0);
	vcdp->declBus(c+45,"hdmi_driver I2C_0 STOP",-1,31,0);
	vcdp->declBus(c+46,"hdmi_driver I2C_0 SEND_2",-1,31,0);
	vcdp->declBus(c+47,"hdmi_driver I2C_0 SEND_3",-1,31,0);
	vcdp->declBus(c+48,"hdmi_driver I2C_0 DONE_1",-1,31,0);
	vcdp->declBus(c+49,"hdmi_driver I2C_0 DONE_2",-1,31,0);
	vcdp->declBus(c+50,"hdmi_driver I2C_0 ACK_NACK_2",-1,31,0);
	vcdp->declBus(c+51,"hdmi_driver I2C_0 ACK_NACK_3",-1,31,0);
	vcdp->declBus(c+52,"hdmi_driver I2C_0 STOP_2",-1,31,0);
	vcdp->declBus(c+53,"hdmi_driver I2C_0 DELAY",-1,31,0);
	vcdp->declBus(c+14,"hdmi_driver LUT0 byte_lut",-1,7,0);
	vcdp->declBus(c+3,"hdmi_driver LUT0 data_byte",-1,7,0);
    }
}

void Vhdmi_driver::traceFullThis__1(Vhdmi_driver__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__next_state),5);
	vcdp->fullBus(c+2,(((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__address)
			     ? 0x72U : (IData)(vlTOPp->hdmi_driver__DOT__data))),8);
	vcdp->fullBus(c+3,(vlTOPp->hdmi_driver__DOT__data),8);
	vcdp->fullBus(c+4,(vlTOPp->hdmi_driver__DOT__clk_divide),10);
	vcdp->fullBit(c+5,(vlTOPp->hdmi_driver__DOT__clk_50k));
	vcdp->fullBus(c+6,(vlTOPp->hdmi_driver__DOT__mI2C_CLK_DIV),16);
	vcdp->fullBit(c+7,(vlTOPp->hdmi_driver__DOT__done));
	vcdp->fullBus(c+8,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__counter),4);
	vcdp->fullBus(c+9,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state),5);
	vcdp->fullBit(c+10,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__ack));
	vcdp->fullBus(c+11,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__byte_num_local),3);
	vcdp->fullBit(c+12,(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__address));
	vcdp->fullBus(c+13,(vlTOPp->hdmi_driver__DOT__byte_lut_next),8);
	vcdp->fullBus(c+14,(vlTOPp->hdmi_driver__DOT__byte_lut),8);
	vcdp->fullBit(c+15,(vlTOPp->clk_50));
	vcdp->fullBit(c+16,(vlTOPp->reset_al));
	vcdp->fullBit(c+17,(vlTOPp->H_sync));
	vcdp->fullBit(c+18,(vlTOPp->V_sync));
	vcdp->fullBus(c+19,(vlTOPp->CountX),10);
	vcdp->fullBus(c+20,(vlTOPp->CountY),10);
	vcdp->fullBus(c+21,(vlTOPp->RED),8);
	vcdp->fullBus(c+22,(vlTOPp->GREEN),8);
	vcdp->fullBus(c+23,(vlTOPp->BLUE),8);
	vcdp->fullBit(c+24,(vlTOPp->Draw_enable));
	vcdp->fullBit(c+25,(vlTOPp->scl));
	vcdp->fullBit(c+26,(vlTOPp->sda));
	vcdp->fullBit(c+27,(vlTOPp->fail));
	vcdp->fullBit(c+28,(vlTOPp->rst));
	vcdp->fullBit(c+29,(vlTOPp->clk_25));
	vcdp->fullBit(c+30,(vlTOPp->HDMI_INT));
	vcdp->fullBit(c+31,(vlTOPp->mI2C_CTRL_CLK));
	vcdp->fullBit(c+32,((1U & (~ (IData)(vlTOPp->reset_al)))));
	vcdp->fullBus(c+33,(0x72U),7);
	vcdp->fullBus(c+34,(2U),3);
	vcdp->fullBit(c+35,(0U));
	vcdp->fullBit(c+36,(1U));
	vcdp->fullBus(c+37,(0x2faf080U),32);
	vcdp->fullBus(c+38,(0x4e20U),32);
	vcdp->fullBus(c+39,(0U),32);
	vcdp->fullBus(c+40,(1U),32);
	vcdp->fullBus(c+41,(2U),32);
	vcdp->fullBus(c+42,(3U),32);
	vcdp->fullBus(c+43,(4U),32);
	vcdp->fullBus(c+44,(5U),32);
	vcdp->fullBus(c+45,(6U),32);
	vcdp->fullBus(c+46,(7U),32);
	vcdp->fullBus(c+47,(8U),32);
	vcdp->fullBus(c+48,(9U),32);
	vcdp->fullBus(c+49,(0xaU),32);
	vcdp->fullBus(c+50,(0xbU),32);
	vcdp->fullBus(c+51,(0xcU),32);
	vcdp->fullBus(c+52,(0xdU),32);
	vcdp->fullBus(c+53,(0xeU),32);
    }
}
