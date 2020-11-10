#include <stdio.h>
	int main(){
		
		int num[5], i, soma=0, prod=1, num2[5], x=0;
		
		for(i=0; i<5; i++)
		{
			printf("digite um numero:\n");
			scanf("%i", &num[i]);
			
				soma = soma + num[i];
				prod = prod * num[i];
				
				num2[x] = num[i]
				x++;
		}
		
			printf("soma: %i\n prod: %i\n", soma, prod);
			printf("os numeros sao:\n");
			
		for(i=0; i<x; i++)
		{
			printf("%i ", num2[i]);
		}
	return 0;
	}
