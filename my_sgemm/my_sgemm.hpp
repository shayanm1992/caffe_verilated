#ifndef _MY_SGEMM_
#define _MY_SGEMM_

typedef enum { my_CblasRowMajor = 101, my_CblasColMajor = 102 } my_CBLAS_LAYOUT;
typedef enum { my_CblasNoTrans = 111, my_CblasTrans = 112, my_CblasConjTrans = 113 } my_CBLAS_TRANSPOSE;
void my_sgemm(my_CBLAS_LAYOUT, my_CBLAS_TRANSPOSE,
	my_CBLAS_TRANSPOSE, const int, const int,
	const int, const float, const float *,
	const int, const float *, const int,
	const float, float *, const int);


void my_dgemm(my_CBLAS_LAYOUT, my_CBLAS_TRANSPOSE,
	my_CBLAS_TRANSPOSE, const int, const int,
	const int, const double, const double *,
	const int, const double *, const int,
	const double, double *, const int);


float my_add(float, float);




#endif
