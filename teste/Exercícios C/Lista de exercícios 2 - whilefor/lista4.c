#include <stdio.h>
    int main(){

        float x, y, med;

        printf("insira as duas notas:\n");
        scanf("%f %f", &x, &y);

        while(x >= 0 || y >= 0)
         {

                med = (x+y)/2;


            printf("sua media eh: %f\n", med);
            printf("insira duas notas:\n");
            scanf("%f %f", &x, &y);
			
			

        }
        
    return 0;
    
}
