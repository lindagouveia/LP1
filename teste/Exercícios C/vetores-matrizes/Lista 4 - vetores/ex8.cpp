#include <stdio.h>

int main()
{
	int qtd, soma, i, v[4];
	
	for(i=0; i<4; ++i){
		
		scanf("%d", &v[i]);
		
		if(v[i] < 0){
			
			qtd = qtd+1;
		}
		
			if(v[i] > 0){
				
				soma = soma+1;
			}
	}
	
	printf ("A quantidade eh: %d \nA soma eh: %d", qtd, soma);
	
	return 0;
}
