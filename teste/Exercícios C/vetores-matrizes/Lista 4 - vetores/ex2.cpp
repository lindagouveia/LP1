#include <stdio.h>

int main()
{  
	int i, soma = 0, v[4];
	
	for(i=0; i<4; ++i){
		
		scanf("%d", &v[i]);
		
		soma = soma + v[i]; 
	}
	
	printf("A soma: %d", soma);
}
