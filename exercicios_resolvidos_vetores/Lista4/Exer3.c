/*3) Gerar um vetor com 100 elementos entre 0 e 400, inclusive, mostrar o vetor gerado. Em seguida
percorrer o vetor e contar quantos elementos estão entre 00 e 100, quantos estão entre 101 e 200,
quantos estão entre 201 e 300 e quantos estão entre 301 e 400. A quantidade será armazenada em
outro vetor com tamanho 4, para cada uma das respectivas quantidades. Por exemplo,
VetQuantidades[0] conterá a quantidade de valores entre 10 e 100 no vetor de origem.
Obs.: é indispensável que os valores sejam contados à medida que o vetor é percorrido, assim:
VetQuantidade[0] = VetQuantidade[0] + 1. */
#include<stdio.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\vetores\vetores.h "
int main(void)
{
    int vetor[100];
    int vetor2[4]={0,0,0,0};
    int i;

    gerarVetor(vetor,100,400);
    mostrarVetor(vetor,100,20);

    for(i=0;i<100;i++)//passar pelas 100 casinhas
    {
        if(vetor[i]<=100)
        {
            vetor2[0]++;
        }
        else if(vetor[i]>101 && vetor[i]<=200)
        {
            vetor2[1]++;
        }
        else if(vetor[i]>201 && vetor[i]<=300)
        {
            vetor2[2]++;
        }
        else //if(vetor[i]>301 && vetor[i]<400)
        {
            vetor2[3]++;
        }
    }
    printf("\n\n");
    mostrarVetor(vetor2,4,4);
}
