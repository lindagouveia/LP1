#include <stdio.h>
	int main(){
		
		int x, i, j, k, soma;
		printf("digite um numero inteiro:\n");
		scanf("%i", &x);
		
		soma=0;
		
		for(i=1;i<=x;i++){
			
			for(j=1;j<=x;j++){
				
				for(k=1;k<=x;k++){
					
					soma += i;
				}
			}
		}
					
			printf("%i\n", soma);
			
	return 0;
	}
