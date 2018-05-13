#include<linalg.h>
//Função Triangularização
double **triangsup(double **M, int L, int C)
{
	int i, j, k, l;
	double N;	
	
	for(k=0; k<C;k++)
	{
		for(i=k+1; i<L; i++)
		{
			N=M[i][k]/M[k][k];
			for(j=0; j<C; j++)
			{
				M[i][j]=M[i][j]-(N*M[k][j]);
			}
		}
	}
	return M;
}
