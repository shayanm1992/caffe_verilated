//My own version of SGEMM in C++ to replace BLAS Implementation
// SGEMM.cpp : Defines the entry point for the console application.
//
#include <cstdio>
#include <iostream>
#include <memory>
#include <pthread.h>
#include <stdexcept>
#include <string>
#include <array>
#include "verilated.h"
#include "Vtop.h"
#include "../include/caffe/util/my_sgemm.hpp"
//#include "mult.h"

#define NUM_THREADS 16

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

int g_M, g_N, g_K;
float g_alpha, g_beta;
const float *g_A;
const float *g_B;
float *g_C;
float *g_result;
my_CBLAS_TRANSPOSE g_TransA, g_TransB;

int g_dM, g_dN, g_dK;
double g_dalpha, g_dbeta;
const double *g_dA;
const double *g_dB;
double *g_dC;
double *g_dresult;
my_CBLAS_TRANSPOSE g_dTransA, g_dTransB;

static bool made_tops = false;
static Vtop *tops[NUM_THREADS];

void *s_worker(void *arg) {
    int worker_id = *(int *)arg;
    int chunk_height = g_M / NUM_THREADS;
    int m_start = worker_id * chunk_height;
    int m_end = (worker_id + 1) * chunk_height;
    int mult_result;

    if (worker_id == NUM_THREADS - 1) {
        // last thread, so pick up the extra work caused by M % NUM_THREADS != 0
        m_end = g_M;
    }

    Vtop *top = tops[worker_id];

    //no transpose
    if (g_TransA== my_CblasNoTrans && g_TransB == my_CblasNoTrans) {
        for (int m = m_start; m < m_end; m++) {
            for (int n = 0; n < g_N; n++) {
                g_result[g_N*m+n] = 0;
                for (int k = 0; k < g_K; k++) {
                    //result[N*m + n] += A[K*m + k] * B[N*k + n];
                    //added to test verilator MULT
                    fixed_point<short, 8> fa=g_A[g_K*m + k];
                    fixed_point<short, 8> fb=g_B[g_N*k + n];

                    top->a = fa.raw_data();
                    top->b = fb.raw_data();
                    top->eval();
                    mult_result=top->r;
                    g_result [g_N*m + n] += (float)mult_result / (float)(1 << (fa.numShifts + fb.numShifts));
                }
                g_result[g_N*m + n] = g_alpha * g_result[g_N*m + n] + g_beta * g_C[g_N*m + n];
                g_C[g_N*m + n] = g_result[g_N*m + n];
            }
        }
    }
    //B transpose
    else if (g_TransA == my_CblasNoTrans && g_TransB != my_CblasNoTrans) {
        for (int m = m_start; m < m_end; m++) {
            for (int n = 0; n < g_N; n++) {
                g_result[g_N*m + n] = 0;
                for (int k = 0; k < g_K; k++) {
                    //	result[N*m + n] += A[K*m + k] * B[K*n + k];
                    fixed_point<short, 8> fa=g_A[g_K*m + k];
                    fixed_point<short, 8> fb=g_B[g_K*n + k];

                    top->a = fa.raw_data();
                    top->b = fb.raw_data();
                    top->eval();
                    mult_result=top->r;
                    g_result [g_N*m + n] += (float)mult_result / (float)(1 << (fa.numShifts + fb.numShifts));
                }

                g_result[g_N*m + n] = g_alpha * g_result[g_N*m + n] + g_beta * g_C[g_N*m + n];
                g_C[g_N*m + n] = g_result[g_N*m + n];
            }
        }
    }

    //A transpose
    else if (g_TransA != my_CblasNoTrans && g_TransB == my_CblasNoTrans) {
        for (int m = m_start; m < m_end; m++) {
            for (int n = 0; n < g_N; n++) {
                g_result[g_N*m + n] = 0;
                for (int k = 0; k < g_K; k++) {
                    //result[N*m + n] += A[M*k + m] * B[N*k + n];
                    fixed_point<short, 8> fa=g_A[g_M*k + m];
                    fixed_point<short, 8> fb=g_B[g_N*k + n];

                    top->a = fa.raw_data();
                    top->b = fb.raw_data();
                    top->eval();
                    mult_result=top->r;
                    g_result [g_N*m + n] += (float)mult_result / (float)(1 << (fa.numShifts + fb.numShifts));
                }
                g_result[g_N*m + n] = g_alpha * g_result[g_N*m + n] + g_beta * g_C[g_N*m + n];
                g_C[g_N*m + n] = g_result[g_N*m + n];
            }
        }
    }

    //Both transpose
    else if (g_TransA != my_CblasNoTrans && g_TransB != my_CblasNoTrans) {
        for (int m = m_start; m < m_end; m++) {
            for (int n = 0; n < g_N; n++) {
                g_result[g_N*m + n] = 0;
                for (int k = 0; k < g_K; k++) {
                    //result[N*m + n] += A[M*k + m] * B[K*n + k];
                    fixed_point<short, 8> fa=g_A[g_M*k + m];
                    fixed_point<short, 8> fb=g_B[g_K*n + k];

                    top->a = fa.raw_data();
                    top->b = fb.raw_data();
                    top->eval();
                    mult_result=top->r;
                    g_result [g_N*m + n] += (float)mult_result / (float)(1 << (fa.numShifts + fb.numShifts));
                }
                g_result[g_N*m + n] = g_alpha * g_result[g_N*m + n] + g_beta * g_C[g_N*m + n];
                g_C[g_N*m + n] = g_result[g_N*m + n];
            }
        }
    }

    delete top;
    return NULL;
}

void *d_worker(void *arg) {
    int worker_id = *(int *)arg;
    int chunk_height = g_dM / NUM_THREADS;
    int m_start = worker_id * chunk_height;
    int m_end = (worker_id + 1) * chunk_height;
    int mult_result;

    if (worker_id == NUM_THREADS - 1) {
        // last thread, so pick up the extra work caused by M % NUM_THREADS != 0
        m_end = g_dM;
    }

    Vtop *top = tops[worker_id];

    //no transpose
    if (g_dTransA== my_CblasNoTrans && g_dTransB == my_CblasNoTrans) {
        for (int m = m_start; m < m_end; m++) {
            for (int n = 0; n < g_dN; n++) {
                g_dresult[g_dN*m+n] = 0;
                for (int k = 0; k < g_dK; k++) {
                    //result[N*m + n] += A[K*m + k] * B[N*k + n];
                    //added to test verilator MULT
                    fixed_point<short, 8> fa=g_dA[g_dK*m + k];
                    fixed_point<short, 8> fb=g_dB[g_dN*k + n];

                    top->a = fa.raw_data();
                    top->b = fb.raw_data();
                    top->eval();
                    mult_result=top->r;
                    g_dresult [g_dN*m + n] += (double)mult_result / (double)(1 << (fa.numShifts + fb.numShifts));
                }
                g_dresult[g_dN*m + n] = g_dalpha * g_dresult[g_dN*m + n] + g_dbeta * g_dC[g_dN*m + n];
                g_dC[g_dN*m + n] = g_dresult[g_dN*m + n];
            }
        }
    }
    //B transpose
    else if (g_dTransA == my_CblasNoTrans && g_dTransB != my_CblasNoTrans) {
        for (int m = m_start; m < m_end; m++) {
            for (int n = 0; n < g_dN; n++) {
                g_dresult[g_dN*m + n] = 0;
                for (int k = 0; k < g_dK; k++) {
                    //	result[N*m + n] += A[K*m + k] * B[K*n + k];
                    fixed_point<short, 8> fa=g_dA[g_dK*m + k];
                    fixed_point<short, 8> fb=g_dB[g_dK*n + k];

                    top->a = fa.raw_data();
                    top->b = fb.raw_data();
                    top->eval();
                    mult_result=top->r;
                    g_dresult [g_dN*m + n] += (double)mult_result / (double)(1 << (fa.numShifts + fb.numShifts));
                }

                g_dresult[g_dN*m + n] = g_dalpha * g_dresult[g_dN*m + n] + g_dbeta * g_dC[g_dN*m + n];
                g_dC[g_dN*m + n] = g_dresult[g_dN*m + n];
            }
        }
    }

    //A transpose
    else if (g_dTransA != my_CblasNoTrans && g_dTransB == my_CblasNoTrans) {
        for (int m = m_start; m < m_end; m++) {
            for (int n = 0; n < g_dN; n++) {
                g_dresult[g_dN*m + n] = 0;
                for (int k = 0; k < g_dK; k++) {
                    //result[N*m + n] += A[M*k + m] * B[N*k + n];
                    fixed_point<short, 8> fa=g_dA[g_dM*k + m];
                    fixed_point<short, 8> fb=g_dB[g_dN*k + n];

                    top->a = fa.raw_data();
                    top->b = fb.raw_data();
                    top->eval();
                    mult_result=top->r;
                    g_dresult [g_dN*m + n] += (double)mult_result / (double)(1 << (fa.numShifts + fb.numShifts));
                }
                g_dresult[g_dN*m + n] = g_dalpha * g_dresult[g_dN*m + n] + g_dbeta * g_dC[g_dN*m + n];
                g_dC[g_dN*m + n] = g_dresult[g_dN*m + n];
            }
        }
    }

    //Both transpose
    else if (g_dTransA != my_CblasNoTrans && g_dTransB != my_CblasNoTrans) {
        for (int m = m_start; m < m_end; m++) {
            for (int n = 0; n < g_dN; n++) {
                g_dresult[g_dN*m + n] = 0;
                for (int k = 0; k < g_dK; k++) {
                    //result[N*m + n] += A[M*k + m] * B[K*n + k];
                    fixed_point<short, 8> fa=g_dA[g_dM*k + m];
                    fixed_point<short, 8> fb=g_dB[g_dK*n + k];

                    top->a = fa.raw_data();
                    top->b = fb.raw_data();
                    top->eval();
                    mult_result=top->r;
                    g_dresult [g_dN*m + n] += (double)mult_result / (double)(1 << (fa.numShifts + fb.numShifts));
                }
                g_dresult[g_dN*m + n] = g_dalpha * g_dresult[g_dN*m + n] + g_dbeta * g_dC[g_dN*m + n];
                g_dC[g_dN*m + n] = g_dresult[g_dN*m + n];
            }
        }
    }

    delete top;
    return NULL;
}

void my_sgemm(my_CBLAS_LAYOUT layout, my_CBLAS_TRANSPOSE TransA,
        my_CBLAS_TRANSPOSE TransB, const int M, const int N,
        const int K, const float alpha, const float *A,
        const int lda, const float *B, const int ldb,
        const float beta, float *C, const int ldc) {
    if (M < 0) return;
    if (N < 0) return;
    if (K < 0) return;

    g_M = M;
    g_N = N;
    g_K = K;
    g_alpha = alpha;
    g_beta = beta;
    g_A = A;
    g_B = B;
    g_C = C;
    g_TransA = TransA;
    g_TransB = TransB;

    g_result= new float [M*N];



    pthread_t *threads = (pthread_t *) malloc(NUM_THREADS * sizeof(pthread_t));
    for (int i = 0; i < NUM_THREADS; ++i ) {
        int *worker_id;
        worker_id = (int *) malloc(sizeof(int));
        *worker_id = i;
	if (!made_tops) 
		tops[i] = new Vtop();

        pthread_create(&threads[i], NULL, s_worker, (void *)worker_id);
    }

    for (int i = 0; i < NUM_THREADS; ++i ) {
        pthread_join(threads[i], NULL);
    }

    return;
}

void my_dgemm(my_CBLAS_LAYOUT layout, my_CBLAS_TRANSPOSE TransA,
        my_CBLAS_TRANSPOSE TransB, const int M, const int N,
        const int K, const double alpha, const double *A,
        const int lda, const double *B, const int ldb,
        const double beta, double *C, const int ldc) {
    if (M < 0) return;
    if (N < 0) return;
    if (K < 0) return;

    g_dM = M;
    g_dN = N;
    g_dK = K;
    g_dalpha = alpha;
    g_dbeta = beta;
    g_dA = A;
    g_dB = B;
    g_dC = C;
    g_dTransA = TransA;
    g_dTransB = TransB;

    g_dresult= new double [M*N];

    pthread_t *threads = (pthread_t *) malloc(NUM_THREADS * sizeof(pthread_t));
    for (int i = 0; i < NUM_THREADS; ++i ) {
        int *worker_id;
        worker_id = (int *) malloc(sizeof(int));
        *worker_id = i;
	if (!made_tops) 
		tops[i] = new Vtop();

        pthread_create(&threads[i], NULL, d_worker, (void *)worker_id);
    }

    for (int i = 0; i < NUM_THREADS; ++i ) {
        pthread_join(threads[i], NULL);
    }

    return ;
}

