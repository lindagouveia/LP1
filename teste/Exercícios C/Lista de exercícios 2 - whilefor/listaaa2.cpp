#include <stdio.h>
	int main(){
		
		float x, y, med;
		int qta=0, qtr=0, cont=1, alunos;
		
			printf("numero de alunos:\n");
			scanf("%i", &alunos);
			
		while(cont<=alunos)
		{	
			  scanf("%f %f", &x, &y);
			  	
				  	med = (x+y)/2;
		
		if(med>=7){
		
				
				printf("aprovado");
				
					qta = qta+1;
	}
		
		else
				printf("reprovado");
					
					qtr = qtr+1;
					
		}
				
				printf("quantidade de alunos aprovados e reprovados %i %i", qta, qtr);
	 return 0;
	}
