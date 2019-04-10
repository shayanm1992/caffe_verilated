// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtop_H_
#define _Vtop_H_

#include "verilated.h"

class Vtop__Syms;
class Vtop_unsignedArrayMultiplier8;

//----------

VL_MODULE(Vtop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vtop_unsignedArrayMultiplier8*	__PVT__top__DOT__U1__DOT__ll;
    Vtop_unsignedArrayMultiplier8*	__PVT__top__DOT__U1__DOT__hl;
    Vtop_unsignedArrayMultiplier8*	__PVT__top__DOT__U1__DOT__lh;
    Vtop_unsignedArrayMultiplier8*	__PVT__top__DOT__U1__DOT__hh;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN16(a,15,0);
    VL_IN16(b,15,0);
    VL_OUT(r,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG16(top__DOT__a_temp,15,0);
    VL_SIG16(top__DOT__b_temp,15,0);
    VL_SIG(top__DOT__r_temp,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__ll__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__ll__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__ll__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__ll__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__ll__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__ll__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hl__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hl__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hl__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hl__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hl__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hl__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__lh__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__lh__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__lh__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__lh__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__lh__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__lh__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hh__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hh__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hh__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hh__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hh__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__ll__hh__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__ll__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__ll__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__ll__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__ll__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__ll__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__ll__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hl__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hl__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hl__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hl__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hl__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hl__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__lh__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__lh__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__lh__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__lh__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__lh__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__lh__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hh__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hh__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hh__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hh__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hh__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hl__hh__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__ll__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__ll__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__ll__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__ll__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__ll__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__ll__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hl__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hl__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hl__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hl__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hl__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hl__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__lh__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__lh__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__lh__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__lh__DOT____Vcellout__fa04____pinNumber1,0,0);
    };
    struct {
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__lh__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__lh__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hh__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hh__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hh__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hh__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hh__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__lh__hh__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__ll__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__ll__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__ll__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__ll__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__ll__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__ll__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hl__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hl__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hl__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hl__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hl__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hl__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__lh__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__lh__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__lh__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__lh__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__lh__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__lh__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hh__DOT____Vcellout__fa03____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hh__DOT____Vcellout__fa03____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hh__DOT____Vcellout__fa04____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hh__DOT____Vcellout__fa04____pinNumber1,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hh__DOT____Vcellout__fa06____pinNumber2,0,0);
	VL_SIG8(__Vchglast__TOP__top__DOT__U1__DOT__hh__hh__DOT____Vcellout__fa07____pinNumber2,0,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__ll__ll__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__ll__hl__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__ll__lh__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__ll__hh__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__hl__ll__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__hl__hl__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__hl__lh__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__hl__hh__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__lh__ll__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__lh__hl__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__lh__lh__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__lh__hh__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__hh__ll__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__hh__hl__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__hh__lh__DOT__C,10,0);
	VL_SIG16(__Vchglast__TOP__top__DOT__U1__DOT__hh__hh__DOT__C,10,0);
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__2(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp);
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
