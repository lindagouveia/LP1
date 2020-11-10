#include <stdio.h>
	int main(){
		
		int i, j = 0, alunosmed = 0;
		float media[10], n1, n2, n3, n4;
		
		for(i = 0; i < 10; i++)
		{
				printf("digite suas notas:\n");
				scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
				
				media[j] = (n1+n2+n3+n4)/4;
		
		if(media[j] >= 7)
		
				alunosmed = alunosmed + 1;
				j++;
		}
		
				printf("alunos com med >= 7: %i", alunosmed);
				
	return 0;
	}
