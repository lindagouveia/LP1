#include <stdio.h>
#include <math.h>

int main()
{ 
	int maior, menor, pos, pos2, i, v[4];
	
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
						menor = v[0];
						pos2 = 0;
						
						for(i=0;i<4;++i){
			
							if(v[i] < menor){
						
								menor = v[i];
								pos2 = i;
				
							}
						}
						
			printf("Maior: %d Posicao: %d \nMenor: %d Posicao: %d", maior, pos, menor, pos2);
		
		return 0;
}

