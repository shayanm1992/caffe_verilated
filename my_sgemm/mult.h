#pragma once

#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include "verilated.h"
#include "Vtop.h"

// Execute arbitraty command line and return std out
// Not used anymore!
std::string exec(const char* cmd) {
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}


int calculate_mult(short a , short b){	
    Vtop* top2 = new Vtop; // Or use a const unique_ptr, or the VL_UNIQUE_PTR wrapper

    // Set some inputs
    top2->a = a;
    top2->b = b;

    // Evaluate model
    top2->eval();

    short test;
	
    // Final model cleanup
    top2->final();
    // Destroy model
    int r= top2->r;    
    delete top2;
    return r;
    
}

// Fixed point numbers
template <class BaseType, size_t FracDigits>
class fixed_point {
public:
    const static BaseType factor = 1 << FracDigits;
    const static int numShifts = FracDigits;

    BaseType data;

    fixed_point(double d) {
        *this = d; // calls operator=
    }

    fixed_point& operator=(double d) {
        data = static_cast<BaseType>(d*factor);
        return *this;
    }

    BaseType raw_data() const {
        return data;
    }
};

// The multiplication code
static float our_mult(int number, float* a, float* b) {
  // Speed up a little
  // if (*a == 0 || *b == 0)
  //   return 0;
  
  // convert inputs to fixed point
  fixed_point<short, 6> fa = a[0];
  fixed_point<short, 6> fb = b[0];
  short NN=number;
	
  // do integer multiplication

  //sprintf(cmd_str, "./Vtop %hd %hd %hd",NN, fa.raw_data(), fb.raw_data());
  //output_str = &(exec(cmd_str))[0u];

  // convert back to floating point and return
  
  //if (sscanf(output_str, "%d", &p) != 1) {
  //  printf("%s", "Couldn't parse number out of Vtop output: ");
  //  printf("%s", output_str);
  //}
  int p = calculate_mult(fa.raw_data(),fb.raw_data());
  float output = (float)p / (float)(1 << (fa.numShifts + fb.numShifts));
  return output;
}
