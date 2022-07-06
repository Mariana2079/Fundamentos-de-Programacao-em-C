/*3) Faça um programa que mostre o resultado da seguinte soma, sendo n o valor
informado pelo usuário :
Soma = 1 + 1/2 + 1/3 + 1/4 + 1/5 + … + 1/n*/

#include <stdio.h>

int main(void)

{
    int n,i;
    float soma=0;
    printf("Informe um valor: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        soma=soma+1.0/i;
        printf("1/%d\t",i);
    }
    printf("\nSoma e %.2f",soma);
}
