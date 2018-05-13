#include"linalg.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main (int argc , char **argv )
{
  double **M;
  double *raizes;
  int i, dim, cont, L, C;

  printf("\nMatriz lida no arquivo:\n");
  M=ler(argv[1] ,&L, &C);
  imprime(M, L, C);

  cont= pivoteamento(M,L, C);

  //Matriz triangularizada
  printf("\n Matriz triangularizada:\n");
  M=triangsup(M,L, C);
  imprime(M,L, C);  
  
  //Solução atraves da substituição reversa, eliminação de Gauss:
  printf("\nSolução Metodo de Eliminação de Gauss:\n");
  raizes = malloc(L *sizeof(double));
  subsreversa(M,raizes,L);
  for (i =0; i<L ; i++) 
  {
  	printf ("x%1d = %5.2lf\n",i , raizes[i]) ;
  }
    
  //Determinante
  if(L==C){
  determinante(M, L, cont);}

  
  //Solução através do Método de Jacobi
  printf("\nSolução através do M. Jacobi\n");
  jacobi(M,L, C);
  
 }
