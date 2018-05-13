#include<linalg.h>

//Solução Metodo Jacobi
double jacobi(double **M,int L, int C)
{
	int i,j, iteracoes=0;
	double b[L],x0[L],x[L],soma,max;
	
	for(i=0; i<L; i++)
	{
		x[i]=0;
		b[i] = M[i][L];
	}
	do
	{
		max=0;
		
		memcpy(x0,x, 4*sizeof(double));
			
		for(i=0; i<L; i++)
		{
			soma = 0.0;	
			for(j=0; j<L; j++) // somatório 
			{
				if(j!=i)
				soma=soma+(M[i][j]*x0[j]);
			}
	
			x[i] = (1/M[i][i]) * (b[i] - soma); //xk na fórmula
			max =max +(fabs(x0[i]-x[i]) / fabs(x[i]));
		}
		iteracoes ++;
	}while(max > 1e-5);
	
	printf("\nVetor B:\n");
	for(i=0; i<L; i++)
		printf("%lf\t",b[i]);
	printf("\n");
	printf("\nVetor X:\n");
	for(i=0; i<L; i++)
		printf("%.2lf\t",x[i]);
	printf("\n");
	printf("\nNúmero de iterações: %d\n\n",iteracoes);
}
