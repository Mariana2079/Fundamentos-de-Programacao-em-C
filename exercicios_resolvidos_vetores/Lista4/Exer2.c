/*2) Gerar aleatoriamente 10 elementos para um vetor menores que 50. Criar outros dois vetores, um
deles armazenando os valores divisíveis por 2, por 3 ou por 5 e em outro os outros valores. Fazer a
média dos valores divisíveis por 2, por 3 ou por 5. Mostrar os dois vetores criados e a média obtida.*/
#include<stdio.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\vetores\vetores.h "
int main(void)
{
    int vetor[10];
    int vetor2[10];
    int vetor3[10];
    int i,i2=0,i3=0,soma=0,qtde=0;
    float media;

    gerarVetor(vetor,10,50);
    printf("Vetor:\n");
    mostrarVetor(vetor,10,10);
    printf("\nVetor dos valores divisiveis por 2, por 3 ou por 5:\n");
    for(i=0;i<10;i++)
    {
        if(vetor[i]%2==0 || vetor[i]%3==0 || vetor[i]%5==0)
        {
            qtde++;
            soma=soma+vetor[i];
            vetor2[i2] = vetor[i];
            i2++;
        }
        else
        {
            vetor3[i3] = vetor[i];
            i3++;
        }
    }
    printf("\n");
    mostrarVetor(vetor2,i2,10);
    printf("\n\n\n");
    mostrarVetor(vetor3,i3,10);
    printf("\n");

    if(qtde>0)
    {
        media=(float)soma/qtde;
        printf("\nMedia dos valores divisiveis por 2, por 3 ou por 5: %.2f\n",media);
    }
}
