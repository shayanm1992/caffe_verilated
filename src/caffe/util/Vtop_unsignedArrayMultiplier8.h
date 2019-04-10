// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_unsignedArrayMultiplier8_H_
#define _Vtop_unsignedArrayMultiplier8_H_

#include "verilated.h"

class Vtop__Syms;

//----------

VL_MODULE(Vtop_unsignedArrayMultiplier8) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_OUT16(p,15,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint  all: 
    VL_SIG8(__PVT__pp1,7,0);
    VL_SIG8(__PVT__pp2,7,0);
    VL_SIG8(__PVT__pp3,7,0);
    VL_SIG8(__PVT__pp4,7,0);
    VL_SIG8(__PVT__ll__DOT__S,5,0);
    VL_SIG8(__PVT__hl__DOT__S,5,0);
    VL_SIG8(__PVT__lh__DOT__S,5,0);
    VL_SIG8(__PVT__hh__DOT__S,5,0);
    VL_SIG16(__PVT__ll__DOT__W,14,0);
    VL_SIG16(__PVT__ll__DOT__C,10,0);
    VL_SIG16(__PVT__hl__DOT__W,14,0);
    VL_SIG16(__PVT__hl__DOT__C,10,0);
    VL_SIG16(__PVT__lh__DOT__W,14,0);
    VL_SIG16(__PVT__lh__DOT__C,10,0);
    VL_SIG16(__PVT__hh__DOT__W,14,0);
    VL_SIG16(__PVT__hh__DOT__C,10,0);
    
    // LOCAL VARIABLES
    // Begin mtask footprint  all: 
    VL_SIG8(ll__DOT____Vcellout__fa01____pinNumber2,0,0);
    VL_SIG8(ll__DOT____Vcellout__fa02____pinNumber2,0,0);
    VL_SIG8(ll__DOT____Vcellout__ha02____pinNumber2,0,0);
    VL_SIG8(ll__DOT____Vcellout__fa03____pinNumber2,0,0);
    VL_SIG8(ll__DOT____Vcellout__fa03____pinNumber1,0,0);
    VL_SIG8(ll__DOT____Vcellout__fa04____pinNumber2,0,0);
    VL_SIG8(ll__DOT____Vcellout__fa04____pinNumber1,0,0);
    VL_SIG8(ll__DOT____Vcellout__fa05____pinNumber2,0,0);
    VL_SIG8(ll__DOT____Vcellout__fa06____pinNumber2,0,0);
    VL_SIG8(ll__DOT____Vcellout__fa07____pinNumber2,0,0);
    VL_SIG8(hl__DOT____Vcellout__fa01____pinNumber2,0,0);
    VL_SIG8(hl__DOT____Vcellout__fa02____pinNumber2,0,0);
    VL_SIG8(hl__DOT____Vcellout__ha02____pinNumber2,0,0);
    VL_SIG8(hl__DOT____Vcellout__fa03____pinNumber2,0,0);
    VL_SIG8(hl__DOT____Vcellout__fa03____pinNumber1,0,0);
    VL_SIG8(hl__DOT____Vcellout__fa04____pinNumber2,0,0);
    VL_SIG8(hl__DOT____Vcellout__fa04____pinNumber1,0,0);
    VL_SIG8(hl__DOT____Vcellout__fa05____pinNumber2,0,0);
    VL_SIG8(hl__DOT____Vcellout__fa06____pinNumber2,0,0);
    VL_SIG8(hl__DOT____Vcellout__fa07____pinNumber2,0,0);
    VL_SIG8(lh__DOT____Vcellout__fa01____pinNumber2,0,0);
    VL_SIG8(lh__DOT____Vcellout__fa02____pinNumber2,0,0);
    VL_SIG8(lh__DOT____Vcellout__ha02____pinNumber2,0,0);
    VL_SIG8(lh__DOT____Vcellout__fa03____pinNumber2,0,0);
    VL_SIG8(lh__DOT____Vcellout__fa03____pinNumber1,0,0);
    VL_SIG8(lh__DOT____Vcellout__fa04____pinNumber2,0,0);
    VL_SIG8(lh__DOT____Vcellout__fa04____pinNumber1,0,0);
    VL_SIG8(lh__DOT____Vcellout__fa05____pinNumber2,0,0);
    VL_SIG8(lh__DOT____Vcellout__fa06____pinNumber2,0,0);
    VL_SIG8(lh__DOT____Vcellout__fa07____pinNumber2,0,0);
    VL_SIG8(hh__DOT____Vcellout__fa01____pinNumber2,0,0);
    VL_SIG8(hh__DOT____Vcellout__fa02____pinNumber2,0,0);
    VL_SIG8(hh__DOT____Vcellout__ha02____pinNumber2,0,0);
    VL_SIG8(hh__DOT____Vcellout__fa03____pinNumber2,0,0);
    VL_SIG8(hh__DOT____Vcellout__fa03____pinNumber1,0,0);
    VL_SIG8(hh__DOT____Vcellout__fa04____pinNumber2,0,0);
    VL_SIG8(hh__DOT____Vcellout__fa04____pinNumber1,0,0);
    VL_SIG8(hh__DOT____Vcellout__fa05____pinNumber2,0,0);
    VL_SIG8(hh__DOT____Vcellout__fa06____pinNumber2,0,0);
    VL_SIG8(hh__DOT____Vcellout__fa07____pinNumber2,0,0);
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_unsignedArrayMultiplier8);  ///< Copying not allowed
  public:
    Vtop_unsignedArrayMultiplier8(const char* name="TOP");
    ~Vtop_unsignedArrayMultiplier8();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    void _combo__TOP__top__DOT__U1__DOT__hh__8(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__top__DOT__U1__DOT__hl__6(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__top__DOT__U1__DOT__lh__7(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__top__DOT__U1__DOT__ll__1(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__top__DOT__U1__DOT__ll__5(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
} VL_ATTR_ALIGNED(128);

#endif // guard
