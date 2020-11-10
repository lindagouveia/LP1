#include <stdio.h>
    int main(){

        float x, y, med;
        int alp=0, alr=0, cont=1, alunos;

        printf("numero de alunos:\n");
        scanf("%i", &alunos);

        while(cont <= alunos)
        {		
         	printf("nota 1:\n");
         	scanf("%f", &x);
         	printf("nota 2:\n");
         	scanf("%f", &y);

                med = (x+y)/2;

        	if(med >= 7)
			{
				printf("aprovado\n");
                alp = alp+1;
          
			}
        	else
        	{
			 	printf("reprovado\n");
                	alr = alr+1;
					cont++;	         

			}

    	}
			
			printf("alunos aprovados: %i\n alunos reprovados: %i\n", alp, alr);
			
    return 0;
    }
    
