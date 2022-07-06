/*3) Elaborar um programa para implementar a operação de potência.*/

#include <stdio.h>

int main(void)

{
    int potencia=1,i,num,exp;

    printf("Informe um numero: ");
    scanf("%d",&num);
    printf("Informe sua potencia: ");
    scanf("%d",&exp);

    for(i=1;i<=exp;i++)
    {
        potencia=potencia*num;
    }
    printf("%d elevado a %d e %d",num,exp,potencia);
}

