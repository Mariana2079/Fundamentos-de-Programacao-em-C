/*8) Apresentar os números entre 100 e 200. Contar quantos são ímpares e não divisíveis por
3 nesse intervalo. Fazer a média dos valores pares e divisíveis por 5 do intervalo.int*/

#include <stdio.h>

int main(void)

{
    int i,qtde=0,soma=0;
    float media=0;

    for(i=100;i<=200;i++)
    {
        if(i%2!=0 && i%3!=0)
        {
            printf("%d\t",i);
            qtde++;
        }
        if(i%2==0 && i%5==0)
        {
            soma=soma+i;
            qtde++;
        }
    }

    media=soma/qtde;
    printf("\nA media dos valores pares e divisiveis por 5 do intervalo e %.2f\n",media);

}
