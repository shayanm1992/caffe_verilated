// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_unsignedArrayMultiplier8.h" // For This
#include "Vtop__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_unsignedArrayMultiplier8) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_unsignedArrayMultiplier8::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_unsignedArrayMultiplier8::~Vtop_unsignedArrayMultiplier8() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vtop_unsignedArrayMultiplier8::_combo__TOP__top__DOT__U1__DOT__ll__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_unsignedArrayMultiplier8::_combo__TOP__top__DOT__U1__DOT__ll__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__ll__DOT__S = ((0x37U & (IData)(this->__PVT__ll__DOT__S)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa03____pinNumber1) 
				  << 3U));
    this->__PVT__ll__DOT__S = ((0x2fU & (IData)(this->__PVT__ll__DOT__S)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa04____pinNumber1) 
				  << 4U));
    this->__PVT__hl__DOT__S = ((0x37U & (IData)(this->__PVT__hl__DOT__S)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa03____pinNumber1) 
				  << 3U));
    this->__PVT__hl__DOT__S = ((0x2fU & (IData)(this->__PVT__hl__DOT__S)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa04____pinNumber1) 
				  << 4U));
    this->__PVT__lh__DOT__S = ((0x37U & (IData)(this->__PVT__lh__DOT__S)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa03____pinNumber1) 
				  << 3U));
    this->__PVT__lh__DOT__S = ((0x2fU & (IData)(this->__PVT__lh__DOT__S)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa04____pinNumber1) 
				  << 4U));
    this->__PVT__hh__DOT__S = ((0x37U & (IData)(this->__PVT__hh__DOT__S)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa03____pinNumber1) 
				  << 3U));
    this->__PVT__hh__DOT__S = ((0x2fU & (IData)(this->__PVT__hh__DOT__S)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa04____pinNumber1) 
				  << 4U));
    this->__PVT__ll__DOT__C = ((0x7dfU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa03____pinNumber2) 
				  << 5U));
    this->__PVT__ll__DOT__C = ((0x7bfU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa04____pinNumber2) 
				  << 6U));
    this->__PVT__ll__DOT__C = ((0x5ffU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa06____pinNumber2) 
				  << 9U));
    this->__PVT__ll__DOT__C = ((0x3ffU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa07____pinNumber2) 
				  << 0xaU));
    this->__PVT__hl__DOT__C = ((0x7dfU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa03____pinNumber2) 
				  << 5U));
    this->__PVT__hl__DOT__C = ((0x7bfU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa04____pinNumber2) 
				  << 6U));
    this->__PVT__hl__DOT__C = ((0x5ffU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa06____pinNumber2) 
				  << 9U));
    this->__PVT__hl__DOT__C = ((0x3ffU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa07____pinNumber2) 
				  << 0xaU));
    this->__PVT__lh__DOT__C = ((0x7dfU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa03____pinNumber2) 
				  << 5U));
    this->__PVT__lh__DOT__C = ((0x7bfU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa04____pinNumber2) 
				  << 6U));
    this->__PVT__lh__DOT__C = ((0x5ffU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa06____pinNumber2) 
				  << 9U));
    this->__PVT__lh__DOT__C = ((0x3ffU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa07____pinNumber2) 
				  << 0xaU));
    this->__PVT__hh__DOT__C = ((0x7dfU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa03____pinNumber2) 
				  << 5U));
    this->__PVT__hh__DOT__C = ((0x7bfU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa04____pinNumber2) 
				  << 6U));
    this->__PVT__hh__DOT__C = ((0x5ffU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa06____pinNumber2) 
				  << 9U));
    this->__PVT__hh__DOT__C = ((0x3ffU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa07____pinNumber2) 
				  << 0xaU));
}

VL_INLINE_OPT void Vtop_unsignedArrayMultiplier8::_combo__TOP__top__DOT__U1__DOT__ll__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_unsignedArrayMultiplier8::_combo__TOP__top__DOT__U1__DOT__ll__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__pp1 = ((0xfeU & (IData)(this->__PVT__pp1)) 
			| (1U & ((IData)(vlTOPp->top__DOT__a_temp) 
				 & (IData)(vlTOPp->top__DOT__b_temp))));
    this->__PVT__pp2 = ((0xfeU & (IData)(this->__PVT__pp2)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  >> 4U) & (IData)(vlTOPp->top__DOT__b_temp))));
    this->__PVT__pp3 = ((0xfeU & (IData)(this->__PVT__pp3)) 
			| (1U & ((IData)(vlTOPp->top__DOT__a_temp) 
				 & ((IData)(vlTOPp->top__DOT__b_temp) 
				    >> 4U))));
    this->__PVT__pp4 = ((0xfeU & (IData)(this->__PVT__pp4)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  & (IData)(vlTOPp->top__DOT__b_temp)) 
				 >> 4U)));
    this->__PVT__ll__DOT__W = ((0x7ffeU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (1U & ((IData)(vlTOPp->top__DOT__a_temp) 
					& ((IData)(vlTOPp->top__DOT__b_temp) 
					   >> 1U))));
    this->__PVT__ll__DOT__W = ((0x7ffdU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 1U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 1U))));
    this->__PVT__ll__DOT__W = ((0x7ffbU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 1U))));
    this->__PVT__ll__DOT__W = ((0x7ff7U & (IData)(this->__PVT__ll__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   << 3U))));
    this->__PVT__ll__DOT__W = ((0x7fefU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    & (IData)(vlTOPp->top__DOT__b_temp)) 
					   << 3U)));
    this->__PVT__ll__DOT__W = ((0x7fdfU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 4U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__ll__DOT__W = ((0x7fbfU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 5U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__ll__DOT__W = ((0x7f7fU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 5U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 7U))));
    this->__PVT__ll__DOT__W = ((0x7effU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 6U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__ll__DOT__W = ((0x7dffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     & (IData)(vlTOPp->top__DOT__b_temp)) 
					    << 7U)));
    this->__PVT__ll__DOT__W = ((0x7bffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 8U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__ll__DOT__W = ((0x77ffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 8U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 0xbU))));
    this->__PVT__ll__DOT__W = ((0x6fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 9U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 0xbU))));
    this->__PVT__ll__DOT__W = ((0x5fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 0xaU) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 0xbU))));
    this->__PVT__ll__DOT__W = ((0x3fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      & (IData)(vlTOPp->top__DOT__b_temp)) 
					     << 0xbU)));
    this->__PVT__hl__DOT__W = ((0x7ffeU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 4U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7ffdU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 3U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7ffbU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7ff7U & (IData)(this->__PVT__hl__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   << 3U))));
    this->__PVT__hl__DOT__W = ((0x7fefU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 1U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__hl__DOT__W = ((0x7fdfU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x20U & ((IData)(vlTOPp->top__DOT__a_temp) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__hl__DOT__W = ((0x7fbfU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 1U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__hl__DOT__W = ((0x7f7fU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 1U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 7U))));
    this->__PVT__hl__DOT__W = ((0x7effU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 2U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__hl__DOT__W = ((0x7dffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 3U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__hl__DOT__W = ((0x7bffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__hl__DOT__W = ((0x77ffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 0xbU))));
    this->__PVT__hl__DOT__W = ((0x6fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 5U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 0xbU))));
    this->__PVT__hl__DOT__W = ((0x5fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 6U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 0xbU))));
    this->__PVT__hl__DOT__W = ((0x3fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 7U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 0xbU))));
    this->__PVT__lh__DOT__W = ((0x7ffeU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (1U & ((IData)(vlTOPp->top__DOT__a_temp) 
					& ((IData)(vlTOPp->top__DOT__b_temp) 
					   >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7ffdU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 1U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7ffbU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7ff7U & (IData)(this->__PVT__lh__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 1U))));
    this->__PVT__lh__DOT__W = ((0x7fefU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 3U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__lh__DOT__W = ((0x7fdfU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 4U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__lh__DOT__W = ((0x7fbfU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 5U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__lh__DOT__W = ((0x7f7fU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 5U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__lh__DOT__W = ((0x7effU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 6U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__lh__DOT__W = ((0x7dffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 7U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__lh__DOT__W = ((0x7bffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 8U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__lh__DOT__W = ((0x77ffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 8U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__lh__DOT__W = ((0x6fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 9U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 7U))));
    this->__PVT__lh__DOT__W = ((0x5fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 0xaU) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 7U))));
    this->__PVT__lh__DOT__W = ((0x3fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 0xbU) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 7U))));
    this->__PVT__hh__DOT__W = ((0x7ffeU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 4U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 5U))));
    this->__PVT__hh__DOT__W = ((0x7ffdU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 3U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 5U))));
    this->__PVT__hh__DOT__W = ((0x7ffbU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 5U))));
    this->__PVT__hh__DOT__W = ((0x7ff7U & (IData)(this->__PVT__hh__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 1U))));
    this->__PVT__hh__DOT__W = ((0x7fefU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    & (IData)(vlTOPp->top__DOT__b_temp)) 
					   >> 1U)));
    this->__PVT__hh__DOT__W = ((0x7fdfU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x20U & ((IData)(vlTOPp->top__DOT__a_temp) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__hh__DOT__W = ((0x7fbfU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 1U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__hh__DOT__W = ((0x7f7fU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 1U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__hh__DOT__W = ((0x7effU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 2U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__hh__DOT__W = ((0x7dffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     & (IData)(vlTOPp->top__DOT__b_temp)) 
					    << 3U)));
    this->__PVT__hh__DOT__W = ((0x7bffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__hh__DOT__W = ((0x77ffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__hh__DOT__W = ((0x6fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 5U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 7U))));
    this->__PVT__hh__DOT__W = ((0x5fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 6U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 7U))));
    this->__PVT__hh__DOT__W = ((0x3fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      & (IData)(vlTOPp->top__DOT__b_temp)) 
					     << 7U)));
    this->__PVT__pp1 = ((0xfdU & (IData)(this->__PVT__pp1)) 
			| (2U & (((IData)(this->__PVT__ll__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 2U)))));
    this->__PVT__ll__DOT__C = ((0x7feU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__ll__DOT__W) 
					& ((IData)(this->__PVT__ll__DOT__W) 
					   >> 3U))));
    this->__PVT__pp2 = ((0xfdU & (IData)(this->__PVT__pp2)) 
			| (2U & (((IData)(this->__PVT__hl__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 2U)))));
    this->__PVT__hl__DOT__C = ((0x7feU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__hl__DOT__W) 
					& ((IData)(this->__PVT__hl__DOT__W) 
					   >> 3U))));
    this->__PVT__pp3 = ((0xfdU & (IData)(this->__PVT__pp3)) 
			| (2U & (((IData)(this->__PVT__lh__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 2U)))));
    this->__PVT__lh__DOT__C = ((0x7feU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__lh__DOT__W) 
					& ((IData)(this->__PVT__lh__DOT__W) 
					   >> 3U))));
    this->__PVT__pp4 = ((0xfdU & (IData)(this->__PVT__pp4)) 
			| (2U & (((IData)(this->__PVT__hh__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 2U)))));
    this->__PVT__hh__DOT__C = ((0x7feU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__hh__DOT__W) 
					& ((IData)(this->__PVT__hh__DOT__W) 
					   >> 3U))));
    this->ll__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__ll__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__ll__DOT__C))) 
	       | (((IData)(this->__PVT__ll__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__ll__DOT__C))));
    this->ll__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__ll__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__ll__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 1U))));
    this->ll__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__ll__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__ll__DOT__C) 
		  >> 2U)));
    this->ll__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__ll__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__ll__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 6U))));
    this->__PVT__pp1 = ((0x3fU & (IData)(this->__PVT__pp1)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__ll__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__ll__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__ll__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__ll__DOT__C) 
					   & ((IData)(this->__PVT__ll__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__ll__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__ll__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__ll__DOT__C) 
					     >> 4U))))));
    this->__PVT__ll__DOT__S = ((0x3eU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__ll__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__ll__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__ll__DOT__C))));
    this->__PVT__ll__DOT__S = ((0x3dU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__ll__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__ll__DOT__C)))));
    this->__PVT__ll__DOT__S = ((0x3bU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__ll__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__ll__DOT__C)))));
    this->__PVT__ll__DOT__S = ((0x1fU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__ll__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__ll__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__ll__DOT__C) 
						 >> 1U)))));
    this->hl__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__hl__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__hl__DOT__C))) 
	       | (((IData)(this->__PVT__hl__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__hl__DOT__C))));
    this->hl__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__hl__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__hl__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 1U))));
    this->hl__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__hl__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__hl__DOT__C) 
		  >> 2U)));
    this->hl__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__hl__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__hl__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 6U))));
    this->__PVT__pp2 = ((0x3fU & (IData)(this->__PVT__pp2)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__hl__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__hl__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__hl__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__hl__DOT__C) 
					   & ((IData)(this->__PVT__hl__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__hl__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__hl__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__hl__DOT__C) 
					     >> 4U))))));
    this->__PVT__hl__DOT__S = ((0x3eU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__hl__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__hl__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__hl__DOT__C))));
    this->__PVT__hl__DOT__S = ((0x3dU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__hl__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__hl__DOT__C)))));
    this->__PVT__hl__DOT__S = ((0x3bU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__hl__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__hl__DOT__C)))));
    this->__PVT__hl__DOT__S = ((0x1fU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__hl__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__hl__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__hl__DOT__C) 
						 >> 1U)))));
    this->lh__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__lh__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__lh__DOT__C))) 
	       | (((IData)(this->__PVT__lh__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__lh__DOT__C))));
    this->lh__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__lh__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__lh__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 1U))));
    this->lh__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__lh__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__lh__DOT__C) 
		  >> 2U)));
    this->lh__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__lh__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__lh__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 6U))));
    this->__PVT__pp3 = ((0x3fU & (IData)(this->__PVT__pp3)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__lh__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__lh__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__lh__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__lh__DOT__C) 
					   & ((IData)(this->__PVT__lh__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__lh__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__lh__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__lh__DOT__C) 
					     >> 4U))))));
    this->__PVT__lh__DOT__S = ((0x3eU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__lh__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__lh__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__lh__DOT__C))));
    this->__PVT__lh__DOT__S = ((0x3dU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__lh__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__lh__DOT__C)))));
    this->__PVT__lh__DOT__S = ((0x3bU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__lh__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__lh__DOT__C)))));
    this->__PVT__lh__DOT__S = ((0x1fU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__lh__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__lh__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__lh__DOT__C) 
						 >> 1U)))));
    this->hh__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__hh__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__hh__DOT__C))) 
	       | (((IData)(this->__PVT__hh__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__hh__DOT__C))));
    this->hh__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__hh__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__hh__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 1U))));
    this->hh__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__hh__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__hh__DOT__C) 
		  >> 2U)));
    this->hh__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__hh__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__hh__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 6U))));
    this->__PVT__pp4 = ((0x3fU & (IData)(this->__PVT__pp4)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__hh__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__hh__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__hh__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__hh__DOT__C) 
					   & ((IData)(this->__PVT__hh__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__hh__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__hh__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__hh__DOT__C) 
					     >> 4U))))));
    this->__PVT__hh__DOT__S = ((0x3eU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__hh__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__hh__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__hh__DOT__C))));
    this->__PVT__hh__DOT__S = ((0x3dU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__hh__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__hh__DOT__C)))));
    this->__PVT__hh__DOT__S = ((0x3bU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__hh__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__hh__DOT__C)))));
    this->__PVT__hh__DOT__S = ((0x1fU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__hh__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__hh__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__hh__DOT__C) 
						 >> 1U)))));
    this->__PVT__ll__DOT__C = ((0x7fdU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__ll__DOT__C = ((0x7fbU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__ll__DOT__C = ((0x7f7U & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__ll__DOT__C = ((0x77fU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__ll__DOT__C = ((0x7efU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__ll__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__ll__DOT__S) 
					      << 4U))));
    this->__PVT__ll__DOT__C = ((0x6ffU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__ll__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__ll__DOT__S) 
					       << 5U))));
    this->ll__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__ll__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__ll__DOT__C) 
			      >> 4U)));
    this->ll__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 4U))));
    this->ll__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__ll__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__ll__DOT__C) 
			      >> 5U)));
    this->ll__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 5U))));
    this->ll__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 8U))));
    this->ll__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 9U))));
    this->__PVT__pp1 = ((0xfbU & (IData)(this->__PVT__pp1)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__ll__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__ll__DOT__S) 
				    << 2U))));
    this->__PVT__pp1 = ((0xf7U & (IData)(this->__PVT__pp1)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__ll__DOT__S)))));
    this->__PVT__pp1 = ((0xefU & (IData)(this->__PVT__pp1)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__ll__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__ll__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__ll__DOT__C) 
					>> 4U)))));
    this->__PVT__pp1 = ((0xdfU & (IData)(this->__PVT__pp1)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__ll__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__ll__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__ll__DOT__C) 
					>> 4U)))));
    this->__PVT__hl__DOT__C = ((0x7fdU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__hl__DOT__C = ((0x7fbU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__hl__DOT__C = ((0x7f7U & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__hl__DOT__C = ((0x77fU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__hl__DOT__C = ((0x7efU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__hl__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__hl__DOT__S) 
					      << 4U))));
    this->__PVT__hl__DOT__C = ((0x6ffU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__hl__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__hl__DOT__S) 
					       << 5U))));
    this->hl__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__hl__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__hl__DOT__C) 
			      >> 4U)));
    this->hl__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 4U))));
    this->hl__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__hl__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__hl__DOT__C) 
			      >> 5U)));
    this->hl__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 5U))));
    this->hl__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 8U))));
    this->hl__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 9U))));
    this->__PVT__pp2 = ((0xfbU & (IData)(this->__PVT__pp2)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__hl__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__hl__DOT__S) 
				    << 2U))));
    this->__PVT__pp2 = ((0xf7U & (IData)(this->__PVT__pp2)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__hl__DOT__S)))));
    this->__PVT__pp2 = ((0xefU & (IData)(this->__PVT__pp2)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__hl__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__hl__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__hl__DOT__C) 
					>> 4U)))));
    this->__PVT__pp2 = ((0xdfU & (IData)(this->__PVT__pp2)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__hl__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__hl__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__hl__DOT__C) 
					>> 4U)))));
    this->__PVT__lh__DOT__C = ((0x7fdU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__lh__DOT__C = ((0x7fbU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__lh__DOT__C = ((0x7f7U & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__lh__DOT__C = ((0x77fU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__lh__DOT__C = ((0x7efU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__lh__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__lh__DOT__S) 
					      << 4U))));
    this->__PVT__lh__DOT__C = ((0x6ffU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__lh__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__lh__DOT__S) 
					       << 5U))));
    this->lh__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__lh__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__lh__DOT__C) 
			      >> 4U)));
    this->lh__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 4U))));
    this->lh__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__lh__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__lh__DOT__C) 
			      >> 5U)));
    this->lh__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 5U))));
    this->lh__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 8U))));
    this->lh__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 9U))));
    this->__PVT__pp3 = ((0xfbU & (IData)(this->__PVT__pp3)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__lh__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__lh__DOT__S) 
				    << 2U))));
    this->__PVT__pp3 = ((0xf7U & (IData)(this->__PVT__pp3)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__lh__DOT__S)))));
    this->__PVT__pp3 = ((0xefU & (IData)(this->__PVT__pp3)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__lh__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__lh__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__lh__DOT__C) 
					>> 4U)))));
    this->__PVT__pp3 = ((0xdfU & (IData)(this->__PVT__pp3)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__lh__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__lh__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__lh__DOT__C) 
					>> 4U)))));
    this->__PVT__hh__DOT__C = ((0x7fdU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__hh__DOT__C = ((0x7fbU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__hh__DOT__C = ((0x7f7U & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__hh__DOT__C = ((0x77fU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__hh__DOT__C = ((0x7efU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__hh__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__hh__DOT__S) 
					      << 4U))));
    this->__PVT__hh__DOT__C = ((0x6ffU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__hh__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__hh__DOT__S) 
					       << 5U))));
    this->hh__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__hh__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__hh__DOT__C) 
			      >> 4U)));
    this->hh__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 4U))));
    this->hh__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__hh__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__hh__DOT__C) 
			      >> 5U)));
    this->hh__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 5U))));
    this->hh__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 8U))));
    this->hh__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 9U))));
    this->__PVT__pp4 = ((0xfbU & (IData)(this->__PVT__pp4)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__hh__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__hh__DOT__S) 
				    << 2U))));
    this->__PVT__pp4 = ((0xf7U & (IData)(this->__PVT__pp4)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__hh__DOT__S)))));
    this->__PVT__pp4 = ((0xefU & (IData)(this->__PVT__pp4)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__hh__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__hh__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__hh__DOT__C) 
					>> 4U)))));
    this->__PVT__pp4 = ((0xdfU & (IData)(this->__PVT__pp4)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__hh__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__hh__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__hh__DOT__C) 
					>> 4U)))));
}

VL_INLINE_OPT void Vtop_unsignedArrayMultiplier8::_combo__TOP__top__DOT__U1__DOT__hl__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_unsignedArrayMultiplier8::_combo__TOP__top__DOT__U1__DOT__hl__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__pp1 = ((0xfeU & (IData)(this->__PVT__pp1)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  >> 8U) & (IData)(vlTOPp->top__DOT__b_temp))));
    this->__PVT__pp2 = ((0xfeU & (IData)(this->__PVT__pp2)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  >> 0xcU) & (IData)(vlTOPp->top__DOT__b_temp))));
    this->__PVT__pp3 = ((0xfeU & (IData)(this->__PVT__pp3)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  >> 8U) & ((IData)(vlTOPp->top__DOT__b_temp) 
					    >> 4U))));
    this->__PVT__pp4 = ((0xfeU & (IData)(this->__PVT__pp4)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  >> 0xcU) & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 4U))));
    this->__PVT__ll__DOT__W = ((0x7ffeU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 8U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 1U))));
    this->__PVT__ll__DOT__W = ((0x7ffdU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 7U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 1U))));
    this->__PVT__ll__DOT__W = ((0x7ffbU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 6U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 1U))));
    this->__PVT__ll__DOT__W = ((0x7ff7U & (IData)(this->__PVT__ll__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 6U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   << 3U))));
    this->__PVT__ll__DOT__W = ((0x7fefU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 5U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__ll__DOT__W = ((0x7fdfU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 4U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__ll__DOT__W = ((0x7fbfU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 3U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__ll__DOT__W = ((0x7f7fU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 3U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 7U))));
    this->__PVT__ll__DOT__W = ((0x7effU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 2U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__ll__DOT__W = ((0x7dffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 1U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__ll__DOT__W = ((0x7bffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x400U & ((IData)(vlTOPp->top__DOT__a_temp) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__ll__DOT__W = ((0x77ffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x800U & ((IData)(vlTOPp->top__DOT__a_temp) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 0xbU))));
    this->__PVT__ll__DOT__W = ((0x6fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 1U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 0xbU))));
    this->__PVT__ll__DOT__W = ((0x5fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 2U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 0xbU))));
    this->__PVT__ll__DOT__W = ((0x3fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 3U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 0xbU))));
    this->__PVT__hl__DOT__W = ((0x7ffeU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xcU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7ffdU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xbU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7ffbU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xaU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7ff7U & (IData)(this->__PVT__hl__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xaU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 << 3U))));
    this->__PVT__hl__DOT__W = ((0x7fefU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 9U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__hl__DOT__W = ((0x7fdfU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 8U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__hl__DOT__W = ((0x7fbfU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 7U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__hl__DOT__W = ((0x7f7fU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 7U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 7U))));
    this->__PVT__hl__DOT__W = ((0x7effU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 6U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__hl__DOT__W = ((0x7dffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 5U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__hl__DOT__W = ((0x7bffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__hl__DOT__W = ((0x77ffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 0xbU))));
    this->__PVT__hl__DOT__W = ((0x6fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      >> 3U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 0xbU))));
    this->__PVT__hl__DOT__W = ((0x5fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      >> 2U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 0xbU))));
    this->__PVT__hl__DOT__W = ((0x3fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      >> 1U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 0xbU))));
    this->__PVT__lh__DOT__W = ((0x7ffeU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 8U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7ffdU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 7U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7ffbU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 6U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7ff7U & (IData)(this->__PVT__lh__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 6U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 1U))));
    this->__PVT__lh__DOT__W = ((0x7fefU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 5U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__lh__DOT__W = ((0x7fdfU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 4U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__lh__DOT__W = ((0x7fbfU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 3U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__lh__DOT__W = ((0x7f7fU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 3U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__lh__DOT__W = ((0x7effU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 2U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__lh__DOT__W = ((0x7dffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 1U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__lh__DOT__W = ((0x7bffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x400U & ((IData)(vlTOPp->top__DOT__a_temp) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__lh__DOT__W = ((0x77ffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x800U & ((IData)(vlTOPp->top__DOT__a_temp) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__lh__DOT__W = ((0x6fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 1U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 7U))));
    this->__PVT__lh__DOT__W = ((0x5fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 2U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 7U))));
    this->__PVT__lh__DOT__W = ((0x3fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 3U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 7U))));
    this->__PVT__hh__DOT__W = ((0x7ffeU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xcU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 5U))));
    this->__PVT__hh__DOT__W = ((0x7ffdU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xbU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 5U))));
    this->__PVT__hh__DOT__W = ((0x7ffbU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xaU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 5U))));
    this->__PVT__hh__DOT__W = ((0x7ff7U & (IData)(this->__PVT__hh__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xaU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 1U))));
    this->__PVT__hh__DOT__W = ((0x7fefU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 9U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__hh__DOT__W = ((0x7fdfU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 8U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__hh__DOT__W = ((0x7fbfU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 7U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__hh__DOT__W = ((0x7f7fU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 7U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      << 3U))));
    this->__PVT__hh__DOT__W = ((0x7effU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 6U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__hh__DOT__W = ((0x7dffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 5U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__hh__DOT__W = ((0x7bffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__hh__DOT__W = ((0x77ffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 7U))));
    this->__PVT__hh__DOT__W = ((0x6fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      >> 3U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 7U))));
    this->__PVT__hh__DOT__W = ((0x5fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      >> 2U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 7U))));
    this->__PVT__hh__DOT__W = ((0x3fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      >> 1U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 7U))));
    this->__PVT__pp1 = ((0xfdU & (IData)(this->__PVT__pp1)) 
			| (2U & (((IData)(this->__PVT__ll__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 2U)))));
    this->__PVT__ll__DOT__C = ((0x7feU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__ll__DOT__W) 
					& ((IData)(this->__PVT__ll__DOT__W) 
					   >> 3U))));
    this->__PVT__pp2 = ((0xfdU & (IData)(this->__PVT__pp2)) 
			| (2U & (((IData)(this->__PVT__hl__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 2U)))));
    this->__PVT__hl__DOT__C = ((0x7feU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__hl__DOT__W) 
					& ((IData)(this->__PVT__hl__DOT__W) 
					   >> 3U))));
    this->__PVT__pp3 = ((0xfdU & (IData)(this->__PVT__pp3)) 
			| (2U & (((IData)(this->__PVT__lh__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 2U)))));
    this->__PVT__lh__DOT__C = ((0x7feU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__lh__DOT__W) 
					& ((IData)(this->__PVT__lh__DOT__W) 
					   >> 3U))));
    this->__PVT__pp4 = ((0xfdU & (IData)(this->__PVT__pp4)) 
			| (2U & (((IData)(this->__PVT__hh__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 2U)))));
    this->__PVT__hh__DOT__C = ((0x7feU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__hh__DOT__W) 
					& ((IData)(this->__PVT__hh__DOT__W) 
					   >> 3U))));
    this->ll__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__ll__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__ll__DOT__C))) 
	       | (((IData)(this->__PVT__ll__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__ll__DOT__C))));
    this->ll__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__ll__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__ll__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 1U))));
    this->ll__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__ll__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__ll__DOT__C) 
		  >> 2U)));
    this->ll__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__ll__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__ll__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 6U))));
    this->__PVT__pp1 = ((0x3fU & (IData)(this->__PVT__pp1)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__ll__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__ll__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__ll__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__ll__DOT__C) 
					   & ((IData)(this->__PVT__ll__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__ll__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__ll__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__ll__DOT__C) 
					     >> 4U))))));
    this->__PVT__ll__DOT__S = ((0x3eU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__ll__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__ll__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__ll__DOT__C))));
    this->__PVT__ll__DOT__S = ((0x3dU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__ll__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__ll__DOT__C)))));
    this->__PVT__ll__DOT__S = ((0x3bU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__ll__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__ll__DOT__C)))));
    this->__PVT__ll__DOT__S = ((0x1fU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__ll__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__ll__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__ll__DOT__C) 
						 >> 1U)))));
    this->hl__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__hl__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__hl__DOT__C))) 
	       | (((IData)(this->__PVT__hl__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__hl__DOT__C))));
    this->hl__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__hl__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__hl__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 1U))));
    this->hl__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__hl__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__hl__DOT__C) 
		  >> 2U)));
    this->hl__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__hl__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__hl__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 6U))));
    this->__PVT__pp2 = ((0x3fU & (IData)(this->__PVT__pp2)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__hl__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__hl__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__hl__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__hl__DOT__C) 
					   & ((IData)(this->__PVT__hl__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__hl__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__hl__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__hl__DOT__C) 
					     >> 4U))))));
    this->__PVT__hl__DOT__S = ((0x3eU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__hl__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__hl__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__hl__DOT__C))));
    this->__PVT__hl__DOT__S = ((0x3dU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__hl__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__hl__DOT__C)))));
    this->__PVT__hl__DOT__S = ((0x3bU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__hl__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__hl__DOT__C)))));
    this->__PVT__hl__DOT__S = ((0x1fU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__hl__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__hl__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__hl__DOT__C) 
						 >> 1U)))));
    this->lh__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__lh__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__lh__DOT__C))) 
	       | (((IData)(this->__PVT__lh__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__lh__DOT__C))));
    this->lh__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__lh__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__lh__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 1U))));
    this->lh__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__lh__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__lh__DOT__C) 
		  >> 2U)));
    this->lh__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__lh__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__lh__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 6U))));
    this->__PVT__pp3 = ((0x3fU & (IData)(this->__PVT__pp3)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__lh__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__lh__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__lh__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__lh__DOT__C) 
					   & ((IData)(this->__PVT__lh__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__lh__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__lh__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__lh__DOT__C) 
					     >> 4U))))));
    this->__PVT__lh__DOT__S = ((0x3eU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__lh__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__lh__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__lh__DOT__C))));
    this->__PVT__lh__DOT__S = ((0x3dU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__lh__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__lh__DOT__C)))));
    this->__PVT__lh__DOT__S = ((0x3bU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__lh__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__lh__DOT__C)))));
    this->__PVT__lh__DOT__S = ((0x1fU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__lh__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__lh__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__lh__DOT__C) 
						 >> 1U)))));
    this->hh__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__hh__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__hh__DOT__C))) 
	       | (((IData)(this->__PVT__hh__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__hh__DOT__C))));
    this->hh__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__hh__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__hh__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 1U))));
    this->hh__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__hh__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__hh__DOT__C) 
		  >> 2U)));
    this->hh__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__hh__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__hh__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 6U))));
    this->__PVT__pp4 = ((0x3fU & (IData)(this->__PVT__pp4)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__hh__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__hh__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__hh__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__hh__DOT__C) 
					   & ((IData)(this->__PVT__hh__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__hh__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__hh__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__hh__DOT__C) 
					     >> 4U))))));
    this->__PVT__hh__DOT__S = ((0x3eU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__hh__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__hh__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__hh__DOT__C))));
    this->__PVT__hh__DOT__S = ((0x3dU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__hh__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__hh__DOT__C)))));
    this->__PVT__hh__DOT__S = ((0x3bU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__hh__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__hh__DOT__C)))));
    this->__PVT__hh__DOT__S = ((0x1fU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__hh__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__hh__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__hh__DOT__C) 
						 >> 1U)))));
    this->__PVT__ll__DOT__C = ((0x7fdU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__ll__DOT__C = ((0x7fbU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__ll__DOT__C = ((0x7f7U & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__ll__DOT__C = ((0x77fU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__ll__DOT__C = ((0x7efU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__ll__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__ll__DOT__S) 
					      << 4U))));
    this->__PVT__ll__DOT__C = ((0x6ffU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__ll__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__ll__DOT__S) 
					       << 5U))));
    this->ll__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__ll__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__ll__DOT__C) 
			      >> 4U)));
    this->ll__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 4U))));
    this->ll__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__ll__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__ll__DOT__C) 
			      >> 5U)));
    this->ll__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 5U))));
    this->ll__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 8U))));
    this->ll__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 9U))));
    this->__PVT__pp1 = ((0xfbU & (IData)(this->__PVT__pp1)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__ll__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__ll__DOT__S) 
				    << 2U))));
    this->__PVT__pp1 = ((0xf7U & (IData)(this->__PVT__pp1)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__ll__DOT__S)))));
    this->__PVT__pp1 = ((0xefU & (IData)(this->__PVT__pp1)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__ll__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__ll__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__ll__DOT__C) 
					>> 4U)))));
    this->__PVT__pp1 = ((0xdfU & (IData)(this->__PVT__pp1)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__ll__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__ll__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__ll__DOT__C) 
					>> 4U)))));
    this->__PVT__hl__DOT__C = ((0x7fdU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__hl__DOT__C = ((0x7fbU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__hl__DOT__C = ((0x7f7U & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__hl__DOT__C = ((0x77fU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__hl__DOT__C = ((0x7efU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__hl__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__hl__DOT__S) 
					      << 4U))));
    this->__PVT__hl__DOT__C = ((0x6ffU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__hl__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__hl__DOT__S) 
					       << 5U))));
    this->hl__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__hl__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__hl__DOT__C) 
			      >> 4U)));
    this->hl__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 4U))));
    this->hl__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__hl__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__hl__DOT__C) 
			      >> 5U)));
    this->hl__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 5U))));
    this->hl__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 8U))));
    this->hl__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 9U))));
    this->__PVT__pp2 = ((0xfbU & (IData)(this->__PVT__pp2)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__hl__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__hl__DOT__S) 
				    << 2U))));
    this->__PVT__pp2 = ((0xf7U & (IData)(this->__PVT__pp2)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__hl__DOT__S)))));
    this->__PVT__pp2 = ((0xefU & (IData)(this->__PVT__pp2)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__hl__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__hl__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__hl__DOT__C) 
					>> 4U)))));
    this->__PVT__pp2 = ((0xdfU & (IData)(this->__PVT__pp2)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__hl__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__hl__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__hl__DOT__C) 
					>> 4U)))));
    this->__PVT__lh__DOT__C = ((0x7fdU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__lh__DOT__C = ((0x7fbU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__lh__DOT__C = ((0x7f7U & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__lh__DOT__C = ((0x77fU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__lh__DOT__C = ((0x7efU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__lh__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__lh__DOT__S) 
					      << 4U))));
    this->__PVT__lh__DOT__C = ((0x6ffU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__lh__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__lh__DOT__S) 
					       << 5U))));
    this->lh__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__lh__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__lh__DOT__C) 
			      >> 4U)));
    this->lh__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 4U))));
    this->lh__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__lh__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__lh__DOT__C) 
			      >> 5U)));
    this->lh__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 5U))));
    this->lh__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 8U))));
    this->lh__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 9U))));
    this->__PVT__pp3 = ((0xfbU & (IData)(this->__PVT__pp3)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__lh__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__lh__DOT__S) 
				    << 2U))));
    this->__PVT__pp3 = ((0xf7U & (IData)(this->__PVT__pp3)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__lh__DOT__S)))));
    this->__PVT__pp3 = ((0xefU & (IData)(this->__PVT__pp3)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__lh__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__lh__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__lh__DOT__C) 
					>> 4U)))));
    this->__PVT__pp3 = ((0xdfU & (IData)(this->__PVT__pp3)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__lh__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__lh__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__lh__DOT__C) 
					>> 4U)))));
    this->__PVT__hh__DOT__C = ((0x7fdU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__hh__DOT__C = ((0x7fbU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__hh__DOT__C = ((0x7f7U & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__hh__DOT__C = ((0x77fU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__hh__DOT__C = ((0x7efU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__hh__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__hh__DOT__S) 
					      << 4U))));
    this->__PVT__hh__DOT__C = ((0x6ffU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__hh__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__hh__DOT__S) 
					       << 5U))));
    this->hh__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__hh__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__hh__DOT__C) 
			      >> 4U)));
    this->hh__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 4U))));
    this->hh__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__hh__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__hh__DOT__C) 
			      >> 5U)));
    this->hh__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 5U))));
    this->hh__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 8U))));
    this->hh__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 9U))));
    this->__PVT__pp4 = ((0xfbU & (IData)(this->__PVT__pp4)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__hh__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__hh__DOT__S) 
				    << 2U))));
    this->__PVT__pp4 = ((0xf7U & (IData)(this->__PVT__pp4)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__hh__DOT__S)))));
    this->__PVT__pp4 = ((0xefU & (IData)(this->__PVT__pp4)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__hh__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__hh__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__hh__DOT__C) 
					>> 4U)))));
    this->__PVT__pp4 = ((0xdfU & (IData)(this->__PVT__pp4)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__hh__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__hh__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__hh__DOT__C) 
					>> 4U)))));
}

VL_INLINE_OPT void Vtop_unsignedArrayMultiplier8::_combo__TOP__top__DOT__U1__DOT__lh__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_unsignedArrayMultiplier8::_combo__TOP__top__DOT__U1__DOT__lh__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__pp1 = ((0xfeU & (IData)(this->__PVT__pp1)) 
			| (1U & ((IData)(vlTOPp->top__DOT__a_temp) 
				 & ((IData)(vlTOPp->top__DOT__b_temp) 
				    >> 8U))));
    this->__PVT__pp2 = ((0xfeU & (IData)(this->__PVT__pp2)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  >> 4U) & ((IData)(vlTOPp->top__DOT__b_temp) 
					    >> 8U))));
    this->__PVT__pp3 = ((0xfeU & (IData)(this->__PVT__pp3)) 
			| (1U & ((IData)(vlTOPp->top__DOT__a_temp) 
				 & ((IData)(vlTOPp->top__DOT__b_temp) 
				    >> 0xcU))));
    this->__PVT__pp4 = ((0xfeU & (IData)(this->__PVT__pp4)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  >> 4U) & ((IData)(vlTOPp->top__DOT__b_temp) 
					    >> 0xcU))));
    this->__PVT__ll__DOT__W = ((0x7ffeU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (1U & ((IData)(vlTOPp->top__DOT__a_temp) 
					& ((IData)(vlTOPp->top__DOT__b_temp) 
					   >> 9U))));
    this->__PVT__ll__DOT__W = ((0x7ffdU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 1U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 9U))));
    this->__PVT__ll__DOT__W = ((0x7ffbU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 9U))));
    this->__PVT__ll__DOT__W = ((0x7ff7U & (IData)(this->__PVT__ll__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 5U))));
    this->__PVT__ll__DOT__W = ((0x7fefU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 3U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__ll__DOT__W = ((0x7fdfU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 4U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__ll__DOT__W = ((0x7fbfU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 5U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__ll__DOT__W = ((0x7f7fU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 5U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__ll__DOT__W = ((0x7effU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 6U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__ll__DOT__W = ((0x7dffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 7U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__ll__DOT__W = ((0x7bffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 8U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__ll__DOT__W = ((0x77ffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 8U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__ll__DOT__W = ((0x6fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 9U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 3U))));
    this->__PVT__ll__DOT__W = ((0x5fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 0xaU) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 3U))));
    this->__PVT__ll__DOT__W = ((0x3fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 0xbU) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 3U))));
    this->__PVT__hl__DOT__W = ((0x7ffeU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 4U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 9U))));
    this->__PVT__hl__DOT__W = ((0x7ffdU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 3U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 9U))));
    this->__PVT__hl__DOT__W = ((0x7ffbU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 9U))));
    this->__PVT__hl__DOT__W = ((0x7ff7U & (IData)(this->__PVT__hl__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 5U))));
    this->__PVT__hl__DOT__W = ((0x7fefU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 1U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__hl__DOT__W = ((0x7fdfU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x20U & ((IData)(vlTOPp->top__DOT__a_temp) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__hl__DOT__W = ((0x7fbfU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 1U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__hl__DOT__W = ((0x7f7fU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 1U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7effU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 2U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7dffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 3U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7bffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__hl__DOT__W = ((0x77ffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__hl__DOT__W = ((0x6fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 5U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 3U))));
    this->__PVT__hl__DOT__W = ((0x5fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 6U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 3U))));
    this->__PVT__hl__DOT__W = ((0x3fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 7U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 3U))));
    this->__PVT__lh__DOT__W = ((0x7ffeU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (1U & ((IData)(vlTOPp->top__DOT__a_temp) 
					& ((IData)(vlTOPp->top__DOT__b_temp) 
					   >> 0xdU))));
    this->__PVT__lh__DOT__W = ((0x7ffdU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 1U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 0xdU))));
    this->__PVT__lh__DOT__W = ((0x7ffbU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 0xdU))));
    this->__PVT__lh__DOT__W = ((0x7ff7U & (IData)(this->__PVT__lh__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 << 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 9U))));
    this->__PVT__lh__DOT__W = ((0x7fefU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 3U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 9U))));
    this->__PVT__lh__DOT__W = ((0x7fdfU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 4U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 9U))));
    this->__PVT__lh__DOT__W = ((0x7fbfU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 5U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 9U))));
    this->__PVT__lh__DOT__W = ((0x7f7fU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 5U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7effU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 6U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7dffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 7U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7bffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 8U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 5U))));
    this->__PVT__lh__DOT__W = ((0x77ffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 8U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__lh__DOT__W = ((0x6fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 9U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						>> 1U))));
    this->__PVT__lh__DOT__W = ((0x5fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 0xaU) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						>> 1U))));
    this->__PVT__lh__DOT__W = ((0x3fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 0xbU) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						>> 1U))));
    this->__PVT__hh__DOT__W = ((0x7ffeU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 4U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 0xdU))));
    this->__PVT__hh__DOT__W = ((0x7ffdU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 3U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 0xdU))));
    this->__PVT__hh__DOT__W = ((0x7ffbU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 0xdU))));
    this->__PVT__hh__DOT__W = ((0x7ff7U & (IData)(this->__PVT__hh__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 2U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 9U))));
    this->__PVT__hh__DOT__W = ((0x7fefU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 1U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 9U))));
    this->__PVT__hh__DOT__W = ((0x7fdfU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x20U & ((IData)(vlTOPp->top__DOT__a_temp) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 9U))));
    this->__PVT__hh__DOT__W = ((0x7fbfU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 1U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 9U))));
    this->__PVT__hh__DOT__W = ((0x7f7fU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    << 1U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__hh__DOT__W = ((0x7effU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 2U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 5U))));
    this->__PVT__hh__DOT__W = ((0x7dffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 3U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 5U))));
    this->__PVT__hh__DOT__W = ((0x7bffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 5U))));
    this->__PVT__hh__DOT__W = ((0x77ffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     << 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__hh__DOT__W = ((0x6fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 5U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						>> 1U))));
    this->__PVT__hh__DOT__W = ((0x5fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 6U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						>> 1U))));
    this->__PVT__hh__DOT__W = ((0x3fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 7U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						>> 1U))));
    this->__PVT__pp1 = ((0xfdU & (IData)(this->__PVT__pp1)) 
			| (2U & (((IData)(this->__PVT__ll__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 2U)))));
    this->__PVT__ll__DOT__C = ((0x7feU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__ll__DOT__W) 
					& ((IData)(this->__PVT__ll__DOT__W) 
					   >> 3U))));
    this->__PVT__pp2 = ((0xfdU & (IData)(this->__PVT__pp2)) 
			| (2U & (((IData)(this->__PVT__hl__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 2U)))));
    this->__PVT__hl__DOT__C = ((0x7feU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__hl__DOT__W) 
					& ((IData)(this->__PVT__hl__DOT__W) 
					   >> 3U))));
    this->__PVT__pp3 = ((0xfdU & (IData)(this->__PVT__pp3)) 
			| (2U & (((IData)(this->__PVT__lh__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 2U)))));
    this->__PVT__lh__DOT__C = ((0x7feU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__lh__DOT__W) 
					& ((IData)(this->__PVT__lh__DOT__W) 
					   >> 3U))));
    this->__PVT__pp4 = ((0xfdU & (IData)(this->__PVT__pp4)) 
			| (2U & (((IData)(this->__PVT__hh__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 2U)))));
    this->__PVT__hh__DOT__C = ((0x7feU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__hh__DOT__W) 
					& ((IData)(this->__PVT__hh__DOT__W) 
					   >> 3U))));
    this->ll__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__ll__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__ll__DOT__C))) 
	       | (((IData)(this->__PVT__ll__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__ll__DOT__C))));
    this->ll__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__ll__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__ll__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 1U))));
    this->ll__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__ll__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__ll__DOT__C) 
		  >> 2U)));
    this->ll__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__ll__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__ll__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 6U))));
    this->__PVT__pp1 = ((0x3fU & (IData)(this->__PVT__pp1)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__ll__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__ll__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__ll__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__ll__DOT__C) 
					   & ((IData)(this->__PVT__ll__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__ll__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__ll__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__ll__DOT__C) 
					     >> 4U))))));
    this->__PVT__ll__DOT__S = ((0x3eU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__ll__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__ll__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__ll__DOT__C))));
    this->__PVT__ll__DOT__S = ((0x3dU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__ll__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__ll__DOT__C)))));
    this->__PVT__ll__DOT__S = ((0x3bU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__ll__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__ll__DOT__C)))));
    this->__PVT__ll__DOT__S = ((0x1fU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__ll__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__ll__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__ll__DOT__C) 
						 >> 1U)))));
    this->hl__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__hl__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__hl__DOT__C))) 
	       | (((IData)(this->__PVT__hl__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__hl__DOT__C))));
    this->hl__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__hl__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__hl__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 1U))));
    this->hl__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__hl__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__hl__DOT__C) 
		  >> 2U)));
    this->hl__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__hl__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__hl__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 6U))));
    this->__PVT__pp2 = ((0x3fU & (IData)(this->__PVT__pp2)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__hl__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__hl__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__hl__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__hl__DOT__C) 
					   & ((IData)(this->__PVT__hl__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__hl__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__hl__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__hl__DOT__C) 
					     >> 4U))))));
    this->__PVT__hl__DOT__S = ((0x3eU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__hl__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__hl__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__hl__DOT__C))));
    this->__PVT__hl__DOT__S = ((0x3dU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__hl__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__hl__DOT__C)))));
    this->__PVT__hl__DOT__S = ((0x3bU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__hl__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__hl__DOT__C)))));
    this->__PVT__hl__DOT__S = ((0x1fU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__hl__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__hl__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__hl__DOT__C) 
						 >> 1U)))));
    this->lh__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__lh__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__lh__DOT__C))) 
	       | (((IData)(this->__PVT__lh__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__lh__DOT__C))));
    this->lh__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__lh__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__lh__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 1U))));
    this->lh__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__lh__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__lh__DOT__C) 
		  >> 2U)));
    this->lh__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__lh__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__lh__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 6U))));
    this->__PVT__pp3 = ((0x3fU & (IData)(this->__PVT__pp3)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__lh__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__lh__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__lh__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__lh__DOT__C) 
					   & ((IData)(this->__PVT__lh__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__lh__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__lh__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__lh__DOT__C) 
					     >> 4U))))));
    this->__PVT__lh__DOT__S = ((0x3eU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__lh__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__lh__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__lh__DOT__C))));
    this->__PVT__lh__DOT__S = ((0x3dU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__lh__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__lh__DOT__C)))));
    this->__PVT__lh__DOT__S = ((0x3bU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__lh__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__lh__DOT__C)))));
    this->__PVT__lh__DOT__S = ((0x1fU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__lh__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__lh__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__lh__DOT__C) 
						 >> 1U)))));
    this->hh__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__hh__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__hh__DOT__C))) 
	       | (((IData)(this->__PVT__hh__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__hh__DOT__C))));
    this->hh__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__hh__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__hh__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 1U))));
    this->hh__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__hh__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__hh__DOT__C) 
		  >> 2U)));
    this->hh__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__hh__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__hh__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 6U))));
    this->__PVT__pp4 = ((0x3fU & (IData)(this->__PVT__pp4)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__hh__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__hh__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__hh__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__hh__DOT__C) 
					   & ((IData)(this->__PVT__hh__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__hh__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__hh__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__hh__DOT__C) 
					     >> 4U))))));
    this->__PVT__hh__DOT__S = ((0x3eU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__hh__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__hh__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__hh__DOT__C))));
    this->__PVT__hh__DOT__S = ((0x3dU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__hh__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__hh__DOT__C)))));
    this->__PVT__hh__DOT__S = ((0x3bU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__hh__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__hh__DOT__C)))));
    this->__PVT__hh__DOT__S = ((0x1fU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__hh__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__hh__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__hh__DOT__C) 
						 >> 1U)))));
    this->__PVT__ll__DOT__C = ((0x7fdU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__ll__DOT__C = ((0x7fbU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__ll__DOT__C = ((0x7f7U & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__ll__DOT__C = ((0x77fU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__ll__DOT__C = ((0x7efU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__ll__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__ll__DOT__S) 
					      << 4U))));
    this->__PVT__ll__DOT__C = ((0x6ffU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__ll__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__ll__DOT__S) 
					       << 5U))));
    this->ll__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__ll__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__ll__DOT__C) 
			      >> 4U)));
    this->ll__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 4U))));
    this->ll__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__ll__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__ll__DOT__C) 
			      >> 5U)));
    this->ll__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 5U))));
    this->ll__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 8U))));
    this->ll__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 9U))));
    this->__PVT__pp1 = ((0xfbU & (IData)(this->__PVT__pp1)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__ll__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__ll__DOT__S) 
				    << 2U))));
    this->__PVT__pp1 = ((0xf7U & (IData)(this->__PVT__pp1)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__ll__DOT__S)))));
    this->__PVT__pp1 = ((0xefU & (IData)(this->__PVT__pp1)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__ll__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__ll__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__ll__DOT__C) 
					>> 4U)))));
    this->__PVT__pp1 = ((0xdfU & (IData)(this->__PVT__pp1)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__ll__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__ll__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__ll__DOT__C) 
					>> 4U)))));
    this->__PVT__hl__DOT__C = ((0x7fdU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__hl__DOT__C = ((0x7fbU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__hl__DOT__C = ((0x7f7U & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__hl__DOT__C = ((0x77fU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__hl__DOT__C = ((0x7efU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__hl__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__hl__DOT__S) 
					      << 4U))));
    this->__PVT__hl__DOT__C = ((0x6ffU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__hl__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__hl__DOT__S) 
					       << 5U))));
    this->hl__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__hl__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__hl__DOT__C) 
			      >> 4U)));
    this->hl__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 4U))));
    this->hl__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__hl__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__hl__DOT__C) 
			      >> 5U)));
    this->hl__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 5U))));
    this->hl__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 8U))));
    this->hl__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 9U))));
    this->__PVT__pp2 = ((0xfbU & (IData)(this->__PVT__pp2)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__hl__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__hl__DOT__S) 
				    << 2U))));
    this->__PVT__pp2 = ((0xf7U & (IData)(this->__PVT__pp2)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__hl__DOT__S)))));
    this->__PVT__pp2 = ((0xefU & (IData)(this->__PVT__pp2)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__hl__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__hl__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__hl__DOT__C) 
					>> 4U)))));
    this->__PVT__pp2 = ((0xdfU & (IData)(this->__PVT__pp2)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__hl__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__hl__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__hl__DOT__C) 
					>> 4U)))));
    this->__PVT__lh__DOT__C = ((0x7fdU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__lh__DOT__C = ((0x7fbU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__lh__DOT__C = ((0x7f7U & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__lh__DOT__C = ((0x77fU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__lh__DOT__C = ((0x7efU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__lh__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__lh__DOT__S) 
					      << 4U))));
    this->__PVT__lh__DOT__C = ((0x6ffU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__lh__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__lh__DOT__S) 
					       << 5U))));
    this->lh__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__lh__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__lh__DOT__C) 
			      >> 4U)));
    this->lh__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 4U))));
    this->lh__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__lh__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__lh__DOT__C) 
			      >> 5U)));
    this->lh__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 5U))));
    this->lh__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 8U))));
    this->lh__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 9U))));
    this->__PVT__pp3 = ((0xfbU & (IData)(this->__PVT__pp3)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__lh__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__lh__DOT__S) 
				    << 2U))));
    this->__PVT__pp3 = ((0xf7U & (IData)(this->__PVT__pp3)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__lh__DOT__S)))));
    this->__PVT__pp3 = ((0xefU & (IData)(this->__PVT__pp3)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__lh__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__lh__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__lh__DOT__C) 
					>> 4U)))));
    this->__PVT__pp3 = ((0xdfU & (IData)(this->__PVT__pp3)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__lh__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__lh__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__lh__DOT__C) 
					>> 4U)))));
    this->__PVT__hh__DOT__C = ((0x7fdU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__hh__DOT__C = ((0x7fbU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__hh__DOT__C = ((0x7f7U & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__hh__DOT__C = ((0x77fU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__hh__DOT__C = ((0x7efU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__hh__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__hh__DOT__S) 
					      << 4U))));
    this->__PVT__hh__DOT__C = ((0x6ffU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__hh__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__hh__DOT__S) 
					       << 5U))));
    this->hh__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__hh__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__hh__DOT__C) 
			      >> 4U)));
    this->hh__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 4U))));
    this->hh__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__hh__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__hh__DOT__C) 
			      >> 5U)));
    this->hh__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 5U))));
    this->hh__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 8U))));
    this->hh__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 9U))));
    this->__PVT__pp4 = ((0xfbU & (IData)(this->__PVT__pp4)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__hh__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__hh__DOT__S) 
				    << 2U))));
    this->__PVT__pp4 = ((0xf7U & (IData)(this->__PVT__pp4)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__hh__DOT__S)))));
    this->__PVT__pp4 = ((0xefU & (IData)(this->__PVT__pp4)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__hh__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__hh__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__hh__DOT__C) 
					>> 4U)))));
    this->__PVT__pp4 = ((0xdfU & (IData)(this->__PVT__pp4)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__hh__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__hh__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__hh__DOT__C) 
					>> 4U)))));
}

VL_INLINE_OPT void Vtop_unsignedArrayMultiplier8::_combo__TOP__top__DOT__U1__DOT__hh__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_unsignedArrayMultiplier8::_combo__TOP__top__DOT__U1__DOT__hh__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__pp1 = ((0xfeU & (IData)(this->__PVT__pp1)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  & (IData)(vlTOPp->top__DOT__b_temp)) 
				 >> 8U)));
    this->__PVT__pp2 = ((0xfeU & (IData)(this->__PVT__pp2)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  >> 0xcU) & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 8U))));
    this->__PVT__pp3 = ((0xfeU & (IData)(this->__PVT__pp3)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  >> 8U) & ((IData)(vlTOPp->top__DOT__b_temp) 
					    >> 0xcU))));
    this->__PVT__pp4 = ((0xfeU & (IData)(this->__PVT__pp4)) 
			| (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
				  & (IData)(vlTOPp->top__DOT__b_temp)) 
				 >> 0xcU)));
    this->__PVT__ll__DOT__W = ((0x7ffeU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 8U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 9U))));
    this->__PVT__ll__DOT__W = ((0x7ffdU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 7U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 9U))));
    this->__PVT__ll__DOT__W = ((0x7ffbU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 6U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 9U))));
    this->__PVT__ll__DOT__W = ((0x7ff7U & (IData)(this->__PVT__ll__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 6U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 5U))));
    this->__PVT__ll__DOT__W = ((0x7fefU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    & (IData)(vlTOPp->top__DOT__b_temp)) 
					   >> 5U)));
    this->__PVT__ll__DOT__W = ((0x7fdfU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 4U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__ll__DOT__W = ((0x7fbfU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 3U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__ll__DOT__W = ((0x7f7fU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 3U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__ll__DOT__W = ((0x7effU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 2U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__ll__DOT__W = ((0x7dffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     & (IData)(vlTOPp->top__DOT__b_temp)) 
					    >> 1U)));
    this->__PVT__ll__DOT__W = ((0x7bffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x400U & ((IData)(vlTOPp->top__DOT__a_temp) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__ll__DOT__W = ((0x77ffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x800U & ((IData)(vlTOPp->top__DOT__a_temp) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__ll__DOT__W = ((0x6fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 1U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 3U))));
    this->__PVT__ll__DOT__W = ((0x5fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 2U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 3U))));
    this->__PVT__ll__DOT__W = ((0x3fffU & (IData)(this->__PVT__ll__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      & (IData)(vlTOPp->top__DOT__b_temp)) 
					     << 3U)));
    this->__PVT__hl__DOT__W = ((0x7ffeU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xcU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 9U))));
    this->__PVT__hl__DOT__W = ((0x7ffdU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xbU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 9U))));
    this->__PVT__hl__DOT__W = ((0x7ffbU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xaU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 9U))));
    this->__PVT__hl__DOT__W = ((0x7ff7U & (IData)(this->__PVT__hl__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xaU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 5U))));
    this->__PVT__hl__DOT__W = ((0x7fefU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 9U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__hl__DOT__W = ((0x7fdfU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 8U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__hl__DOT__W = ((0x7fbfU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 7U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__hl__DOT__W = ((0x7f7fU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 7U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7effU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 6U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7dffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 5U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__hl__DOT__W = ((0x7bffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__hl__DOT__W = ((0x77ffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       << 3U))));
    this->__PVT__hl__DOT__W = ((0x6fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      >> 3U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 3U))));
    this->__PVT__hl__DOT__W = ((0x5fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      >> 2U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 3U))));
    this->__PVT__hl__DOT__W = ((0x3fffU & (IData)(this->__PVT__hl__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      >> 1U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						<< 3U))));
    this->__PVT__lh__DOT__W = ((0x7ffeU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 8U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 0xdU))));
    this->__PVT__lh__DOT__W = ((0x7ffdU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 7U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 0xdU))));
    this->__PVT__lh__DOT__W = ((0x7ffbU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 6U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 0xdU))));
    this->__PVT__lh__DOT__W = ((0x7ff7U & (IData)(this->__PVT__lh__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 6U) & ((IData)(vlTOPp->top__DOT__b_temp) 
						   >> 9U))));
    this->__PVT__lh__DOT__W = ((0x7fefU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 5U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 9U))));
    this->__PVT__lh__DOT__W = ((0x7fdfU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 4U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 9U))));
    this->__PVT__lh__DOT__W = ((0x7fbfU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 3U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 9U))));
    this->__PVT__lh__DOT__W = ((0x7f7fU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 3U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7effU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 2U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7dffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 1U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 5U))));
    this->__PVT__lh__DOT__W = ((0x7bffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x400U & ((IData)(vlTOPp->top__DOT__a_temp) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 5U))));
    this->__PVT__lh__DOT__W = ((0x77ffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x800U & ((IData)(vlTOPp->top__DOT__a_temp) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__lh__DOT__W = ((0x6fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 1U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						>> 1U))));
    this->__PVT__lh__DOT__W = ((0x5fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 2U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						>> 1U))));
    this->__PVT__lh__DOT__W = ((0x3fffU & (IData)(this->__PVT__lh__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      << 3U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						>> 1U))));
    this->__PVT__hh__DOT__W = ((0x7ffeU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (1U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xcU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 0xdU))));
    this->__PVT__hh__DOT__W = ((0x7ffdU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (2U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xbU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 0xdU))));
    this->__PVT__hh__DOT__W = ((0x7ffbU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (4U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xaU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 0xdU))));
    this->__PVT__hh__DOT__W = ((0x7ff7U & (IData)(this->__PVT__hh__DOT__W)) 
			       | (8U & (((IData)(vlTOPp->top__DOT__a_temp) 
					 >> 0xaU) & 
					((IData)(vlTOPp->top__DOT__b_temp) 
					 >> 9U))));
    this->__PVT__hh__DOT__W = ((0x7fefU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x10U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    & (IData)(vlTOPp->top__DOT__b_temp)) 
					   >> 9U)));
    this->__PVT__hh__DOT__W = ((0x7fdfU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x20U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 8U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 9U))));
    this->__PVT__hh__DOT__W = ((0x7fbfU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x40U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 7U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 9U))));
    this->__PVT__hh__DOT__W = ((0x7f7fU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x80U & (((IData)(vlTOPp->top__DOT__a_temp) 
					    >> 7U) 
					   & ((IData)(vlTOPp->top__DOT__b_temp) 
					      >> 5U))));
    this->__PVT__hh__DOT__W = ((0x7effU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x100U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 6U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 5U))));
    this->__PVT__hh__DOT__W = ((0x7dffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x200U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     & (IData)(vlTOPp->top__DOT__b_temp)) 
					    >> 5U)));
    this->__PVT__hh__DOT__W = ((0x7bffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x400U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 5U))));
    this->__PVT__hh__DOT__W = ((0x77ffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x800U & (((IData)(vlTOPp->top__DOT__a_temp) 
					     >> 4U) 
					    & ((IData)(vlTOPp->top__DOT__b_temp) 
					       >> 1U))));
    this->__PVT__hh__DOT__W = ((0x6fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x1000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      >> 3U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						>> 1U))));
    this->__PVT__hh__DOT__W = ((0x5fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x2000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      >> 2U) 
					     & ((IData)(vlTOPp->top__DOT__b_temp) 
						>> 1U))));
    this->__PVT__hh__DOT__W = ((0x3fffU & (IData)(this->__PVT__hh__DOT__W)) 
			       | (0x4000U & (((IData)(vlTOPp->top__DOT__a_temp) 
					      & (IData)(vlTOPp->top__DOT__b_temp)) 
					     >> 1U)));
    this->__PVT__pp1 = ((0xfdU & (IData)(this->__PVT__pp1)) 
			| (2U & (((IData)(this->__PVT__ll__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 2U)))));
    this->__PVT__ll__DOT__C = ((0x7feU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__ll__DOT__W) 
					& ((IData)(this->__PVT__ll__DOT__W) 
					   >> 3U))));
    this->__PVT__pp2 = ((0xfdU & (IData)(this->__PVT__pp2)) 
			| (2U & (((IData)(this->__PVT__hl__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 2U)))));
    this->__PVT__hl__DOT__C = ((0x7feU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__hl__DOT__W) 
					& ((IData)(this->__PVT__hl__DOT__W) 
					   >> 3U))));
    this->__PVT__pp3 = ((0xfdU & (IData)(this->__PVT__pp3)) 
			| (2U & (((IData)(this->__PVT__lh__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 2U)))));
    this->__PVT__lh__DOT__C = ((0x7feU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__lh__DOT__W) 
					& ((IData)(this->__PVT__lh__DOT__W) 
					   >> 3U))));
    this->__PVT__pp4 = ((0xfdU & (IData)(this->__PVT__pp4)) 
			| (2U & (((IData)(this->__PVT__hh__DOT__W) 
				  << 1U) ^ (0x3ffffffeU 
					    & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 2U)))));
    this->__PVT__hh__DOT__C = ((0x7feU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (1U & ((IData)(this->__PVT__hh__DOT__W) 
					& ((IData)(this->__PVT__hh__DOT__W) 
					   >> 3U))));
    this->ll__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__ll__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__ll__DOT__C))) 
	       | (((IData)(this->__PVT__ll__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__ll__DOT__C))));
    this->ll__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__ll__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__ll__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 1U))));
    this->ll__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__ll__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__ll__DOT__C) 
		  >> 2U)));
    this->ll__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__ll__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__ll__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 6U))));
    this->__PVT__pp1 = ((0x3fU & (IData)(this->__PVT__pp1)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__ll__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__ll__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__ll__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__ll__DOT__C) 
					   & ((IData)(this->__PVT__ll__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__ll__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__ll__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__ll__DOT__C) 
					     >> 4U))))));
    this->__PVT__ll__DOT__S = ((0x3eU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__ll__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__ll__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__ll__DOT__C))));
    this->__PVT__ll__DOT__S = ((0x3dU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__ll__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__ll__DOT__C)))));
    this->__PVT__ll__DOT__S = ((0x3bU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__ll__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__ll__DOT__C)))));
    this->__PVT__ll__DOT__S = ((0x1fU & (IData)(this->__PVT__ll__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__ll__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__ll__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__ll__DOT__C) 
						 >> 1U)))));
    this->hl__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__hl__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__hl__DOT__C))) 
	       | (((IData)(this->__PVT__hl__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__hl__DOT__C))));
    this->hl__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__hl__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__hl__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 1U))));
    this->hl__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__hl__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__hl__DOT__C) 
		  >> 2U)));
    this->hl__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__hl__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__hl__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 6U))));
    this->__PVT__pp2 = ((0x3fU & (IData)(this->__PVT__pp2)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__hl__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__hl__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__hl__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__hl__DOT__C) 
					   & ((IData)(this->__PVT__hl__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__hl__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__hl__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__hl__DOT__C) 
					     >> 4U))))));
    this->__PVT__hl__DOT__S = ((0x3eU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__hl__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__hl__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__hl__DOT__C))));
    this->__PVT__hl__DOT__S = ((0x3dU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__hl__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__hl__DOT__C)))));
    this->__PVT__hl__DOT__S = ((0x3bU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__hl__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__hl__DOT__C)))));
    this->__PVT__hl__DOT__S = ((0x1fU & (IData)(this->__PVT__hl__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__hl__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__hl__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__hl__DOT__C) 
						 >> 1U)))));
    this->lh__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__lh__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__lh__DOT__C))) 
	       | (((IData)(this->__PVT__lh__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__lh__DOT__C))));
    this->lh__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__lh__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__lh__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 1U))));
    this->lh__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__lh__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__lh__DOT__C) 
		  >> 2U)));
    this->lh__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__lh__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__lh__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 6U))));
    this->__PVT__pp3 = ((0x3fU & (IData)(this->__PVT__pp3)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__lh__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__lh__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__lh__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__lh__DOT__C) 
					   & ((IData)(this->__PVT__lh__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__lh__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__lh__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__lh__DOT__C) 
					     >> 4U))))));
    this->__PVT__lh__DOT__S = ((0x3eU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__lh__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__lh__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__lh__DOT__C))));
    this->__PVT__lh__DOT__S = ((0x3dU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__lh__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__lh__DOT__C)))));
    this->__PVT__lh__DOT__S = ((0x3bU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__lh__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__lh__DOT__C)))));
    this->__PVT__lh__DOT__S = ((0x1fU & (IData)(this->__PVT__lh__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__lh__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__lh__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__lh__DOT__C) 
						 >> 1U)))));
    this->hh__DOT____Vcellout__fa01____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 1U) 
		& (((IData)(this->__PVT__hh__DOT__W) 
		    >> 4U) | (IData)(this->__PVT__hh__DOT__C))) 
	       | (((IData)(this->__PVT__hh__DOT__W) 
		   >> 4U) & (IData)(this->__PVT__hh__DOT__C))));
    this->hh__DOT____Vcellout__fa02____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 2U) 
		& (((IData)(this->__PVT__hh__DOT__W) 
		    >> 5U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 1U))) | (((IData)(this->__PVT__hh__DOT__W) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 1U))));
    this->hh__DOT____Vcellout__ha02____pinNumber2 = 
	(1U & (((IData)(this->__PVT__hh__DOT__W) >> 6U) 
	       & ((IData)(this->__PVT__hh__DOT__C) 
		  >> 2U)));
    this->hh__DOT____Vcellout__fa05____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xaU) 
		& (((IData)(this->__PVT__hh__DOT__C) 
		    >> 3U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 6U))) | (((IData)(this->__PVT__hh__DOT__C) 
					   >> 3U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 6U))));
    this->__PVT__pp4 = ((0x3fU & (IData)(this->__PVT__pp4)) 
			| ((0x80U & ((0x1ffff80U & 
				      (((IData)(this->__PVT__hh__DOT__W) 
					>> 7U) & ((0xffffff80U 
						   & (IData)(this->__PVT__hh__DOT__C)) 
						  | (0x1fffff80U 
						     & ((IData)(this->__PVT__hh__DOT__C) 
							>> 3U))))) 
				     | (0x1fffff80U 
					& ((IData)(this->__PVT__hh__DOT__C) 
					   & ((IData)(this->__PVT__hh__DOT__C) 
					      >> 3U))))) 
			   | (0x40U & (((0xffffc0U 
					 & ((IData)(this->__PVT__hh__DOT__W) 
					    >> 8U)) 
					^ (0x7fffffc0U 
					   & ((IData)(this->__PVT__hh__DOT__C) 
					      >> 1U))) 
				       ^ (0xfffffc0U 
					  & ((IData)(this->__PVT__hh__DOT__C) 
					     >> 4U))))));
    this->__PVT__hh__DOT__S = ((0x3eU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (1U & ((((IData)(this->__PVT__hh__DOT__W) 
					  >> 1U) ^ 
					 ((IData)(this->__PVT__hh__DOT__W) 
					  >> 4U)) ^ (IData)(this->__PVT__hh__DOT__C))));
    this->__PVT__hh__DOT__S = ((0x3dU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (2U & (((0x7ffffffeU 
					  & ((IData)(this->__PVT__hh__DOT__W) 
					     >> 1U)) 
					 ^ (0xffffffeU 
					    & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 4U))) 
					^ (0xfffffffeU 
					   & (IData)(this->__PVT__hh__DOT__C)))));
    this->__PVT__hh__DOT__S = ((0x3bU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (4U & ((0xffffffcU 
					 & ((IData)(this->__PVT__hh__DOT__W) 
					    >> 4U)) 
					^ (0xfffffffcU 
					   & (IData)(this->__PVT__hh__DOT__C)))));
    this->__PVT__hh__DOT__S = ((0x1fU & (IData)(this->__PVT__hh__DOT__S)) 
			       | (0x20U & (((0x7ffffe0U 
					     & ((IData)(this->__PVT__hh__DOT__W) 
						>> 5U)) 
					    ^ (0xffffffe0U 
					       & ((IData)(this->__PVT__hh__DOT__C) 
						  << 2U))) 
					   ^ (0x7fffffe0U 
					      & ((IData)(this->__PVT__hh__DOT__C) 
						 >> 1U)))));
    this->__PVT__ll__DOT__C = ((0x7fdU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__ll__DOT__C = ((0x7fbU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__ll__DOT__C = ((0x7f7U & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__ll__DOT__C = ((0x77fU & (IData)(this->__PVT__ll__DOT__C)) 
			       | ((IData)(this->ll__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__ll__DOT__C = ((0x7efU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__ll__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__ll__DOT__S) 
					      << 4U))));
    this->__PVT__ll__DOT__C = ((0x6ffU & (IData)(this->__PVT__ll__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__ll__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__ll__DOT__S) 
					       << 5U))));
    this->ll__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__ll__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__ll__DOT__C) 
			      >> 4U)));
    this->ll__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 4U))));
    this->ll__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__ll__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__ll__DOT__C) 
			      >> 5U)));
    this->ll__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 5U))));
    this->ll__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 8U))));
    this->ll__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__ll__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__ll__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__ll__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__ll__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__ll__DOT__C) 
					   >> 9U))));
    this->__PVT__pp1 = ((0xfbU & (IData)(this->__PVT__pp1)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__ll__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__ll__DOT__S) 
				    << 2U))));
    this->__PVT__pp1 = ((0xf7U & (IData)(this->__PVT__pp1)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__ll__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__ll__DOT__S)))));
    this->__PVT__pp1 = ((0xefU & (IData)(this->__PVT__pp1)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__ll__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__ll__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__ll__DOT__C) 
					>> 4U)))));
    this->__PVT__pp1 = ((0xdfU & (IData)(this->__PVT__pp1)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__ll__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__ll__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__ll__DOT__C) 
					>> 4U)))));
    this->__PVT__hl__DOT__C = ((0x7fdU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__hl__DOT__C = ((0x7fbU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__hl__DOT__C = ((0x7f7U & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__hl__DOT__C = ((0x77fU & (IData)(this->__PVT__hl__DOT__C)) 
			       | ((IData)(this->hl__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__hl__DOT__C = ((0x7efU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__hl__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__hl__DOT__S) 
					      << 4U))));
    this->__PVT__hl__DOT__C = ((0x6ffU & (IData)(this->__PVT__hl__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__hl__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__hl__DOT__S) 
					       << 5U))));
    this->hl__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__hl__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__hl__DOT__C) 
			      >> 4U)));
    this->hl__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 4U))));
    this->hl__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__hl__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__hl__DOT__C) 
			      >> 5U)));
    this->hl__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 5U))));
    this->hl__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 8U))));
    this->hl__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hl__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__hl__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__hl__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__hl__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hl__DOT__C) 
					   >> 9U))));
    this->__PVT__pp2 = ((0xfbU & (IData)(this->__PVT__pp2)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__hl__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__hl__DOT__S) 
				    << 2U))));
    this->__PVT__pp2 = ((0xf7U & (IData)(this->__PVT__pp2)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__hl__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__hl__DOT__S)))));
    this->__PVT__pp2 = ((0xefU & (IData)(this->__PVT__pp2)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__hl__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__hl__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__hl__DOT__C) 
					>> 4U)))));
    this->__PVT__pp2 = ((0xdfU & (IData)(this->__PVT__pp2)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__hl__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__hl__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__hl__DOT__C) 
					>> 4U)))));
    this->__PVT__lh__DOT__C = ((0x7fdU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__lh__DOT__C = ((0x7fbU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__lh__DOT__C = ((0x7f7U & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__lh__DOT__C = ((0x77fU & (IData)(this->__PVT__lh__DOT__C)) 
			       | ((IData)(this->lh__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__lh__DOT__C = ((0x7efU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__lh__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__lh__DOT__S) 
					      << 4U))));
    this->__PVT__lh__DOT__C = ((0x6ffU & (IData)(this->__PVT__lh__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__lh__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__lh__DOT__S) 
					       << 5U))));
    this->lh__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__lh__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__lh__DOT__C) 
			      >> 4U)));
    this->lh__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 4U))));
    this->lh__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__lh__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__lh__DOT__C) 
			      >> 5U)));
    this->lh__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 5U))));
    this->lh__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 8U))));
    this->lh__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__lh__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__lh__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__lh__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__lh__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__lh__DOT__C) 
					   >> 9U))));
    this->__PVT__pp3 = ((0xfbU & (IData)(this->__PVT__pp3)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__lh__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__lh__DOT__S) 
				    << 2U))));
    this->__PVT__pp3 = ((0xf7U & (IData)(this->__PVT__pp3)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__lh__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__lh__DOT__S)))));
    this->__PVT__pp3 = ((0xefU & (IData)(this->__PVT__pp3)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__lh__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__lh__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__lh__DOT__C) 
					>> 4U)))));
    this->__PVT__pp3 = ((0xdfU & (IData)(this->__PVT__pp3)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__lh__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__lh__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__lh__DOT__C) 
					>> 4U)))));
    this->__PVT__hh__DOT__C = ((0x7fdU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa01____pinNumber2) 
				  << 1U));
    this->__PVT__hh__DOT__C = ((0x7fbU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa02____pinNumber2) 
				  << 2U));
    this->__PVT__hh__DOT__C = ((0x7f7U & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__ha02____pinNumber2) 
				  << 3U));
    this->__PVT__hh__DOT__C = ((0x77fU & (IData)(this->__PVT__hh__DOT__C)) 
			       | ((IData)(this->hh__DOT____Vcellout__fa05____pinNumber2) 
				  << 7U));
    this->__PVT__hh__DOT__C = ((0x7efU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (0x10U & (((IData)(this->__PVT__hh__DOT__W) 
					    >> 3U) 
					   & ((IData)(this->__PVT__hh__DOT__S) 
					      << 4U))));
    this->__PVT__hh__DOT__C = ((0x6ffU & (IData)(this->__PVT__hh__DOT__C)) 
			       | (0x100U & (((IData)(this->__PVT__hh__DOT__W) 
					     >> 3U) 
					    & ((IData)(this->__PVT__hh__DOT__S) 
					       << 5U))));
    this->hh__DOT____Vcellout__fa03____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 8U) 
		^ ((IData)(this->__PVT__hh__DOT__S) 
		   >> 1U)) ^ ((IData)(this->__PVT__hh__DOT__C) 
			      >> 4U)));
    this->hh__DOT____Vcellout__fa03____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 8U) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 1U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 4U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 1U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 4U))));
    this->hh__DOT____Vcellout__fa04____pinNumber1 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 9U) 
		^ ((IData)(this->__PVT__hh__DOT__S) 
		   >> 2U)) ^ ((IData)(this->__PVT__hh__DOT__C) 
			      >> 5U)));
    this->hh__DOT____Vcellout__fa04____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 9U) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 2U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 5U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 2U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 5U))));
    this->hh__DOT____Vcellout__fa06____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xcU) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 4U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 8U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 4U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 8U))));
    this->hh__DOT____Vcellout__fa07____pinNumber2 = 
	(1U & ((((IData)(this->__PVT__hh__DOT__W) >> 0xdU) 
		& (((IData)(this->__PVT__hh__DOT__S) 
		    >> 5U) | ((IData)(this->__PVT__hh__DOT__C) 
			      >> 9U))) | (((IData)(this->__PVT__hh__DOT__S) 
					   >> 5U) & 
					  ((IData)(this->__PVT__hh__DOT__C) 
					   >> 9U))));
    this->__PVT__pp4 = ((0xfbU & (IData)(this->__PVT__pp4)) 
			| (4U & ((0x7fffffcU & ((IData)(this->__PVT__hh__DOT__W) 
						>> 5U)) 
				 ^ ((IData)(this->__PVT__hh__DOT__S) 
				    << 2U))));
    this->__PVT__pp4 = ((0xf7U & (IData)(this->__PVT__pp4)) 
			| (8U & ((0xfffff8U & ((IData)(this->__PVT__hh__DOT__W) 
					       >> 8U)) 
				 ^ (0xfffffff8U & (IData)(this->__PVT__hh__DOT__S)))));
    this->__PVT__pp4 = ((0xefU & (IData)(this->__PVT__pp4)) 
			| (0x10U & (((0xfffff0U & ((IData)(this->__PVT__hh__DOT__W) 
						   >> 8U)) 
				     ^ (0xfffffff0U 
					& (IData)(this->__PVT__hh__DOT__S))) 
				    ^ (0xffffff0U & 
				       ((IData)(this->__PVT__hh__DOT__C) 
					>> 4U)))));
    this->__PVT__pp4 = ((0xdfU & (IData)(this->__PVT__pp4)) 
			| (0x20U & (((0xffffe0U & ((IData)(this->__PVT__hh__DOT__W) 
						   >> 8U)) 
				     ^ (0xffffffe0U 
					& (IData)(this->__PVT__hh__DOT__S))) 
				    ^ (0xfffffe0U & 
				       ((IData)(this->__PVT__hh__DOT__C) 
					>> 4U)))));
}

void Vtop_unsignedArrayMultiplier8::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_unsignedArrayMultiplier8::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(8);
    b = VL_RAND_RESET_I(8);
    p = VL_RAND_RESET_I(16);
    __PVT__pp1 = VL_RAND_RESET_I(8);
    __PVT__pp2 = VL_RAND_RESET_I(8);
    __PVT__pp3 = VL_RAND_RESET_I(8);
    __PVT__pp4 = VL_RAND_RESET_I(8);
    __PVT__ll__DOT__W = VL_RAND_RESET_I(15);
    __PVT__ll__DOT__C = VL_RAND_RESET_I(11);
    __PVT__ll__DOT__S = VL_RAND_RESET_I(6);
    ll__DOT____Vcellout__fa01____pinNumber2 = VL_RAND_RESET_I(1);
    ll__DOT____Vcellout__fa02____pinNumber2 = VL_RAND_RESET_I(1);
    ll__DOT____Vcellout__ha02____pinNumber2 = VL_RAND_RESET_I(1);
    ll__DOT____Vcellout__fa03____pinNumber2 = VL_RAND_RESET_I(1);
    ll__DOT____Vcellout__fa03____pinNumber1 = VL_RAND_RESET_I(1);
    ll__DOT____Vcellout__fa04____pinNumber2 = VL_RAND_RESET_I(1);
    ll__DOT____Vcellout__fa04____pinNumber1 = VL_RAND_RESET_I(1);
    ll__DOT____Vcellout__fa05____pinNumber2 = VL_RAND_RESET_I(1);
    ll__DOT____Vcellout__fa06____pinNumber2 = VL_RAND_RESET_I(1);
    ll__DOT____Vcellout__fa07____pinNumber2 = VL_RAND_RESET_I(1);
    __PVT__hl__DOT__W = VL_RAND_RESET_I(15);
    __PVT__hl__DOT__C = VL_RAND_RESET_I(11);
    __PVT__hl__DOT__S = VL_RAND_RESET_I(6);
    hl__DOT____Vcellout__fa01____pinNumber2 = VL_RAND_RESET_I(1);
    hl__DOT____Vcellout__fa02____pinNumber2 = VL_RAND_RESET_I(1);
    hl__DOT____Vcellout__ha02____pinNumber2 = VL_RAND_RESET_I(1);
    hl__DOT____Vcellout__fa03____pinNumber2 = VL_RAND_RESET_I(1);
    hl__DOT____Vcellout__fa03____pinNumber1 = VL_RAND_RESET_I(1);
    hl__DOT____Vcellout__fa04____pinNumber2 = VL_RAND_RESET_I(1);
    hl__DOT____Vcellout__fa04____pinNumber1 = VL_RAND_RESET_I(1);
    hl__DOT____Vcellout__fa05____pinNumber2 = VL_RAND_RESET_I(1);
    hl__DOT____Vcellout__fa06____pinNumber2 = VL_RAND_RESET_I(1);
    hl__DOT____Vcellout__fa07____pinNumber2 = VL_RAND_RESET_I(1);
    __PVT__lh__DOT__W = VL_RAND_RESET_I(15);
    __PVT__lh__DOT__C = VL_RAND_RESET_I(11);
    __PVT__lh__DOT__S = VL_RAND_RESET_I(6);
    lh__DOT____Vcellout__fa01____pinNumber2 = VL_RAND_RESET_I(1);
    lh__DOT____Vcellout__fa02____pinNumber2 = VL_RAND_RESET_I(1);
    lh__DOT____Vcellout__ha02____pinNumber2 = VL_RAND_RESET_I(1);
    lh__DOT____Vcellout__fa03____pinNumber2 = VL_RAND_RESET_I(1);
    lh__DOT____Vcellout__fa03____pinNumber1 = VL_RAND_RESET_I(1);
    lh__DOT____Vcellout__fa04____pinNumber2 = VL_RAND_RESET_I(1);
    lh__DOT____Vcellout__fa04____pinNumber1 = VL_RAND_RESET_I(1);
    lh__DOT____Vcellout__fa05____pinNumber2 = VL_RAND_RESET_I(1);
    lh__DOT____Vcellout__fa06____pinNumber2 = VL_RAND_RESET_I(1);
    lh__DOT____Vcellout__fa07____pinNumber2 = VL_RAND_RESET_I(1);
    __PVT__hh__DOT__W = VL_RAND_RESET_I(15);
    __PVT__hh__DOT__C = VL_RAND_RESET_I(11);
    __PVT__hh__DOT__S = VL_RAND_RESET_I(6);
    hh__DOT____Vcellout__fa01____pinNumber2 = VL_RAND_RESET_I(1);
    hh__DOT____Vcellout__fa02____pinNumber2 = VL_RAND_RESET_I(1);
    hh__DOT____Vcellout__ha02____pinNumber2 = VL_RAND_RESET_I(1);
    hh__DOT____Vcellout__fa03____pinNumber2 = VL_RAND_RESET_I(1);
    hh__DOT____Vcellout__fa03____pinNumber1 = VL_RAND_RESET_I(1);
    hh__DOT____Vcellout__fa04____pinNumber2 = VL_RAND_RESET_I(1);
    hh__DOT____Vcellout__fa04____pinNumber1 = VL_RAND_RESET_I(1);
    hh__DOT____Vcellout__fa05____pinNumber2 = VL_RAND_RESET_I(1);
    hh__DOT____Vcellout__fa06____pinNumber2 = VL_RAND_RESET_I(1);
    hh__DOT____Vcellout__fa07____pinNumber2 = VL_RAND_RESET_I(1);
}
