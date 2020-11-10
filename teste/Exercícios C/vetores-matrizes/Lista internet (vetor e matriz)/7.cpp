#include <stdio.h>
#include <math.h>

int main()
{ 
	int maior, pos, i, v[4];
	
		for(i=0;i<4;++i){
			
			printf("Digite aqui o valor: ");
			scanf("%d", &v[i]);
		}
		
				maior = v[0];
				pos = 0;
			for(i=0;i<4;++i){
			
					if(v[i] > maior){
						
						maior = v[i];
						
						pos = i;
				
				}
			}
						
						
			printf("Maior: %d \nPosicao: %d", maior, pos);
		
		return 0;
}

