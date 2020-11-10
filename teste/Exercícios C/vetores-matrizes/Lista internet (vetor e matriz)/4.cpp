#include <stdio.h>
#include <math.h>

int main()
{ 
	int i, v[5] = {1, 2, 3, 4, 5};
	
		for(i=0; i<5; ++i){
			
			if(v[i]%2 == 0){
				
				printf("\n%d", v[i]);
			}
		}
	
		return 0;
}

