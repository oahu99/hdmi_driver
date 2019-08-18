// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhdmi_driver.h for the primary calling header

#include "Vhdmi_driver.h"
#include "Vhdmi_driver__Syms.h"


//--------------------
// STATIC VARIABLES

// Begin mtask footprint  all: 
VL_ST_SIG8(Vhdmi_driver::__Vtable1_hdmi_driver__DOT__data[256],7,0);

//--------------------

VL_CTOR_IMP(Vhdmi_driver) {
    Vhdmi_driver__Syms* __restrict vlSymsp = __VlSymsp = new Vhdmi_driver__Syms(this, name());
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vhdmi_driver::__Vconfigure(Vhdmi_driver__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vhdmi_driver::~Vhdmi_driver() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vhdmi_driver::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhdmi_driver::eval\n"); );
    Vhdmi_driver__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vhdmi_driver::_eval_initial_loop(Vhdmi_driver__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vhdmi_driver::_sequent__TOP__1(Vhdmi_driver__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_sequent__TOP__1\n"); );
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__hdmi_driver__DOT__clk_50k,0,0);
    VL_SIG16(__Vdly__hdmi_driver__DOT__clk_divide,9,0);
    // Body
    __Vdly__hdmi_driver__DOT__clk_divide = vlTOPp->hdmi_driver__DOT__clk_divide;
    __Vdly__hdmi_driver__DOT__clk_50k = vlTOPp->hdmi_driver__DOT__clk_50k;
    vlTOPp->__Vdly__hdmi_driver__DOT__byte_lut = vlTOPp->hdmi_driver__DOT__byte_lut;
    // ALWAYS at hdmi_driver.v:96
    if ((1U & (~ (IData)(vlTOPp->reset_al)))) {
	__Vdly__hdmi_driver__DOT__clk_50k = 0U;
	__Vdly__hdmi_driver__DOT__clk_divide = 0U;
    }
    if ((0x1f4U == (IData)(vlTOPp->hdmi_driver__DOT__clk_divide))) {
	__Vdly__hdmi_driver__DOT__clk_50k = (1U & (~ (IData)(vlTOPp->hdmi_driver__DOT__clk_50k)));
	__Vdly__hdmi_driver__DOT__clk_divide = 0U;
    } else {
	__Vdly__hdmi_driver__DOT__clk_divide = (0x3ffU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->hdmi_driver__DOT__clk_divide)));
    }
    // ALWAYS at hdmi_driver.v:96
    vlTOPp->__Vdly__hdmi_driver__DOT__byte_lut = (0xffU 
						  & ((0x3eU 
						      == (IData)(vlTOPp->hdmi_driver__DOT__byte_lut))
						      ? 0U
						      : (IData)(vlTOPp->hdmi_driver__DOT__byte_lut_next)));
    // ALWAYS at hdmi_driver.v:88
    vlTOPp->clk_25 = (1U & ((IData)(vlTOPp->rst) ? 0U
			     : (~ (IData)(vlTOPp->clk_25))));
    // ALWAYS at hdmi_driver.v:56
    if (vlTOPp->reset_al) {
	if ((0x9c4U > (IData)(vlTOPp->hdmi_driver__DOT__mI2C_CLK_DIV))) {
	    vlTOPp->hdmi_driver__DOT__mI2C_CLK_DIV 
		= (0xffffU & ((IData)(1U) + (IData)(vlTOPp->hdmi_driver__DOT__mI2C_CLK_DIV)));
	} else {
	    vlTOPp->mI2C_CTRL_CLK = (1U & (~ (IData)(vlTOPp->mI2C_CTRL_CLK)));
	    vlTOPp->hdmi_driver__DOT__mI2C_CLK_DIV = 0U;
	}
    } else {
	vlTOPp->mI2C_CTRL_CLK = 0U;
	vlTOPp->hdmi_driver__DOT__mI2C_CLK_DIV = 0U;
    }
    vlTOPp->hdmi_driver__DOT__clk_50k = __Vdly__hdmi_driver__DOT__clk_50k;
    vlTOPp->hdmi_driver__DOT__clk_divide = __Vdly__hdmi_driver__DOT__clk_divide;
    // ALWAYS at hdmi_driver.v:96
    vlTOPp->rst = (1U & (~ (IData)(vlTOPp->reset_al)));
}

void Vhdmi_driver::_settle__TOP__2(Vhdmi_driver__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_settle__TOP__2\n"); );
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->H_sync = ((0x290U <= (IData)(vlTOPp->CountX)) 
		      & (0x2f0U > (IData)(vlTOPp->CountX)));
    vlTOPp->V_sync = ((0x1eaU <= (IData)(vlTOPp->CountY)) 
		      & (0x1ecU > (IData)(vlTOPp->CountY)));
    vlTOPp->GREEN = (0xffU & (IData)(vlTOPp->CountX));
    vlTOPp->BLUE = (0xffU & (IData)(vlTOPp->CountY));
    vlTOPp->RED = (0x7fU & ((IData)(vlTOPp->CountY) 
			    >> 1U));
    // ALWAYS at hdmi_driver.v:128
    vlTOPp->Draw_enable = ((0x280U >= (IData)(vlTOPp->CountX)) 
			   & (0x1e0U >= (IData)(vlTOPp->CountY)));
    // ALWAYS at i2c_master_top.v:106
    vlTOPp->hdmi_driver__DOT__I2C_0__DOT__next_state 
	= (0x1fU & (((((((((0U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state)) 
			   | (4U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
			  | (5U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
			 | (1U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
			| (0xeU == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
		       | (7U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
		      | (8U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
		     | (2U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state)))
		     ? ((0U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
			 ? 4U : ((4U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
				  ? 5U : ((5U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
					   ? 1U : (
						   (1U 
						    == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						    ? 
						   ((0U 
						     == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__counter))
						     ? 2U
						     : 0xeU)
						    : 
						   ((0xeU 
						     == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						     ? 7U
						     : 
						    ((7U 
						      == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						      ? 8U
						      : 
						     ((8U 
						       == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						       ? 1U
						       : 0xbU)))))))
		     : ((0xbU == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
			 ? 0xcU : ((0xcU == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
				    ? ((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__ack)
				        ? 9U : 3U) : 
				   ((9U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
				     ? 0xaU : ((0xaU 
						== (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
					        ? (
						   (0U 
						    == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__byte_num_local))
						    ? 6U
						    : 1U)
					        : (
						   (6U 
						    == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						    ? 0xdU
						    : 
						   ((0xdU 
						     == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						     ? 0U
						     : 
						    ((3U 
						      == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						      ? 3U
						      : 0U)))))))));
    // ALWAYS at reg_lut.v:7
    vlTOPp->__Vtableidx1 = vlTOPp->hdmi_driver__DOT__byte_lut;
    vlTOPp->hdmi_driver__DOT__data = vlTOPp->__Vtable1_hdmi_driver__DOT__data
	[vlTOPp->__Vtableidx1];
    // ALWAYS at i2c_master_top.v:106
    vlTOPp->hdmi_driver__DOT__I2C_0__DOT__message = 
	((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__address)
	  ? 0x72U : (IData)(vlTOPp->hdmi_driver__DOT__data));
}

VL_INLINE_OPT void Vhdmi_driver::_sequent__TOP__3(Vhdmi_driver__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_sequent__TOP__3\n"); );
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG16(__Vdly__CountX,9,0);
    // Body
    __Vdly__CountX = vlTOPp->CountX;
    // ALWAYS at hdmi_driver.v:116
    if (vlTOPp->reset_al) {
	__Vdly__CountX = (0x3ffU & ((0x31fU == (IData)(vlTOPp->CountX))
				     ? 0U : ((IData)(1U) 
					     + (IData)(vlTOPp->CountX))));
	if ((0x31fU == (IData)(vlTOPp->CountX))) {
	    vlTOPp->CountY = (0x3ffU & ((0x20cU == (IData)(vlTOPp->CountY))
					 ? 0U : ((IData)(1U) 
						 + (IData)(vlTOPp->CountY))));
	}
    } else {
	__Vdly__CountX = 0U;
	vlTOPp->CountY = 0U;
    }
    vlTOPp->CountX = __Vdly__CountX;
    vlTOPp->H_sync = ((0x290U <= (IData)(vlTOPp->CountX)) 
		      & (0x2f0U > (IData)(vlTOPp->CountX)));
    vlTOPp->GREEN = (0xffU & (IData)(vlTOPp->CountX));
    vlTOPp->V_sync = ((0x1eaU <= (IData)(vlTOPp->CountY)) 
		      & (0x1ecU > (IData)(vlTOPp->CountY)));
    vlTOPp->BLUE = (0xffU & (IData)(vlTOPp->CountY));
    vlTOPp->RED = (0x7fU & ((IData)(vlTOPp->CountY) 
			    >> 1U));
    // ALWAYS at hdmi_driver.v:128
    vlTOPp->Draw_enable = ((0x280U >= (IData)(vlTOPp->CountX)) 
			   & (0x1e0U >= (IData)(vlTOPp->CountY)));
}

VL_INLINE_OPT void Vhdmi_driver::_sequent__TOP__4(Vhdmi_driver__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_sequent__TOP__4\n"); );
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__hdmi_driver__DOT__I2C_0__DOT__address,0,0);
    VL_SIG8(__Vdly__hdmi_driver__DOT__I2C_0__DOT__counter,3,0);
    VL_SIG8(__Vdly__sda,0,0);
    VL_SIG8(__Vdly__hdmi_driver__DOT__I2C_0__DOT__byte_num_local,2,0);
    VL_SIG8(__Vdly__hdmi_driver__DOT__done,0,0);
    // Body
    __Vdly__sda = vlTOPp->sda;
    __Vdly__hdmi_driver__DOT__I2C_0__DOT__address = vlTOPp->hdmi_driver__DOT__I2C_0__DOT__address;
    __Vdly__hdmi_driver__DOT__I2C_0__DOT__byte_num_local 
	= vlTOPp->hdmi_driver__DOT__I2C_0__DOT__byte_num_local;
    __Vdly__hdmi_driver__DOT__I2C_0__DOT__counter = vlTOPp->hdmi_driver__DOT__I2C_0__DOT__counter;
    __Vdly__hdmi_driver__DOT__done = vlTOPp->hdmi_driver__DOT__done;
    // ALWAYS at i2c_master_top.v:40
    if (((((((((0U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state)) 
	       | (4U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
	      | (5U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
	     | (1U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
	    | (7U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
	   | (8U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
	  | (2U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
	 | (0xbU == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state)))) {
	if ((0U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
	    __Vdly__hdmi_driver__DOT__I2C_0__DOT__address = 1U;
	    __Vdly__hdmi_driver__DOT__I2C_0__DOT__counter = 8U;
	    vlTOPp->scl = 1U;
	    __Vdly__sda = 1U;
	    __Vdly__hdmi_driver__DOT__I2C_0__DOT__byte_num_local = 2U;
	    __Vdly__hdmi_driver__DOT__done = 0U;
	} else {
	    if ((4U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
		vlTOPp->fail = 0U;
		__Vdly__sda = 0U;
	    } else {
		if ((5U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
		    vlTOPp->scl = 0U;
		} else {
		    if ((1U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
			__Vdly__sda = (1U & ((0U != (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__counter))
					      ? (1U 
						 & ((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__message) 
						    >> 
						    (7U 
						     & ((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__counter) 
							- (IData)(1U)))))
					      : 0U));
		    } else {
			if ((7U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
			    __Vdly__hdmi_driver__DOT__I2C_0__DOT__counter 
				= (0xfU & ((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__counter) 
					   - (IData)(1U)));
			    vlTOPp->scl = 1U;
			} else {
			    if ((8U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
				vlTOPp->scl = 0U;
			    } else {
				if ((2U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
				    vlTOPp->scl = 1U;
				} else {
				    vlTOPp->hdmi_driver__DOT__I2C_0__DOT__ack 
					= (1U & (~ (IData)(vlTOPp->sda)));
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((0xcU == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
	    vlTOPp->scl = 0U;
	} else {
	    if ((6U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
		vlTOPp->scl = 1U;
	    } else {
		if ((0xdU == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
		    __Vdly__sda = 1U;
		} else {
		    if ((9U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
			__Vdly__hdmi_driver__DOT__done 
			    = (1U & ((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__address)
				      ? (IData)(vlTOPp->hdmi_driver__DOT__done)
				      : 1U));
			__Vdly__hdmi_driver__DOT__I2C_0__DOT__address = 0U;
		    } else {
			if ((0xaU == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
			    __Vdly__hdmi_driver__DOT__I2C_0__DOT__byte_num_local 
				= (7U & ((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__address)
					  ? (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__byte_num_local)
					  : ((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__byte_num_local) 
					     - (IData)(1U))));
			    __Vdly__hdmi_driver__DOT__I2C_0__DOT__counter = 8U;
			    __Vdly__hdmi_driver__DOT__done = 0U;
			    __Vdly__hdmi_driver__DOT__I2C_0__DOT__address = 0U;
			} else {
			    if ((3U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) {
				vlTOPp->fail = 1U;
			    }
			}
		    }
		}
	    }
	}
    }
    vlTOPp->sda = __Vdly__sda;
    vlTOPp->hdmi_driver__DOT__I2C_0__DOT__address = __Vdly__hdmi_driver__DOT__I2C_0__DOT__address;
    vlTOPp->hdmi_driver__DOT__I2C_0__DOT__counter = __Vdly__hdmi_driver__DOT__I2C_0__DOT__counter;
    vlTOPp->hdmi_driver__DOT__I2C_0__DOT__byte_num_local 
	= __Vdly__hdmi_driver__DOT__I2C_0__DOT__byte_num_local;
    vlTOPp->hdmi_driver__DOT__done = __Vdly__hdmi_driver__DOT__done;
    // ALWAYS at i2c_master_top.v:40
    vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state = ((IData)(vlTOPp->reset_al)
						    ? (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__next_state)
						    : 0U);
    // ALWAYS at i2c_master_top.v:106
    vlTOPp->hdmi_driver__DOT__I2C_0__DOT__next_state 
	= (0x1fU & (((((((((0U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state)) 
			   | (4U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
			  | (5U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
			 | (1U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
			| (0xeU == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
		       | (7U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
		      | (8U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))) 
		     | (2U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state)))
		     ? ((0U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
			 ? 4U : ((4U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
				  ? 5U : ((5U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
					   ? 1U : (
						   (1U 
						    == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						    ? 
						   ((0U 
						     == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__counter))
						     ? 2U
						     : 0xeU)
						    : 
						   ((0xeU 
						     == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						     ? 7U
						     : 
						    ((7U 
						      == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						      ? 8U
						      : 
						     ((8U 
						       == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						       ? 1U
						       : 0xbU)))))))
		     : ((0xbU == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
			 ? 0xcU : ((0xcU == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
				    ? ((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__ack)
				        ? 9U : 3U) : 
				   ((9U == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
				     ? 0xaU : ((0xaU 
						== (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
					        ? (
						   (0U 
						    == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__byte_num_local))
						    ? 6U
						    : 1U)
					        : (
						   (6U 
						    == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						    ? 0xdU
						    : 
						   ((0xdU 
						     == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						     ? 0U
						     : 
						    ((3U 
						      == (IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__state))
						      ? 3U
						      : 0U)))))))));
}

VL_INLINE_OPT void Vhdmi_driver::_sequent__TOP__5(Vhdmi_driver__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_sequent__TOP__5\n"); );
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at hdmi_driver.v:92
    vlTOPp->hdmi_driver__DOT__byte_lut_next = (0xffU 
					       & ((IData)(1U) 
						  + (IData)(vlTOPp->hdmi_driver__DOT__byte_lut)));
}

VL_INLINE_OPT void Vhdmi_driver::_sequent__TOP__6(Vhdmi_driver__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_sequent__TOP__6\n"); );
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->hdmi_driver__DOT__byte_lut = vlTOPp->__Vdly__hdmi_driver__DOT__byte_lut;
    // ALWAYS at reg_lut.v:7
    vlTOPp->__Vtableidx1 = vlTOPp->hdmi_driver__DOT__byte_lut;
    vlTOPp->hdmi_driver__DOT__data = vlTOPp->__Vtable1_hdmi_driver__DOT__data
	[vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void Vhdmi_driver::_multiclk__TOP__7(Vhdmi_driver__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_multiclk__TOP__7\n"); );
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2c_master_top.v:106
    vlTOPp->hdmi_driver__DOT__I2C_0__DOT__message = 
	((IData)(vlTOPp->hdmi_driver__DOT__I2C_0__DOT__address)
	  ? 0x72U : (IData)(vlTOPp->hdmi_driver__DOT__data));
}

void Vhdmi_driver::_eval(Vhdmi_driver__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_eval\n"); );
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__clk_25) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__clk_25)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__hdmi_driver__DOT__done) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__hdmi_driver__DOT__done)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__mI2C_CTRL_CLK) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mI2C_CTRL_CLK))))) {
	vlTOPp->_multiclk__TOP__7(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk_50 = vlTOPp->clk_50;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__clk_25 
	= vlTOPp->__VinpClk__TOP__clk_25;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__mI2C_CTRL_CLK 
	= vlTOPp->__VinpClk__TOP__mI2C_CTRL_CLK;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__hdmi_driver__DOT__done 
	= vlTOPp->__VinpClk__TOP__hdmi_driver__DOT__done;
    vlTOPp->__VinpClk__TOP__clk_25 = vlTOPp->clk_25;
    vlTOPp->__VinpClk__TOP__mI2C_CTRL_CLK = vlTOPp->mI2C_CTRL_CLK;
    vlTOPp->__VinpClk__TOP__hdmi_driver__DOT__done 
	= vlTOPp->hdmi_driver__DOT__done;
}

void Vhdmi_driver::_eval_initial(Vhdmi_driver__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_eval_initial\n"); );
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_50 = vlTOPp->clk_50;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__clk_25 
	= vlTOPp->__VinpClk__TOP__clk_25;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__mI2C_CTRL_CLK 
	= vlTOPp->__VinpClk__TOP__mI2C_CTRL_CLK;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__hdmi_driver__DOT__done 
	= vlTOPp->__VinpClk__TOP__hdmi_driver__DOT__done;
}

void Vhdmi_driver::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::final\n"); );
    // Variables
    Vhdmi_driver__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhdmi_driver::_eval_settle(Vhdmi_driver__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_eval_settle\n"); );
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vhdmi_driver::_change_request(Vhdmi_driver__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_change_request\n"); );
    Vhdmi_driver* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->clk_25 ^ vlTOPp->__Vchglast__TOP__clk_25)
	 | (vlTOPp->mI2C_CTRL_CLK ^ vlTOPp->__Vchglast__TOP__mI2C_CTRL_CLK)
	 | (vlTOPp->hdmi_driver__DOT__done ^ vlTOPp->__Vchglast__TOP__hdmi_driver__DOT__done));
    VL_DEBUG_IF( if(__req && ((vlTOPp->clk_25 ^ vlTOPp->__Vchglast__TOP__clk_25))) VL_DBG_MSGF("        CHANGE: hdmi_driver.v:11: clk_25\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mI2C_CTRL_CLK ^ vlTOPp->__Vchglast__TOP__mI2C_CTRL_CLK))) VL_DBG_MSGF("        CHANGE: hdmi_driver.v:13: mI2C_CTRL_CLK\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->hdmi_driver__DOT__done ^ vlTOPp->__Vchglast__TOP__hdmi_driver__DOT__done))) VL_DBG_MSGF("        CHANGE: hdmi_driver.v:29: hdmi_driver.done\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__clk_25 = vlTOPp->clk_25;
    vlTOPp->__Vchglast__TOP__mI2C_CTRL_CLK = vlTOPp->mI2C_CTRL_CLK;
    vlTOPp->__Vchglast__TOP__hdmi_driver__DOT__done 
	= vlTOPp->hdmi_driver__DOT__done;
    return __req;
}

#ifdef VL_DEBUG
void Vhdmi_driver::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_50 & 0xfeU))) {
	Verilated::overWidthError("clk_50");}
    if (VL_UNLIKELY((reset_al & 0xfeU))) {
	Verilated::overWidthError("reset_al");}
    if (VL_UNLIKELY((HDMI_INT & 0xfeU))) {
	Verilated::overWidthError("HDMI_INT");}
}
#endif // VL_DEBUG

void Vhdmi_driver::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi_driver::_ctor_var_reset\n"); );
    // Body
    clk_50 = VL_RAND_RESET_I(1);
    reset_al = VL_RAND_RESET_I(1);
    H_sync = VL_RAND_RESET_I(1);
    V_sync = VL_RAND_RESET_I(1);
    CountX = VL_RAND_RESET_I(10);
    CountY = VL_RAND_RESET_I(10);
    RED = VL_RAND_RESET_I(8);
    GREEN = VL_RAND_RESET_I(8);
    BLUE = VL_RAND_RESET_I(8);
    Draw_enable = VL_RAND_RESET_I(1);
    scl = VL_RAND_RESET_I(1);
    sda = VL_RAND_RESET_I(1);
    fail = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    clk_25 = VL_RAND_RESET_I(1);
    HDMI_INT = VL_RAND_RESET_I(1);
    mI2C_CTRL_CLK = VL_RAND_RESET_I(1);
    hdmi_driver__DOT__data = VL_RAND_RESET_I(8);
    hdmi_driver__DOT__byte_lut = VL_RAND_RESET_I(8);
    hdmi_driver__DOT__byte_lut_next = VL_RAND_RESET_I(8);
    hdmi_driver__DOT__clk_divide = VL_RAND_RESET_I(10);
    hdmi_driver__DOT__clk_50k = VL_RAND_RESET_I(1);
    hdmi_driver__DOT__done = VL_RAND_RESET_I(1);
    hdmi_driver__DOT__mI2C_CLK_DIV = VL_RAND_RESET_I(16);
    hdmi_driver__DOT__I2C_0__DOT__counter = VL_RAND_RESET_I(4);
    hdmi_driver__DOT__I2C_0__DOT__message = VL_RAND_RESET_I(8);
    hdmi_driver__DOT__I2C_0__DOT__state = VL_RAND_RESET_I(5);
    hdmi_driver__DOT__I2C_0__DOT__next_state = VL_RAND_RESET_I(5);
    hdmi_driver__DOT__I2C_0__DOT__ack = VL_RAND_RESET_I(1);
    hdmi_driver__DOT__I2C_0__DOT__byte_num_local = VL_RAND_RESET_I(3);
    hdmi_driver__DOT__I2C_0__DOT__address = VL_RAND_RESET_I(1);
    __Vtableidx1 = VL_RAND_RESET_I(8);
    __Vtable1_hdmi_driver__DOT__data[0] = 0x98U;
    __Vtable1_hdmi_driver__DOT__data[1] = 3U;
    __Vtable1_hdmi_driver__DOT__data[2] = 1U;
    __Vtable1_hdmi_driver__DOT__data[3] = 0U;
    __Vtable1_hdmi_driver__DOT__data[4] = 2U;
    __Vtable1_hdmi_driver__DOT__data[5] = 0x18U;
    __Vtable1_hdmi_driver__DOT__data[6] = 3U;
    __Vtable1_hdmi_driver__DOT__data[7] = 0U;
    __Vtable1_hdmi_driver__DOT__data[8] = 0x14U;
    __Vtable1_hdmi_driver__DOT__data[9] = 0x70U;
    __Vtable1_hdmi_driver__DOT__data[10] = 0x15U;
    __Vtable1_hdmi_driver__DOT__data[11] = 0x20U;
    __Vtable1_hdmi_driver__DOT__data[12] = 0x16U;
    __Vtable1_hdmi_driver__DOT__data[13] = 0x30U;
    __Vtable1_hdmi_driver__DOT__data[14] = 0x18U;
    __Vtable1_hdmi_driver__DOT__data[15] = 0x46U;
    __Vtable1_hdmi_driver__DOT__data[16] = 0x40U;
    __Vtable1_hdmi_driver__DOT__data[17] = 0x80U;
    __Vtable1_hdmi_driver__DOT__data[18] = 0x41U;
    __Vtable1_hdmi_driver__DOT__data[19] = 0x10U;
    __Vtable1_hdmi_driver__DOT__data[20] = 0x49U;
    __Vtable1_hdmi_driver__DOT__data[21] = 0xa8U;
    __Vtable1_hdmi_driver__DOT__data[22] = 0x55U;
    __Vtable1_hdmi_driver__DOT__data[23] = 0x10U;
    __Vtable1_hdmi_driver__DOT__data[24] = 0x56U;
    __Vtable1_hdmi_driver__DOT__data[25] = 8U;
    __Vtable1_hdmi_driver__DOT__data[26] = 0x96U;
    __Vtable1_hdmi_driver__DOT__data[27] = 0xf6U;
    __Vtable1_hdmi_driver__DOT__data[28] = 0x73U;
    __Vtable1_hdmi_driver__DOT__data[29] = 7U;
    __Vtable1_hdmi_driver__DOT__data[30] = 0x76U;
    __Vtable1_hdmi_driver__DOT__data[31] = 0x1fU;
    __Vtable1_hdmi_driver__DOT__data[32] = 0x98U;
    __Vtable1_hdmi_driver__DOT__data[33] = 3U;
    __Vtable1_hdmi_driver__DOT__data[34] = 0x99U;
    __Vtable1_hdmi_driver__DOT__data[35] = 2U;
    __Vtable1_hdmi_driver__DOT__data[36] = 0x9aU;
    __Vtable1_hdmi_driver__DOT__data[37] = 0xe0U;
    __Vtable1_hdmi_driver__DOT__data[38] = 0x9cU;
    __Vtable1_hdmi_driver__DOT__data[39] = 0x30U;
    __Vtable1_hdmi_driver__DOT__data[40] = 0x9dU;
    __Vtable1_hdmi_driver__DOT__data[41] = 0x61U;
    __Vtable1_hdmi_driver__DOT__data[42] = 0xa2U;
    __Vtable1_hdmi_driver__DOT__data[43] = 0xa4U;
    __Vtable1_hdmi_driver__DOT__data[44] = 0xa3U;
    __Vtable1_hdmi_driver__DOT__data[45] = 0xa4U;
    __Vtable1_hdmi_driver__DOT__data[46] = 0xa5U;
    __Vtable1_hdmi_driver__DOT__data[47] = 4U;
    __Vtable1_hdmi_driver__DOT__data[48] = 0xabU;
    __Vtable1_hdmi_driver__DOT__data[49] = 0x40U;
    __Vtable1_hdmi_driver__DOT__data[50] = 0xafU;
    __Vtable1_hdmi_driver__DOT__data[51] = 0x16U;
    __Vtable1_hdmi_driver__DOT__data[52] = 0xbaU;
    __Vtable1_hdmi_driver__DOT__data[53] = 0x60U;
    __Vtable1_hdmi_driver__DOT__data[54] = 0xd1U;
    __Vtable1_hdmi_driver__DOT__data[55] = 0xffU;
    __Vtable1_hdmi_driver__DOT__data[56] = 0xdeU;
    __Vtable1_hdmi_driver__DOT__data[57] = 0x10U;
    __Vtable1_hdmi_driver__DOT__data[58] = 0xe4U;
    __Vtable1_hdmi_driver__DOT__data[59] = 0x60U;
    __Vtable1_hdmi_driver__DOT__data[60] = 0xfaU;
    __Vtable1_hdmi_driver__DOT__data[61] = 0x7dU;
    __Vtable1_hdmi_driver__DOT__data[62] = 0U;
    __Vtable1_hdmi_driver__DOT__data[63] = 0U;
    __Vtable1_hdmi_driver__DOT__data[64] = 0U;
    __Vtable1_hdmi_driver__DOT__data[65] = 0U;
    __Vtable1_hdmi_driver__DOT__data[66] = 0U;
    __Vtable1_hdmi_driver__DOT__data[67] = 0U;
    __Vtable1_hdmi_driver__DOT__data[68] = 0U;
    __Vtable1_hdmi_driver__DOT__data[69] = 0U;
    __Vtable1_hdmi_driver__DOT__data[70] = 0U;
    __Vtable1_hdmi_driver__DOT__data[71] = 0U;
    __Vtable1_hdmi_driver__DOT__data[72] = 0U;
    __Vtable1_hdmi_driver__DOT__data[73] = 0U;
    __Vtable1_hdmi_driver__DOT__data[74] = 0U;
    __Vtable1_hdmi_driver__DOT__data[75] = 0U;
    __Vtable1_hdmi_driver__DOT__data[76] = 0U;
    __Vtable1_hdmi_driver__DOT__data[77] = 0U;
    __Vtable1_hdmi_driver__DOT__data[78] = 0U;
    __Vtable1_hdmi_driver__DOT__data[79] = 0U;
    __Vtable1_hdmi_driver__DOT__data[80] = 0U;
    __Vtable1_hdmi_driver__DOT__data[81] = 0U;
    __Vtable1_hdmi_driver__DOT__data[82] = 0U;
    __Vtable1_hdmi_driver__DOT__data[83] = 0U;
    __Vtable1_hdmi_driver__DOT__data[84] = 0U;
    __Vtable1_hdmi_driver__DOT__data[85] = 0U;
    __Vtable1_hdmi_driver__DOT__data[86] = 0U;
    __Vtable1_hdmi_driver__DOT__data[87] = 0U;
    __Vtable1_hdmi_driver__DOT__data[88] = 0U;
    __Vtable1_hdmi_driver__DOT__data[89] = 0U;
    __Vtable1_hdmi_driver__DOT__data[90] = 0U;
    __Vtable1_hdmi_driver__DOT__data[91] = 0U;
    __Vtable1_hdmi_driver__DOT__data[92] = 0U;
    __Vtable1_hdmi_driver__DOT__data[93] = 0U;
    __Vtable1_hdmi_driver__DOT__data[94] = 0U;
    __Vtable1_hdmi_driver__DOT__data[95] = 0U;
    __Vtable1_hdmi_driver__DOT__data[96] = 0U;
    __Vtable1_hdmi_driver__DOT__data[97] = 0U;
    __Vtable1_hdmi_driver__DOT__data[98] = 0U;
    __Vtable1_hdmi_driver__DOT__data[99] = 0U;
    __Vtable1_hdmi_driver__DOT__data[100] = 0U;
    __Vtable1_hdmi_driver__DOT__data[101] = 0U;
    __Vtable1_hdmi_driver__DOT__data[102] = 0U;
    __Vtable1_hdmi_driver__DOT__data[103] = 0U;
    __Vtable1_hdmi_driver__DOT__data[104] = 0U;
    __Vtable1_hdmi_driver__DOT__data[105] = 0U;
    __Vtable1_hdmi_driver__DOT__data[106] = 0U;
    __Vtable1_hdmi_driver__DOT__data[107] = 0U;
    __Vtable1_hdmi_driver__DOT__data[108] = 0U;
    __Vtable1_hdmi_driver__DOT__data[109] = 0U;
    __Vtable1_hdmi_driver__DOT__data[110] = 0U;
    __Vtable1_hdmi_driver__DOT__data[111] = 0U;
    __Vtable1_hdmi_driver__DOT__data[112] = 0U;
    __Vtable1_hdmi_driver__DOT__data[113] = 0U;
    __Vtable1_hdmi_driver__DOT__data[114] = 0U;
    __Vtable1_hdmi_driver__DOT__data[115] = 0U;
    __Vtable1_hdmi_driver__DOT__data[116] = 0U;
    __Vtable1_hdmi_driver__DOT__data[117] = 0U;
    __Vtable1_hdmi_driver__DOT__data[118] = 0U;
    __Vtable1_hdmi_driver__DOT__data[119] = 0U;
    __Vtable1_hdmi_driver__DOT__data[120] = 0U;
    __Vtable1_hdmi_driver__DOT__data[121] = 0U;
    __Vtable1_hdmi_driver__DOT__data[122] = 0U;
    __Vtable1_hdmi_driver__DOT__data[123] = 0U;
    __Vtable1_hdmi_driver__DOT__data[124] = 0U;
    __Vtable1_hdmi_driver__DOT__data[125] = 0U;
    __Vtable1_hdmi_driver__DOT__data[126] = 0U;
    __Vtable1_hdmi_driver__DOT__data[127] = 0U;
    __Vtable1_hdmi_driver__DOT__data[128] = 0U;
    __Vtable1_hdmi_driver__DOT__data[129] = 0U;
    __Vtable1_hdmi_driver__DOT__data[130] = 0U;
    __Vtable1_hdmi_driver__DOT__data[131] = 0U;
    __Vtable1_hdmi_driver__DOT__data[132] = 0U;
    __Vtable1_hdmi_driver__DOT__data[133] = 0U;
    __Vtable1_hdmi_driver__DOT__data[134] = 0U;
    __Vtable1_hdmi_driver__DOT__data[135] = 0U;
    __Vtable1_hdmi_driver__DOT__data[136] = 0U;
    __Vtable1_hdmi_driver__DOT__data[137] = 0U;
    __Vtable1_hdmi_driver__DOT__data[138] = 0U;
    __Vtable1_hdmi_driver__DOT__data[139] = 0U;
    __Vtable1_hdmi_driver__DOT__data[140] = 0U;
    __Vtable1_hdmi_driver__DOT__data[141] = 0U;
    __Vtable1_hdmi_driver__DOT__data[142] = 0U;
    __Vtable1_hdmi_driver__DOT__data[143] = 0U;
    __Vtable1_hdmi_driver__DOT__data[144] = 0U;
    __Vtable1_hdmi_driver__DOT__data[145] = 0U;
    __Vtable1_hdmi_driver__DOT__data[146] = 0U;
    __Vtable1_hdmi_driver__DOT__data[147] = 0U;
    __Vtable1_hdmi_driver__DOT__data[148] = 0U;
    __Vtable1_hdmi_driver__DOT__data[149] = 0U;
    __Vtable1_hdmi_driver__DOT__data[150] = 0U;
    __Vtable1_hdmi_driver__DOT__data[151] = 0U;
    __Vtable1_hdmi_driver__DOT__data[152] = 0U;
    __Vtable1_hdmi_driver__DOT__data[153] = 0U;
    __Vtable1_hdmi_driver__DOT__data[154] = 0U;
    __Vtable1_hdmi_driver__DOT__data[155] = 0U;
    __Vtable1_hdmi_driver__DOT__data[156] = 0U;
    __Vtable1_hdmi_driver__DOT__data[157] = 0U;
    __Vtable1_hdmi_driver__DOT__data[158] = 0U;
    __Vtable1_hdmi_driver__DOT__data[159] = 0U;
    __Vtable1_hdmi_driver__DOT__data[160] = 0U;
    __Vtable1_hdmi_driver__DOT__data[161] = 0U;
    __Vtable1_hdmi_driver__DOT__data[162] = 0U;
    __Vtable1_hdmi_driver__DOT__data[163] = 0U;
    __Vtable1_hdmi_driver__DOT__data[164] = 0U;
    __Vtable1_hdmi_driver__DOT__data[165] = 0U;
    __Vtable1_hdmi_driver__DOT__data[166] = 0U;
    __Vtable1_hdmi_driver__DOT__data[167] = 0U;
    __Vtable1_hdmi_driver__DOT__data[168] = 0U;
    __Vtable1_hdmi_driver__DOT__data[169] = 0U;
    __Vtable1_hdmi_driver__DOT__data[170] = 0U;
    __Vtable1_hdmi_driver__DOT__data[171] = 0U;
    __Vtable1_hdmi_driver__DOT__data[172] = 0U;
    __Vtable1_hdmi_driver__DOT__data[173] = 0U;
    __Vtable1_hdmi_driver__DOT__data[174] = 0U;
    __Vtable1_hdmi_driver__DOT__data[175] = 0U;
    __Vtable1_hdmi_driver__DOT__data[176] = 0U;
    __Vtable1_hdmi_driver__DOT__data[177] = 0U;
    __Vtable1_hdmi_driver__DOT__data[178] = 0U;
    __Vtable1_hdmi_driver__DOT__data[179] = 0U;
    __Vtable1_hdmi_driver__DOT__data[180] = 0U;
    __Vtable1_hdmi_driver__DOT__data[181] = 0U;
    __Vtable1_hdmi_driver__DOT__data[182] = 0U;
    __Vtable1_hdmi_driver__DOT__data[183] = 0U;
    __Vtable1_hdmi_driver__DOT__data[184] = 0U;
    __Vtable1_hdmi_driver__DOT__data[185] = 0U;
    __Vtable1_hdmi_driver__DOT__data[186] = 0U;
    __Vtable1_hdmi_driver__DOT__data[187] = 0U;
    __Vtable1_hdmi_driver__DOT__data[188] = 0U;
    __Vtable1_hdmi_driver__DOT__data[189] = 0U;
    __Vtable1_hdmi_driver__DOT__data[190] = 0U;
    __Vtable1_hdmi_driver__DOT__data[191] = 0U;
    __Vtable1_hdmi_driver__DOT__data[192] = 0U;
    __Vtable1_hdmi_driver__DOT__data[193] = 0U;
    __Vtable1_hdmi_driver__DOT__data[194] = 0U;
    __Vtable1_hdmi_driver__DOT__data[195] = 0U;
    __Vtable1_hdmi_driver__DOT__data[196] = 0U;
    __Vtable1_hdmi_driver__DOT__data[197] = 0U;
    __Vtable1_hdmi_driver__DOT__data[198] = 0U;
    __Vtable1_hdmi_driver__DOT__data[199] = 0U;
    __Vtable1_hdmi_driver__DOT__data[200] = 0U;
    __Vtable1_hdmi_driver__DOT__data[201] = 0U;
    __Vtable1_hdmi_driver__DOT__data[202] = 0U;
    __Vtable1_hdmi_driver__DOT__data[203] = 0U;
    __Vtable1_hdmi_driver__DOT__data[204] = 0U;
    __Vtable1_hdmi_driver__DOT__data[205] = 0U;
    __Vtable1_hdmi_driver__DOT__data[206] = 0U;
    __Vtable1_hdmi_driver__DOT__data[207] = 0U;
    __Vtable1_hdmi_driver__DOT__data[208] = 0U;
    __Vtable1_hdmi_driver__DOT__data[209] = 0U;
    __Vtable1_hdmi_driver__DOT__data[210] = 0U;
    __Vtable1_hdmi_driver__DOT__data[211] = 0U;
    __Vtable1_hdmi_driver__DOT__data[212] = 0U;
    __Vtable1_hdmi_driver__DOT__data[213] = 0U;
    __Vtable1_hdmi_driver__DOT__data[214] = 0U;
    __Vtable1_hdmi_driver__DOT__data[215] = 0U;
    __Vtable1_hdmi_driver__DOT__data[216] = 0U;
    __Vtable1_hdmi_driver__DOT__data[217] = 0U;
    __Vtable1_hdmi_driver__DOT__data[218] = 0U;
    __Vtable1_hdmi_driver__DOT__data[219] = 0U;
    __Vtable1_hdmi_driver__DOT__data[220] = 0U;
    __Vtable1_hdmi_driver__DOT__data[221] = 0U;
    __Vtable1_hdmi_driver__DOT__data[222] = 0U;
    __Vtable1_hdmi_driver__DOT__data[223] = 0U;
    __Vtable1_hdmi_driver__DOT__data[224] = 0U;
    __Vtable1_hdmi_driver__DOT__data[225] = 0U;
    __Vtable1_hdmi_driver__DOT__data[226] = 0U;
    __Vtable1_hdmi_driver__DOT__data[227] = 0U;
    __Vtable1_hdmi_driver__DOT__data[228] = 0U;
    __Vtable1_hdmi_driver__DOT__data[229] = 0U;
    __Vtable1_hdmi_driver__DOT__data[230] = 0U;
    __Vtable1_hdmi_driver__DOT__data[231] = 0U;
    __Vtable1_hdmi_driver__DOT__data[232] = 0U;
    __Vtable1_hdmi_driver__DOT__data[233] = 0U;
    __Vtable1_hdmi_driver__DOT__data[234] = 0U;
    __Vtable1_hdmi_driver__DOT__data[235] = 0U;
    __Vtable1_hdmi_driver__DOT__data[236] = 0U;
    __Vtable1_hdmi_driver__DOT__data[237] = 0U;
    __Vtable1_hdmi_driver__DOT__data[238] = 0U;
    __Vtable1_hdmi_driver__DOT__data[239] = 0U;
    __Vtable1_hdmi_driver__DOT__data[240] = 0U;
    __Vtable1_hdmi_driver__DOT__data[241] = 0U;
    __Vtable1_hdmi_driver__DOT__data[242] = 0U;
    __Vtable1_hdmi_driver__DOT__data[243] = 0U;
    __Vtable1_hdmi_driver__DOT__data[244] = 0U;
    __Vtable1_hdmi_driver__DOT__data[245] = 0U;
    __Vtable1_hdmi_driver__DOT__data[246] = 0U;
    __Vtable1_hdmi_driver__DOT__data[247] = 0U;
    __Vtable1_hdmi_driver__DOT__data[248] = 0U;
    __Vtable1_hdmi_driver__DOT__data[249] = 0U;
    __Vtable1_hdmi_driver__DOT__data[250] = 0U;
    __Vtable1_hdmi_driver__DOT__data[251] = 0U;
    __Vtable1_hdmi_driver__DOT__data[252] = 0U;
    __Vtable1_hdmi_driver__DOT__data[253] = 0U;
    __Vtable1_hdmi_driver__DOT__data[254] = 0U;
    __Vtable1_hdmi_driver__DOT__data[255] = 0U;
    __Vdly__hdmi_driver__DOT__byte_lut = VL_RAND_RESET_I(8);
    __VinpClk__TOP__clk_25 = VL_RAND_RESET_I(1);
    __VinpClk__TOP__mI2C_CTRL_CLK = VL_RAND_RESET_I(1);
    __VinpClk__TOP__hdmi_driver__DOT__done = VL_RAND_RESET_I(1);
    __Vchglast__TOP__clk_25 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mI2C_CTRL_CLK = VL_RAND_RESET_I(1);
    __Vchglast__TOP__hdmi_driver__DOT__done = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
