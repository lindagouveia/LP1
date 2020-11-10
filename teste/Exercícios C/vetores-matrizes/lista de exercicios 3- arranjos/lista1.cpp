#include <stdio.h>
int main(){
    int v[2], PAR[2], IMPAR[2], i, x = 0, y = 0;
    
    printf("Digite um valor: ");
    
	for(i = 0; i < 2; i++){
        
		scanf("%i", &v[i]);
            
			if(v[i] % 2 == 0)
               
			    PAR[x] = v[i];
           		x++;
           		
		    else
                
				IMPAR[y] = v[i];
				y++;
    }
  
   printf("\n\nNumeros pares digitados: ");
	
	for(i = 0; i < x; i++)
		
		printf(" %d ", PAR [i]);
	
		printf("\n\nNumeros impares digitados: ");

	for(x = 0; x < y ; x++)
		
		printf(" %d ", IMPAR [x]);
		printf("\n\n");
return 0;
}

