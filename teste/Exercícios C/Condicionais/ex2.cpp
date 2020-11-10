#include <stdio.h>

int main ()
{
	int a, b, c;
	
	
	printf ("Digite 3 numeros inteiros:");
	scanf ("%d %d %d", &a, &b, &c);
	printf ("%d %d %d", a, b, c);
	
	
	if (a > b && a > c) 
	{
	
		printf ("o maior numero e %d", a);
	}
	
	else 
	{
	
	
		if (b > a && b > c) 
		{
		
			printf ("o maior numero e %d", b);
		
	}	
	
		else 
		
			
			printf ("o maior numero e %d", c);
		}
		
		
	
	
	return 0;
}
