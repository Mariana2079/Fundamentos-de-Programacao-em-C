/*4) Gerar aleatoriamente 10 elementos para um vetor A e construir um vetor B de mesma
dimens�o com os mesmos elementos de A, mas em ordem invertida, ou seja, o primeiro
elemento de A ser� o �ltimo de B, o segundo elemento de A ser� o pen�ltimo de B e
assim sucessivamente. Represente a solu��o.*/
#include<stdio.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programa��o\Funcoes\Minhas funcoes super uteis\vetores\vetores.h "
int main(void)
{
    int vetorA[10];
    int vetorB[10];
    int i,j=10-1;//recebe o ultimo indice

    gerarVetor(vetorA,10,100);

    for(i=0;i<10;i++)
    {
        vetorB[j]=vetorA[i];
        j--;
    }
    printf("Vetor A: \n");
    mostrarVetor(vetorA,10,10);
    printf("Vetor B:\n\n");
    mostrarVetor(vetorB,10,10);
}
