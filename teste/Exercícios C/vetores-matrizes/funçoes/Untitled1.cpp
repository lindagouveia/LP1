#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;




int main()
{
	
	printf ("%d %d %d\n", abs(0), abs(-3), abs(10));
	
}

abs (int x){
	
	
	return ((x < 0)? -x:x);
}
