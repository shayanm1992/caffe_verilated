verilator  -cc --exe -O2 -x-assign 0 -Wno-lint -Wno-UNOPTFLAT -f input.vc top.v sim_main.cpp


#make -j 4 -C obj_dir -f ../Makefile_obj


cd obj_dir



g++  -I.  -MMD -I/usr/local/share/verilator/include -I/usr/local/share/verilator/include/vltstd -DVL_PRINTF=printf -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -Wno-sign-compare -Wno-uninitialized -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-variable -Wno-shadow      -MMD -MP  -DVL_DEBUG=1 -std=c++11 -O2 -fstrict-aliasing -c -o sim_main.o ../sim_main.cpp






#g++  -I.  -MMD -I/usr/local/share/verilator/include -I/usr/local/share/verilator/include/vltstd -DVL_PRINTF=printf -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -Wno-sign-compare -Wno-uninitialized -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-variable -Wno-shadow      -MMD -MP  -DVL_DEBUG=1 -std=c++11  -c -o verilated.o /usr/local/share/verilator/include/verilated.cpp


/usr/bin/perl /usr/local/share/verilator/bin/verilator_includer -DVL_INCLUDE_OPT=include Vtop.cpp Vtop_unsignedArrayMultiplier8.cpp > Vtop__ALLcls.cpp


/usr/bin/perl /usr/local/share/verilator/bin/verilator_includer -DVL_INCLUDE_OPT=include Vtop__Syms.cpp > Vtop__ALLsup.cpp



g++  -I.  -MMD -I/usr/local/share/verilator/include -I/usr/local/share/verilator/include/vltstd -DVL_PRINTF=printf -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -Wno-sign-compare -Wno-uninitialized -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-variable -Wno-shadow      -MMD -MP  -DVL_DEBUG=1 -std=c++11 -O2 -fstrict-aliasing -c -o Vtop__ALLcls.o Vtop__ALLcls.cpp


#shortened
#g++  -I.  -MMD -I/usr/local/share/verilator/include  -c -o Vtop__ALLcls.o Vtop__ALLcls.cpp


g++  -I.  -MMD -I/usr/local/share/verilator/include -I/usr/local/share/verilator/include/vltstd -DVL_PRINTF=printf -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -Wno-sign-compare -Wno-uninitialized -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-variable -Wno-shadow      -MMD -MP  -DVL_DEBUG=1 -std=c++11  -c -o Vtop__ALLsup.o Vtop__ALLsup.cpp


#shortened 
#g++  -I.  -MMD -I/usr/local/share/verilator/include   -c -o Vtop__ALLsup.o Vtop__ALLsup.cpp

ar r Vtop__ALL.a Vtop__ALLcls.o Vtop__ALLsup.o


ranlib Vtop__ALL.a


g++    sim_main.o ../verilated.o Vtop__ALL.a    -o Vtop -lm -lstdc++





