#include <stdio.h>

int main()
{	

	int i, V[5] = {1, 2, 3, 4, 5};
	
	for(i=0; i<5; ++i){
		
		if(V[i]%2 == 0){
			
			printf ("\n%d", V[i]);
		}
	}
	
	
	return 0;
}
