#include <stdio.h>
#include <math.h>

int main()
{
	
	int i;
	float R[10], Q[10];
	
	for(i=0;i<=9;i++){
		
		printf ("Digite um numero: ");
		scanf ("%f", &R[i]);
		
		Q[i] = pow(R[i],2);
		
		printf ("R[%d]: %f e Q[%d]: %f\n", i, R[i], i, Q[i]);
			
	}
				
		
		 
	return 0;
}
