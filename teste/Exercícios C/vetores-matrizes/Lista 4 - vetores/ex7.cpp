#include <stdio.h>

int main()
{ 
	int i, v1[2] = {1,2}, v2[2] = {3, 4}, v3[2];
	
	for(i=0; i<2; ++i){
		
		v3[i] = v1[i] + v2[i];
		
		printf("\nA soma eh: %d", v3[i]);
	}
	
	return 0;
}
