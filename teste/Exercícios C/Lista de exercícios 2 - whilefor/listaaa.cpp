#include <stdio.h>
	int main(){
		
		int nota, nota2;
		
		printf("digite sua nota:\n");
		scanf("%i", &nota);				
					
		if(nota>=0 && nota<=10)
			
			printf("valor valido");
		
		while(nota<0 || nota>10)
		{
			printf("valor invalido\n");
			scanf("%i", &nota2);
		
		if(nota<=0 && nota2>=0)
			
			printf("valor valido");
				
				nota = nota2;
		}
			
		
	
	return 0;
}
