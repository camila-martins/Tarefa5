#include<linalg.h>

//Função substituiçao reversa
void subsreversa( double **M, double *raizes, int dim)
{
	int i, j;
	double soma;
	
	for(i=dim-1; i>=0; i--)
	{
		soma=0;
		for(j=i+1; j<dim; j++)
		{
			soma=soma+ (M[i][j]*raizes[j]);
		}
		raizes[i]= (M[i][dim]-soma)/M[i][i];
	}
}
