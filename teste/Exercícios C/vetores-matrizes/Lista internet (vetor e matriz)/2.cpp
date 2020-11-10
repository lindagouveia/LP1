#include <stdio.h>
#include <math.h>

int main()
{ 
	float V[5], R[5];
	int i;
	
	for(i=0; i<6; ++i){
		
		scanf("%f", &V[i]);
		
		R[i] = pow(V[i],2);
		
		printf ("\n%f \n%f", V[i], R[i]);
	}

		return 0;
}

