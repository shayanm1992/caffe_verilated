//My own version of SGEMM in C++ to replace BLAS Implementation
// SGEMM.cpp : Defines the entry point for the console application.
//

#include "../include/caffe/util/my_sgemm.hpp"
#include "mult.h"

//dummy mult
//float our_mult(int a,float* b ,float* c)
//{
//return 1.2;
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


void my_sgemm(my_CBLAS_LAYOUT layout, my_CBLAS_TRANSPOSE TransA,
	my_CBLAS_TRANSPOSE TransB, const int M, const int N,
	const int K, const float alpha, const float *A,
	const int lda, const float *B, const int ldb,
	const float beta, float *C, const int ldc) {
	if (M < 0) return;
	if (N < 0) return;
	if (K < 0) return;

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
					op1=A[K*m + k];
					op2=B[N*k + n];
					result [N*m + n] += our_mult(1, &op1, &op2);
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
					result[N*m + n] += A[K*m + k] * B[K*n + k];
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
					result[N*m + n] += A[M*k + m] * B[N*k + n];
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
					result[N*m + n] += A[M*k + m] * B[K*n + k];
				result[N*m + n] = alpha * result[N*m + n] + beta * C[N*m + n];
				C[N*m + n] = result[N*m + n];
			}

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
	//calculate output

	//no transpose
	if (TransA== my_CblasNoTrans && TransB == my_CblasNoTrans)
		for (int m = 0; m < M; m++)
			for (int n = 0; n < N; n++)
			{
				result[N*m+n] = 0;
				for (int k = 0; k < K; k++)
					result[N*m + n] += A[K*m + k] * B[N*k + n];
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
					result[N*m + n] += A[K*m + k] * B[K*n + k];
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
					result[N*m + n] += A[M*k + m] * B[N*k + n];
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
					result[N*m + n] += A[M*k + m] * B[K*n + k];
				result[N*m + n] = alpha * result[N*m + n] + beta * C[N*m + n];
				C[N*m + n] = result[N*m + n];
			}

	return ;
}



float my_add(float a, float b)
{
	return a + b;
}


