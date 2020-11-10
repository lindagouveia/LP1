#include <stdio.h>

int main()
{
	int aux, i, v[4] = {0, 1, 2, 3};
	
		for(i=0; i<2; ++i){
			
			aux = v[i];
			v[i] = v[4-i];
			v[4-i] = aux;
		}
		
			for(i=0; i<4; ++i){
		
				printf("%d\n", v[i+1]);
			}
	return 0;
}
