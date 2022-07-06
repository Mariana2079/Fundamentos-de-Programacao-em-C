/*//vetores, funções, arquivos de cabeçalho
2) Gerar um arquivo de cabeçalho com uma função para gerar um vetor com números aleatórios, com determinado tamanho e
em uma determinada faixa de valores e com outra função para mostrar um vetor com tamanho não fixo.
Utilizar essas funções para gerar um vetor de valores randômicos com a quantidade de elementos informada pelo usuário.
Validar a entrada para que seja informado um valor positivo para o tamanho do vetor. Mostrar o vetor.
Encontrar o menor entre os elementos gerados e armazenados no vetor e fazer a média dos pares que estão no vetor.
Validar para que não seja realizada divisão por zero no cálculo da média.*/
#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\vetores.h "
int main(void)
{
    char repetir;
    int tamanho,menor,indice,i,soma,qtde;
    float media;

    do
    {
        system("cls");
        soma=0;
        qtde=0;
        do
        {
            printf("Informe o tamanho do vetor: ");
            scanf("%d",&tamanho);
        }while(tamanho<=0);

        int vetor[tamanho];
        //void gerarVetor (int vet[], int tam, int limite)
        gerarVetor(vetor,tamanho,50);
        //void mostrarVetor(int vet[], int tam, int qtdeLinha)
        mostrarVetor(vetor,tamanho,8);

        menor=vetor[0];
        for(i=0;i<tamanho;i++)
        {
            if(vetor[i]<menor)
            {
                menor=vetor[i];
                indice=i;
            }
            if(vetor[i]%2==0)
            {
                soma=soma+vetor[i];
                qtde++;
            }
        }
        printf("\nO menor valor e %d e esta no indice %d\n",menor,indice);
        if(qtde>0)
        {
            media=(float)soma/qtde;
            printf("\nMedia dos pares %.2f",media);
        }
        printf("\nExecutar novamente? (s/S para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    return(0);
}
