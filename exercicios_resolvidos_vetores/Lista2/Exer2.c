/*2) Gerar aleatoriamente 8 elementos para um vetor A. Construir um vetor B de mesma
dimens�o com os elementos de A multiplicados por 2. Represente a solu��o*/
#include<stdio.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programa��o\Funcoes\Minhas funcoes super uteis\vetores\vetores.h"
int main(void)
{

    int vetorA[8];
    int vetorB[8];
    int i;

        gerarVetor(vetorA,8,4);
        for(i=0;i<8;i++)
        {
           vetorB[i]=vetorA[i]*2;
        }
        printf("\nVetor A:\n");
        mostrarVetor(vetorA,8,4);
        printf("\nVetor B = 2A: \n");
        mostrarVetor(vetorB,8,4);

    return(0);

}
