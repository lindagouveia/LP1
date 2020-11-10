#include <stdio.h>

int main()
{
	
	int soma, i, A[6] = {1, 0, -2, -5, 7}; //A
	
	printf ("Digite o valor de A[5]: "); //B
	scanf ("%d", &A[5]); 
	
	soma = A[0]+A[1]+A[5]; 
	
	printf ("O valor da soma e: %d", soma);
	
	A[4] = 100; //C
	
	for (i=0; i<=5; i++){ //D
		
		printf ("\n O vetor [%d] e: %d", i, A[i]);
	}

	return 0;
	
}
	
	

	
	
	
