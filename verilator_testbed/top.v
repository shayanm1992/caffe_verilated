module top(a, b, r);
    input [15:0] a,b;
    output [31:0] r;

    wire [15:0] a_temp, b_temp;
    wire out_sign;
    wire [31:0] r_temp;

    assign a_temp=(a[15]==1'b1)? ~a+1'b1:a;
    assign b_temp=(b[15]==1'b1)? ~b+1'b1:b;

    assign out_sign=a[15]^b[15];
    assign r_temp=a_temp*b_temp;
    //mult_block_16x U1 (.a(a_temp), .b(b_temp), .r(r_temp));

    assign r=(out_sign)?~r_temp+1'b1:r_temp;
endmodule


