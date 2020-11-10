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
