#include <stdio.h>
    int main(){

        int nota, x;


            printf("digite sua nota:\n");
            scanf("%i", &nota);

        if(nota>0 || nota<=10)

            printf("nota valida");

        while(nota<0 || nota>10)
         {
            printf("valor invalido");
            scanf("%i", &x);

        if(nota<=0 && x>=0)

            printf("valor valido");

                nota = x;
        }

    return 0;

    }




