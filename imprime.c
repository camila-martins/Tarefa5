#include<linalg.h>

//Função para imprimir as matrizes
void imprime(double **M, int L, int C)
{
	int i, j;
	printf("\n");
	for(i=0; i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("%.3f\t", M[i][j]);
		}
		puts("");
		
	}
}
