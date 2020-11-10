#include <stdio.h>

int main()
{
	int t, i, M[4][4] ={
	
						 { 0, 1, 0, 2 }, 
						 { 0, 1, 0, 2 },
						 { 0, 1, 0, 2 },
						 { 0, 1, 0, 2 }
						 
					};
				  		
				
				
		for(t=0; t<4; ++t){
			for(i=0; i<4; ++i){
				
				printf("3%d", M[t][i]);
				
			}
		}
	
					for(t=0; t<4; ++t){
						for(i=0; i<4; ++i){
				
							printf("%2d", M[i][t]);
							
					    }
				   }
	
	return 0;
}
