/*2) Elaborar um programa para mostrar, em ordem decrescente, os n�meros divis�veis por 3 e por 5 entre 200 e 100.*/

#include <stdio.h>

int main(void)

{
    int i;

    printf("Os numeros divisiveis por 3 e 5 entre 200 e 100, em ordem decrescente, sao\n");

    for(i=200;i>=100;i--)
    {
        if(i%3==0 && i%5==0)
        {
            printf("%d\t",i);
        }
    }



}

