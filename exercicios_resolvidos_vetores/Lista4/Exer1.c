/*1) Gerar aleatoriamente 10 elementos para um vetor. Mostrar esses elementos e informar se cada
um deles é par ou ímpar. Fazer a média dos pares e somar os ímpares.*/
#include<stdio.h>
#include<locale.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\vetores\vetores.h "
int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"");
    int vetor[10];
    float media;
    int soma=0,soma2=0,qtde=0,i;

    gerarVetor(vetor,10,50);
    mostrarVetor(vetor,10,10);
    printf("\n");
    for(i=0;i<10;i++)
    {
        if(vetor[i]%2==0)
        {
         printf("%d é par\n",vetor[i]);
         qtde++;
         soma=soma+vetor[i];

        }
        else
        {
            printf("%d é ímpar\n",vetor[i]);
            soma2=soma2+vetor[i];
        }
    }
    if(qtde>0)
    {
        media=(float)soma/qtde;
        printf("\nMedia dos pares: %.2f\n",media);
    }
    printf("\nSoma dos ímpares: %d\n",soma2);

}
