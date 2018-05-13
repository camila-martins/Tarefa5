#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

FILE *fp;


//Função para ler a matriz do arquivo 
extern double **ler( char *matriz, int *L, int *C)
{	
	int  i, j, l, c;
	double **M;
	float a;
	fp = fopen(matriz,"r");
	i = fscanf(fp,"%d, %d", L, C);
	
	M = malloc( *L *sizeof(double *));
	for(i=0; i<*L; i++)
	{
		M[i]= malloc((*C)*sizeof(double));
	}	
	i =0;
	j = 0;

	while (fscanf(fp,"%f",&a)!= EOF) 
	{
		M[i][j]=a;
		j++;
		if (j== *C) 
		{	
			j= 0;
			i++;
		}
	}
	return(M);
}
