/*1) Gerar um vetor de inteiros com 15 elementos. Gerar outros dois vetores um contendo
os valores pares e outro os �mpares. Que tamanho deve ter o vetor que armazena os pares
e os �mpares? Por qu�? Fazer inicialmente a representa��o gr�fica do conte�do dos
vetores:*/
#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programa��o\Funcoes\Minhas funcoes super uteis\vetores.h "
int main(void)
{
    char repetir;
    int vet[15];
    int vetPares[15];
    int vetImpares[15];
    int i,iPares=0,iImpares=0;

    do
    {
        system("cls");
        //void gerarVetor(int vet[], int tam, int limite)
        gerarVetor(vet,15,120);
        //void mostrarVetor(int vet[], int tam, int qtdeLinha)
        mostrarVetor(vet,15,120);

        for(i=0;i<15;i++)
        {
            if(vet[i]%2==0)
            {
                vetPares[iPares]=vet[i];
                iPares++;
            }
            else
            {
                vetImpares[iImpares]=vet[i];
                iImpares++;
            }
        }
        printf("\n\nValores pares\n");
        mostrarVetor(vetPares,iPares,120);
        printf("\n\nValores impares\n");
        mostrarVetor(vetImpares,iImpares,120);

        printf("\nExecutar novamente?(S/s para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S'||repetir=='s');
    return(0);

}
