verilator -Wall -Wno-UNOPTFLAT -Wno-lint --cc top.v 


make -C obj_dir -f Vtop.mk 


cd obj_dir

g++  -I.  -I/usr/local/share/verilator/include -I/usr/local/share/verilator/include/vltstd -std=c++11 -c -o sim_main.o ../sim_main.cpp 




g++    sim_main.o ../verilated.o Vtop__ALL.a    -o Vtop -lm -lstdc++ 









