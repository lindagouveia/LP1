#include <stdio.h>
#include <math.h>

	int main()
{
		int prod, i, v1[2], v2[2];
	
	 prod = v1[0]*v2[0] + v1[1]*v2[1];
	 
		for(i=0; i<2; ++i){
			
			scanf("%d", &v1[i]);
		}
		
			for(i=0; i<2; ++i){
				
				scanf("%d", &v2[i]);
			}
		
		prod = v1[0]*v2[0]+ v1[1]*v2[1];
		
		printf("o produto: %d", prod);
		
		return 0;
}
