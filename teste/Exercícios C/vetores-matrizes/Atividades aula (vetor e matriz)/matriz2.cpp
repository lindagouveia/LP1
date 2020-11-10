#include <stdio.h>

int main()
{
	
	int t, i, M[4][5] {
							
							{10,  5,  -3},
							{9,   0,   0},
							{32,  20,  1},
							{0,    0,  8}
					};
							
							
		
		for(t=0;t<4;++t){
			for(i=0;i<5;++i){
								
					printf ("%3d", M[t][i]);
			
			}
		}
		return 0;
		
}
