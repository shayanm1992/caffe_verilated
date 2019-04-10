// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals
#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop_unsignedArrayMultiplier8.h"

// FUNCTIONS
Vtop__Syms::Vtop__Syms(Vtop* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__top__DOT__U1__DOT__hh     (Verilated::catName(topp->name(),"top.U1.hh"))
	, TOP__top__DOT__U1__DOT__hl     (Verilated::catName(topp->name(),"top.U1.hl"))
	, TOP__top__DOT__U1__DOT__lh     (Verilated::catName(topp->name(),"top.U1.lh"))
	, TOP__top__DOT__U1__DOT__ll     (Verilated::catName(topp->name(),"top.U1.ll"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__top__DOT__U1__DOT__hh  = &TOP__top__DOT__U1__DOT__hh;
    TOPp->__PVT__top__DOT__U1__DOT__hl  = &TOP__top__DOT__U1__DOT__hl;
    TOPp->__PVT__top__DOT__U1__DOT__lh  = &TOP__top__DOT__U1__DOT__lh;
    TOPp->__PVT__top__DOT__U1__DOT__ll  = &TOP__top__DOT__U1__DOT__ll;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__top__DOT__U1__DOT__hh.__Vconfigure(this, true);
    TOP__top__DOT__U1__DOT__hl.__Vconfigure(this, false);
    TOP__top__DOT__U1__DOT__lh.__Vconfigure(this, false);
    TOP__top__DOT__U1__DOT__ll.__Vconfigure(this, false);
}
