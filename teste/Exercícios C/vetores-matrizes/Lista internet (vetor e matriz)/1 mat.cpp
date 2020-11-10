#include <stdio.h>

int main(){
	
	int m[2][2], i, j, qtd = 0;
	
	for(i=0; i<4; ++i){
		for(j=0; j<4; ++j){
			
			scanf("%d", &m[i][j]);
		}
	}
	
				for(i=0; i<4; ++i){
					for(j=0; j<4; ++j){
					
						if(m[i][j] > 10){
						
							qtd = qtd+1;
						}
					}
				}
							
			printf("quantidade: %d", qtd);
		
		return 0;
}
