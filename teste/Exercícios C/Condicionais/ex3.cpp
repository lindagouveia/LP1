#include <stdio.h>

int main ()
{
	float n1, n2, n3, media;
	
	printf ("Digite as suas 3 notas:");
	scanf ("%f %f %f", &n1, &n2, &n3);
	
	media = (2*n1 + 3*n2 + 5*n3)/10;
	
	if (media <= 2.9){
		
		printf ("reprovado");
	}
	
	else
	
	if (media > 3 && media < 4.9){
		
		printf ("recuperacao");
	}
	
	else {
		
		printf ("aprovado");
		
	}
	
	
	
	return 0;

}
