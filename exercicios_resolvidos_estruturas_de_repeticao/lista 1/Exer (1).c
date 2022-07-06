/*1) Elaborar um programa para mostrar os números pares entre 10 e 100. Fazer a média dos
valores desse intervalo que são divisíveis por 5*/

#include <stdio.h>

int main(void)

{
    int i,soma=0,qtde=0;
    float media;

    for( i=10;i<=100 ; i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
        if(i%5==0)
        {
            soma=soma + i;
            qtde = qtde + 1;
        }
    }
    media=(float)soma/qtde;

    printf("\n\nA media dos numeros divisiveis por 5 e %.2f\n",media);

}

