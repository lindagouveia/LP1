#include <stdio.h>
#include <math.h>

int main()
{		
	int i, qtd = 0;
	float soma, v[5];
	
	for(i=0; i<5; ++i){
		
		scanf("%f", &v[i]);
		
			if(v[i]<0){
				
			 qtd = qtd+1;	
				
			}
			
				if(v[i]>0){
					
					soma = soma + v[i];
				}
	}
	
		printf("a quantidade de numeros negativos eh: %d", qtd);	
		printf("\na soma eh: %f", soma);
	
	
	return 0;
}
