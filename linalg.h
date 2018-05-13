#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#ifndef linalg_h__
#define linalg_h__

extern double **ler( char *matriz, int *L, int *C);

extern void imprime(double **M, int L, int C);

extern double **triangsup(double **M, int L, int C);

extern int pivoteamento(double **M, int L, int C);

extern void subsreversa( double **M, double *raizes, int dim);

extern void determinante ( double **M, int L, int cont);

extern double jacobi(double **M,int L, int C);

#endif //linalg_h__c
