#include <stdio.h>
	int main(){
		
		int a, b, c;
	
			scanf("%i %i %i", &a, &b, &c);
			
		if(a+b == c)
			
			printf("%i + %i = %i\n", a, b, c);
		
		else
			
			if(a+c == b)
				
				printf("%i + %i = %i\n", a, c, b);
			
			else
				
				if(c+b == a)
					
					printf("%i + %i = %i\n", c, b, a);
				
				else
					printf ("nao existe");
	
	return 0;
}
				
				
	
