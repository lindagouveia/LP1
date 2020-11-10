#include <stdio.h>

int main(int argc, char *argv[])
{
	
	int num;
	int resposta;
	
	while(1){ //enquando verdadeiro (1), faça:
		
		printf ("Digite um numero:");
		scanf("%d", &num);
		
		resposta = 1;
		while (num>1)
			
			resposta *= num--;
			
		printf("o fatorial e: %1d/n", resposta);
		break; //se nao tivesse o break, o loop nunca ia parar. ia continuar mandando digitar o número.
	}
	

	return 0;
}
