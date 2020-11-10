#include <stdio.h>

int main()
{
	int m, i, v[3] = {1, 2, 3};
		
		printf("Digite o vetor que quer encontrar: ");
		scanf("%d", &m);
	
	
		for(i=0; i<3; ++i){
			if(m == v[i]){
				
				printf("a posicao do vetor eh: %d", i);
			}
		}
				for(i=0; i<3; ++i){
					if(m =! v[i]){
				
				printf("nao existe");
					}
				}
		
		return 0;
	
}
