#include <stdio.h> 

int main()
{	
	int i, v[2], x[2];
	
	for(i=0; i<2; ++i){
		
		scanf("%d", &v[i]);
	}
			for(i=0; i<2; ++i){
		
				scanf("%d", &x[i]);
			}
				
				for(i=0; i<2; ++i){	
					if(v[i] == x[i]){
						
						printf("\nos numeros iguais sao: %d %d", v[i], x[i]);
					}
				}
			

	return 0;
	
}
