#include<linalg.h>

//Pivoteamento
int pivoteamento(double **M, int L, int C)
{ 
	int cont=0, l, c, d;
	double U, lambda;
 
	for(l=0; l<L; l++)
	{ 
		if(M[l][l] == 0)
		{
			for(d = l; d < L; d++)
			{
				if(M[d][l] != 0)
				{
					for(c = 0; c < L; c++)
					{
						 U = M[l][c];
 						 M[l][c] = M[d][c];
 						 M[d][c] = U;
					 }
 
 					 d = L;
 				}
 			}
 
 			cont++;
 		}
 		if(M[l][l] != 0)
		{
 			for(d = l+1; d<L; d++ )
			{
				 lambda = -1.0 * M[d][l]/M[l][l];
	
				 for(c=l; c<L; c++)
	
					M[d][c] = M[d][c]+(lambda*(M[l][c]));
	
 
	 		}	
 		}
	} 
	return(cont);
}


