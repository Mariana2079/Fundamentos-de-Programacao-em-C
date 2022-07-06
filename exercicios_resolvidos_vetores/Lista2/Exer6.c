/*6) Gerar aleatoriamente 10 elementos para um vetor. Desse vetor, calcular e mostrar:
a) A soma de elementos armazenados nesse vetor que são inferiores a 100;
b) A quantidade de elementos armazenados nesse vetor que são iguais a 100;
c) A média dos elementos armazenados nesse vetor que são superiores a 100.
Validar para não realizar uma divisão por zero.*/
#include<stdio.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\vetores\vetores.h "
int main(void)
{
    int vetor[10];
    int soma=0,qtde=0,qtde2=0,soma2=0;
    int i;
    float media;

    printf("Vetor: \n");
    gerarVetor(vetor,10,200);
    mostrarVetor(vetor,10,10);

    for(i=0;i<10;i++)
    {
        if(vetor[i]<100)
        {
            soma=soma+vetor[i];
        }
        if(vetor[i]==100)
        {
            qtde++;
        }
        if(vetor[i]>100)
        {
            qtde2++;
            soma2=soma2+vetor[i];
        }
    }
    if(qtde2>0)
    {
        media=(float)soma/qtde2;
        printf("\nA media dos elementos armazenados nesse vetor que sao superiores a 100 = %.2f\n",media);
    }
    printf("\nA soma de elementos que sao inferiores a 100:  %d\n",soma);
    printf("\nA quantidade de elementos armazenados nesse vetor que sao iguais a 100: %d\n",qtde);

}
