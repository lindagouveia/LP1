#include <stdio.h>
    int main(){

        int senha, cont=1;//
		
	   
	    while(cont<=3)
	    {

            printf("digite sua senha:\n");
            scanf("%i", &senha);
		
		if(senha==4321)
		{
		
        
			printf("senha valida");
			break;
		}
			
			cont++;
     	
		}

			if(senha!=4321)
			{
				
				printf("senha bloqueada");
			
			}	
  	    
            

	    

    return 0;

    }
