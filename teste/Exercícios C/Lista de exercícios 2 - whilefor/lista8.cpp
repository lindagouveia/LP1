#include <stdio.h>
	int main(){
		
		int x, y, i, soma = 0;
		
			printf("digite os numeros:\n");
			scanf("%i %i", &x, &y);
		
		for(i = x; i >= x && i <= y; i++)
		{
			
			if(i % 2 != 0)
			
				soma = soma	+ i;
			}	
				
				
				printf("%i", soma);
				
	return 0;
}
		
