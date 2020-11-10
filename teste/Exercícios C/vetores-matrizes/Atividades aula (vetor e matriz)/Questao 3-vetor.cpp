//Faça um programa que leia um vetor com 8 elementos. 

//A seguir, troque o primeiro elemento com o último, o segundo com o penúltimo e assim por diante.

#include<stdio.h>

int main(){
	
	int V[8],i,aux;

		for(i=0;i<8;i++){
			
			scanf("%d",&V[i]);
		}

				for(i=0;i<4;i++){
							
					aux=V[i];

					V[i]=V[8-i];
					V[8-i]=aux;
				}
				
					for(i=0;i<8;i++){
					
						printf("V[%d] = %d\n",i,V[i+1]);
					}
return 0;
}
