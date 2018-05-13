#include<linalg.h>
//Determinante
void determinante ( double **M, int L, int cont)
{
	int l;
	double det = 1;
	
	for(l=0; l<L; l++)
		det *= M[l][l];
	if(cont % 2 == 0)
		 printf("Determinante:%.1lf \n", det);
 	else
 		printf("Dterminante: %.1lf \n", -1.0 * det);
 
}
