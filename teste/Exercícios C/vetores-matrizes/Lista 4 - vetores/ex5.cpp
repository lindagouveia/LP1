#include <stdio.h>

int main()
{
	int i, v[4] = {2, 3, 5, 18};
	
	for(i=0; i<4; ++i){
		if(v[i]%2 == 0){
			
			printf("\nMultiplos de 2: %d", v[i]);
		}
		
				if(v[i]%3 == 0){
					
					printf("\nMultiplos de 3: %d", v[i]);
				}
				
						if(v[i]%2 == 0 && v[i]%3 == 0){
					
					printf("\nMultiplos de 2 e 3: %d", v[i]);
						}
						
	}


			return 0;
			
}
