/*5) Mostrar os valores ímpares e não divisíveis por 5 entre 200 e 0. Apresentar os valores
em ordem decrescente. Fazer a média dos valores desse intervalo que são divisíveis por 3
e por 5.*/

#include <stdio.h>

int main(void)

{
    int i,soma=0,qtde=0;
    float media=0;

    for(i=200;i>=0;i--)
    {
        if(i%2!=0 && i%5!=0)
        {
            printf("%d\t",i);
        }
        if(i%3==0 && i%5==0)
        {
            soma=soma+i;
            qtde++;
        }
    }

    media=soma/qtde;
    printf("\nA media e: %.2f",media);
}
