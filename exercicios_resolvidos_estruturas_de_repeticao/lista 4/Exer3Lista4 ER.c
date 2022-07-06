/*3) Ler dois valores que representam os limites de um intervalo (o usuário pode informar os
valores em ordem crescente ou decrescente). Apresentar os valores da seguinte forma:*/

#include<stdio.h>
#include<math.h>
int main(void)

{
    int valor1,valor2,parteI,i,aux;
    float raiz,parteD;

    printf("Informe um valor para o primeiro intervalo: ");
    scanf("%d",&valor1);
    printf("Informe outro valor para o segundo intervalo: ");
    scanf("%d",&valor2);

    if(valor1>valor2)
    {
        valor1=aux;
        valor1=valor2;
        valor2=aux;
    }
    printf("\nNumero ---- Raiz ---- Parte Inteira ---- Parte Decimal\n");

    for(i=valor1;i<=valor2;i++)
    {
        raiz=sqrt(i);
        parteI=(int)raiz;
        parteD=raiz-parteI;
        printf("         %d          %.2f         %d           %.2f\n",i,raiz,parteI,parteD);
    }

}
