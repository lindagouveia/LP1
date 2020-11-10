#include <stdio.h>
    int main(){

        int numgola, numgolb;

            scanf("%i %i", &numgola, &numgolb);

        if(numgola > numgolb)

            printf("time A ganhou");

        else
            if(numgolb > numgola)

                printf("time B ganhou");

            else
                printf("empate");

    return 0;

    }
