// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed into the Public Domain, for any use,
// without warranty, 2017 by Wilson Snyder.
//======================================================================

// Include common routines
#include <verilated.h>
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "byteswap.h" 
#include "CNN/mult.h"

#include <iostream>
// Include model header, generated from Verilating "top.v"
#include "Vtop.h"
using namespace std;
// If "verilator --trace" is used, include the tracing class
#if VM_TRACE
# include <verilated_vcd_c.h>
#endif




int main(int argc, char** argv, char** env) {
    // This is a more complicated example, please also see the simpler examples/hello_world_c.
	float a, b,nn;
	cin>>a>>b;
	cout<<our_mult(1,&a,&b);
    return 0;

}



