#include <stdio.h>
	int main(){
		
		float x, y, med;
		int ap=0, rep=0, cont=1;
		
		
		while(cont<=20)
		{
			printf("nota 1:\n");
			scanf("%f", &x);
			printf("nota 2:\n");
			scanf("%f", &y);
				med = (x+y)/2;
						
		if(med>=7)
		{	
			printf("1\n");
			
				ap = ap + 1;
				
		}
		else
			{	
			printf("2\n");
				
				rep = rep+1;
				cont++;
			}
		}
		
		printf("Aprovados: %i\nReprovados: %i", ap, rep);
		
	return 0;
	
}
		
