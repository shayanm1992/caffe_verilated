//My own version of SGEMM in C++ to replace BLAS Implementation
// SGEMM.cpp : Defines the entry point for the console application.
//
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include "verilated.h"
#include "Vtop.h"
#include "../include/caffe/util/my_sgemm.hpp"
//#include "mult.h"

//dummy mult
//float our_mult(int a,float* b ,float* c)
//{
//return (*b)*(*c);
//}

//from here
//http://www.netlib.org/lapack/explore-html/de/da0/cblas_8h_source.html


//code that is called in Caffe
//  cblas_dgemm(CblasRowMajor, TransA, TransB, M, N, K, alpha, A, lda, B, ldb, beta, C, N);

//how it is defined in cblas source

/*
void cblas_sgemm(CBLAS_LAYOUT layout, CBLAS_TRANSPOSE TransA,
	CBLAS_TRANSPOSE TransB, const int M, const int N,
	const int K, const float alpha, const float *A,
	const int lda, const float *B, const int ldb,
	const float beta, float *C, const int ldc);
*/


//it is always CBLASROWMAJOT in caffe calls
int calculate_mult(short a , short b){	
    Vtop* top2 = new Vtop; // Or use a const unique_ptr, or the VL_UNIQUE_PTR wrapper

    // Set some inputs
    top2->a = a;
    top2->b = b;

    // Evaluate model
    top2->eval();


	
    // Final model cleanup
    top2->final();
    // Destroy model
    int r= top2->r;    
    delete top2;
    return r;
    
}


// Fixed point numbers


// The multiplication code
static float our_mult(int number, float* a, float* b) {

  fixed_point<short, 5> fa = a[0];
  fixed_point<short, 5> fb = b[0];
  short NN=number;
	
  int p = calculate_mult(fa.raw_data(),fb.raw_data());
  float output = (float)p / (float)(1 << (fa.numShifts + fb.numShifts));
  return output;
}


void my_sgemm(my_CBLAS_LAYOUT layout, my_CBLAS_TRANSPOSE TransA,
	my_CBLAS_TRANSPOSE TransB, const int M, const int N,
	const int K, const float alpha, const float *A,
	const int lda, const float *B, const int ldb,
	const float beta, float *C, const int ldc) {
	if (M < 0) return;
	if (N < 0) return;
	if (K < 0) return;
	//merge our mult in here

	Vtop* top2 = new Vtop;
	int mult_result;
	//layout will always be ROWMAJOR
	//first we create a buffer for saving output
	//float *result = new float(M*N);
	//float * result = new float(8);
	float *result= new float [M*N];
	float op1,op2;
	//calculate output

	//no transpose
	if (TransA== my_CblasNoTrans && TransB == my_CblasNoTrans)
		for (int m = 0; m < M; m++)
			for (int n = 0; n < N; n++)
			{
				result[N*m+n] = 0;
				for (int k = 0; k < K; k++)
				{
					//result[N*m + n] += A[K*m + k] * B[N*k + n];
					//added to test verilator MULT
					fixed_point<short, 8> fa=A[K*m + k];
 					fixed_point<short, 8> fb=B[N*k + n];
					
					top2->a = fa.raw_data();
					top2->b = fb.raw_data();
					top2->eval();
					mult_result=top2->r;
					result [N*m + n] += (float)mult_result / (float)(1 << (fa.numShifts + fb.numShifts));
				}
				result[N*m + n] = alpha * result[N*m + n] + beta * C[N*m + n];
				C[N*m + n] = result[N*m + n];
			}
	//B transpose
	else if (TransA == my_CblasNoTrans && TransB != my_CblasNoTrans)
		for (int m = 0; m < M; m++)
			for (int n = 0; n < N; n++)
			{
				result[N*m + n] = 0;
				for (int k = 0; k < K; k++)
				
				//	result[N*m + n] += A[K*m + k] * B[K*n + k];
				{
					fixed_point<short, 8> fa=A[K*m + k];
 					fixed_point<short, 8> fb=B[K*n + k];
					
					top2->a = fa.raw_data();
					top2->b = fb.raw_data();
					top2->eval();
					mult_result=top2->r;
					result [N*m + n] += (float)mult_result / (float)(1 << (fa.numShifts + fb.numShifts));
				}

				result[N*m + n] = alpha * result[N*m + n] + beta * C[N*m + n];
				C[N*m + n] = result[N*m + n];
			}

	//A transpose
	else if (TransA != my_CblasNoTrans && TransB == my_CblasNoTrans)
		for (int m = 0; m < M; m++)
			for (int n = 0; n < N; n++)
			{
				result[N*m + n] = 0;
				for (int k = 0; k < K; k++)
					//result[N*m + n] += A[M*k + m] * B[N*k + n];
				{
					fixed_point<short, 8> fa=A[M*k + m];
 					fixed_point<short, 8> fb=B[N*k + n];
					
					top2->a = fa.raw_data();
					top2->b = fb.raw_data();
					top2->eval();
					mult_result=top2->r;
					result [N*m + n] += (float)mult_result / (float)(1 << (fa.numShifts + fb.numShifts));
				}
				result[N*m + n] = alpha * result[N*m + n] + beta * C[N*m + n];
				C[N*m + n] = result[N*m + n];
			}

	//Both transpose
	else if (TransA != my_CblasNoTrans && TransB != my_CblasNoTrans)
		for (int m = 0; m < M; m++)
			for (int n = 0; n < N; n++)
			{
				result[N*m + n] = 0;
				for (int k = 0; k < K; k++)
					//result[N*m + n] += A[M*k + m] * B[K*n + k];
				{
					fixed_point<short, 8> fa=A[M*k + m];
 					fixed_point<short, 8> fb=B[K*n + k];
					
					top2->a = fa.raw_data();
					top2->b = fb.raw_data();
					top2->eval();
					mult_result=top2->r;
					result [N*m + n] += (float)mult_result / (float)(1 << (fa.numShifts + fb.numShifts));
				}
				result[N*m + n] = alpha * result[N*m + n] + beta * C[N*m + n];
				C[N*m + n] = result[N*m + n];
			}
	delete top2;
	return ;
}




void my_dgemm(my_CBLAS_LAYOUT layout, my_CBLAS_TRANSPOSE TransA,
	my_CBLAS_TRANSPOSE TransB, const int M, const int N,
	const int K, const double alpha, const double *A,
	const int lda, const double *B, const int ldb,
	const double beta, double *C, const int ldc) {
	if (M < 0) return;
	if (N < 0) return;
	if (K < 0) return;

	//layout will always be ROWMAJOR
	//first we create a buffer for saving output
	//float *result = new float(M*N);
	//float * result = new float(8);
	double *result= new double [M*N];

	//merge our mult in here
	Vtop* top2 = new Vtop;
	int mult_result;
	//calculate output

	//no transpose
	if (TransA== my_CblasNoTrans && TransB == my_CblasNoTrans)
		for (int m = 0; m < M; m++)
			for (int n = 0; n < N; n++)
			{
				result[N*m+n] = 0;
				for (int k = 0; k < K; k++)
				//	result[N*m + n] += A[K*m + k] * B[N*k + n];
				{
					fixed_point<short, 8> fa=A[K*m + k];
 					fixed_point<short, 8> fb=B[N*k + n];
					
					top2->a = fa.raw_data();
					top2->b = fb.raw_data();
					top2->eval();
					mult_result=top2->r;
					result [N*m + n] += (double)mult_result / (double)(1 << (fa.numShifts + fb.numShifts));
				}

		
				result[N*m + n] = alpha * result[N*m + n] + beta * C[N*m + n];
				C[N*m + n] = result[N*m + n];
			}
	//B transpose
	else if (TransA == my_CblasNoTrans && TransB != my_CblasNoTrans)
		for (int m = 0; m < M; m++)
			for (int n = 0; n < N; n++)
			{
				result[N*m + n] = 0;
				for (int k = 0; k < K; k++)
					//result[N*m + n] += A[K*m + k] * B[K*n + k];
				{
					fixed_point<short, 8> fa=A[K*m + k];
 					fixed_point<short, 8> fb=B[K*n + k];
					
					top2->a = fa.raw_data();
					top2->b = fb.raw_data();
					top2->eval();
					mult_result=top2->r;
					result [N*m + n] += (double)mult_result / (double)(1 << (fa.numShifts + fb.numShifts));
				}
				result[N*m + n] = alpha * result[N*m + n] + beta * C[N*m + n];
				C[N*m + n] = result[N*m + n];
			}

	//A transpose
	else if (TransA != my_CblasNoTrans && TransB == my_CblasNoTrans)
		for (int m = 0; m < M; m++)
			for (int n = 0; n < N; n++)
			{
				result[N*m + n] = 0;
				for (int k = 0; k < K; k++)
					//result[N*m + n] += A[M*k + m] * B[N*k + n];
				{
					fixed_point<short, 8> fa=A[M*k + m];
 					fixed_point<short, 8> fb=B[N*k + n];
					
					top2->a = fa.raw_data();
					top2->b = fb.raw_data();
					top2->eval();
					mult_result=top2->r;
					result [N*m + n] += (double)mult_result / (double)(1 << (fa.numShifts + fb.numShifts));
				}
				result[N*m + n] = alpha * result[N*m + n] + beta * C[N*m + n];
				C[N*m + n] = result[N*m + n];
			}

	//Both transpose
	else if (TransA != my_CblasNoTrans && TransB != my_CblasNoTrans)
		for (int m = 0; m < M; m++)
			for (int n = 0; n < N; n++)
			{
				result[N*m + n] = 0;
				for (int k = 0; k < K; k++)
					//result[N*m + n] += A[M*k + m] * B[K*n + k];
				{
					fixed_point<short, 8> fa=A[M*k + m];
 					fixed_point<short, 8> fb=B[K*n + k];
					
					top2->a = fa.raw_data();
					top2->b = fb.raw_data();
					top2->eval();
					mult_result=top2->r;
					result [N*m + n] += (double)mult_result / (double)(1 << (fa.numShifts + fb.numShifts));
				}
				result[N*m + n] = alpha * result[N*m + n] + beta * C[N*m + n];
				C[N*m + n] = result[N*m + n];
			}
	delete top2;
	return ;
}



float my_add(float a, float b)
{
	return a + b;
}


