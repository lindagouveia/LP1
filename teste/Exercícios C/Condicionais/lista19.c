#include <stdio.h>
    int main(){

        int a, b, c;

            scanf("%i %i %i", &a, &b, &c);

        if(a==0 || b==0 || c==0)

            printf("nao eh triangulo");

        else
            if(a>b+c || b>c+a || c>a+b)

                printf("nao eh triangulo");

            else
                if(a==b && b==c || c==a && a==b)

                    printf("equilatero");

                else
                    if(a==b || c==a || c==b)

                        printf("isosceles");

                    else

                        printf("escaleno");



return 0;


    }
