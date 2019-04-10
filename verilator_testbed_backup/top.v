module top(a, b, r);
    input [15:0] a,b;
    output [31:0] r;

    wire [15:0] a_temp, b_temp;
    wire out_sign;
    wire [31:0] r_temp;

    assign a_temp=(a[15]==1'b1)? ~a+1'b1:a;
    assign b_temp=(b[15]==1'b1)? ~b+1'b1:b;

    assign out_sign=a[15]^b[15];

    unsignedArrayMultiplier16 U1 (.a(a_temp), .b(b_temp), .p(r_temp));

    assign r=(out_sign)?~r_temp+1'b1:r_temp;
endmodule


module unsignedArrayMultiplier16(
    input [15:0] a,
    input [15:0] b,
    output [31:0] p
    );
    
    wire [15:0] pp1;
    wire [15:0] pp2;
    wire [15:0] pp3;
    wire [15:0] pp4;
    
    unsignedArrayMultiplier8 ll (a[7:0], b[7:0], pp1);
    unsignedArrayMultiplier8 hl (a[15:8], b[7:0], pp2);
    unsignedArrayMultiplier8 lh (a[7:0], b[15:8], pp3);
    unsignedArrayMultiplier8 hh (a[15:8], b[15:8], pp4);
    
    
    assign p = pp1 + (pp2 << 8) + (pp3 << 8) + (pp4 << 16);
endmodule

module unsignedArrayMultiplier8(
    input [7:0] a,
    input [7:0] b,
    output [15:0] p );
    
    wire [7:0] pp1;
    wire [7:0] pp2;
    wire [7:0] pp3;
    wire [7:0] pp4;
    
    unsignedArrayMultiplier4 ll (a[3:0], b[3:0], pp1);
    unsignedArrayMultiplier4 hl (a[7:4], b[3:0], pp2);
    unsignedArrayMultiplier4 lh (a[3:0], b[7:4], pp3);
    unsignedArrayMultiplier4 hh (a[7:4], b[7:4], pp4);
    
    assign p = pp1 + (pp2 << 4) + (pp3 << 4) + (pp4 << 8);
        
endmodule

// This takes two 4 bit numbers and outputs a 8 bit number
// Reuses the half adder and full adder modules already existing
// Look at array multiplier block diagram to understand the code
module unsignedArrayMultiplier4(A, B, PRODUCT);
  output [7:0] PRODUCT;
  input [3:0] A, B;
  
  wire [14:0] W;
  wire [10:0] C;
  wire [5:0] S;

  // Instantiate all the AND functions
  
  and and00 ( W[0], A[0], B[1] );
  and and01 ( W[1], A[0], B[2] );
  and and02 ( W[2], A[0], B[3] );

  and and03 ( W[3], A[1], B[0] );
  and and04 ( W[4], A[1], B[1] );
  and and05 ( W[5], A[1], B[2] );
  and and06 ( W[6], A[1], B[3] );

  and and07 ( W[7], A[2], B[0] );
  and and08 ( W[8], A[2], B[1] );
  and and09 ( W[9], A[2], B[2] );
  and and10 ( W[10], A[2], B[3] );

  and and11 ( W[11], A[3], B[0] );
  and and12 ( W[12], A[3], B[1] );
  and and13 ( W[13], A[3], B[2] );
  and and14 ( W[14], A[3], B[3] );


  // LSB is calculated here
  and and15 ( PRODUCT[0], A[0], B[0] );

  // First row
  // Bit 1 of the product as well
  halfadder ha01 ( PRODUCT[1], C[0], W[0], W[3] );
  fulladder fa01 ( S[0], C[1], W[1], W[4], C[0] );
  fulladder fa02 ( S[1], C[2], W[2], W[5], C[1] );
  halfadder ha02 ( S[2], C[3], W[6], C[2] );

  // Next row
  halfadder ha03 ( PRODUCT[2], C[4], W[7], S[0] );
  fulladder fa03 ( S[3], C[5], W[8], S[1], C[4] );
  fulladder fa04 ( S[4], C[6], W[9], S[2], C[5] );
  fulladder fa05 ( S[5], C[7], W[10], C[3], C[6] );
  
  // Next row
  halfadder ha04 ( PRODUCT[3], C[8], W[11], S[3] );
  fulladder fa06 ( PRODUCT[4], C[9], W[12], S[4], C[8] );
  fulladder fa07 ( PRODUCT[5], C[10], W[13], S[5], C[9] );
  fulladder fa08 ( PRODUCT[6], PRODUCT[7], W[14], C[7], C[10] );
endmodule

module halfadder(sum,carry,a,b);
	output sum,carry;
	input a,b;
	
	assign sum = a^b;
	assign carry = a&b;
	
endmodule

module fulladder(y,carryout,a,b,carryin);
  output y,carryout;
  input a,b,carryin;
  
  assign y = a ^ b ^ carryin;
  assign carryout = ( a & b ) | ( a & carryin ) | ( b & carryin );
  
endmodule
