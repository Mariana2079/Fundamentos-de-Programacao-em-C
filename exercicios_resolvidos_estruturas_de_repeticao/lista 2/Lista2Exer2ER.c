/*2) Calcular e mostrar o fatorial de um número informado pelo usuário.*/

#include <stdio.h>

int main(void)

{
    int num,i,fat=1;

    printf("Informe um numero: ");
    scanf("%d",&num);

    //n!=n*(n-1)

    for(i = num; i > 1; i = i - 1)
    {
         fat = fat * i;
    }


    printf("Fatorial de %d e %d\n",num,fat);



}
