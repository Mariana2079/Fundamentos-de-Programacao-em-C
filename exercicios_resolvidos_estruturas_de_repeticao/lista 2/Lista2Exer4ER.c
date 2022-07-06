/*4) Apresentar os números divisíveis por 4 ou múltiplos de 10 entre 500 e 0 e a média desses
múltiplos.*/

#include <stdio.h>

int main(void)

{
    int i,qtde=0;
    float media=0,soma=0;

    for(i=500;i>=0;i--)
    {
        if((i%4==0) || (i%10==0))
        {
            printf("%d\t",i);
            soma=soma+i;
            qtde++;
        }

    }

    media=soma/qtde;

    printf("\nA media e: %.2f",media);

}


