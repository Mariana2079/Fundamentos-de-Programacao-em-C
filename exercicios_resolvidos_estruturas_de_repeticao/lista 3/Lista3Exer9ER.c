/*9) Ler dois valores que representam os limites de um intervalo. Apresentar os valores separados por tabulação.
Fazer a média dos valores que são divisíveis por 11 e por 7, desse intervalo*/

#include <stdio.h>

int main(void)

{
    int valor1,valor2,qtde=0,soma=0,i;
    float media=0;

    printf("Informe o valor do para o primeiro intervalo: ");
    scanf("%d",&valor1);
    printf("Informe outro valor para o segundo intervalo: ");
    scanf("%d",&valor2);

    if(valor1>valor2)
    {
       i=valor1;
       valor1=valor2;
       valor2=i;
    }

    for(i=valor1;i<=valor2;i++)
    {
        printf("%d\t",i);

        if(i%11==0 && i%7==0)
        {
            soma=soma+i;
            qtde++;
        }

    }

    media=soma/qtde;
    printf("\nA media dos valores que sao divisiveis por 11 e por 7 no intervalo e %.2f\n",media);
}
