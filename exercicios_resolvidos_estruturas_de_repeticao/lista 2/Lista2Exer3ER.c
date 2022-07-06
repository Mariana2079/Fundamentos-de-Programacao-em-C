/*3)lista de sala*/
#include <stdio.h>
#include <math.h>

int main(void)

{
    int i;
    int quadrado;
    float raiz;

    printf("Quadrado dos divisiveis por 3 entre 0 e 100\n");
    for(i=0;i<=100;i++)
    {
        if(i%3==0)
        {
            quadrado = i * i;
            printf("%d\t%d\n",i,quadrado);
        }
    }

    printf("Raiz quadrada dos positivos divisíveis por 5 ou por 7 entre 0 a 100\n");
    for(i=0;i<=100;i++)
   {
        if(i%5==0 || i%7==0)
        {
           raiz=sqrt(i);
           printf("%d\t%.2f\n",i,raiz);
        }

   }
}

