#include <stdio.h>
    int main(){

            float h, media;
            char sexo;
            int qth=0, n=5, qtm=0, i=1, hmulher=0;

            while(i<=n)
             {

                printf("digite 'f' para mulher e 'm' para homemn\n");
            c = getchar();

            if(sexo == 'm')

                        qth = qth+1;

            else

                if(sexo == 'f')

                        qtm = qtm+1;

                printf("digite sua altura:\n");
                scanf("%f", &h);

                        hmulher = h+hmulher;
                        i++;
            }

                         media = hmulher/qtm;

                printf("a media da altura das mulheres eh: %f\n", media);
                printf("a quantidade de homens eh: %i\n", qth);


        return 0;

        }








