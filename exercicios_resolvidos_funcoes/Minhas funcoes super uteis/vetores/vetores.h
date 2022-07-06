//gerar valores para um vetor, até um valor limite passado para a função
#include<time.h>
#include<stdlib.h>
void gerarVetor(int vet[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for(i=0;i<tam;i++)
    {
        vet[i]=rand() % (limite+1);//gera valores entre 0 e 32767
    }
}
//mostrar os valores de um vetor,com n valores por linha
void mostrarVetor(int vet[], int tam, int qtdeLinha)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d\t",vet[i]);
        if((i+1)%qtdeLinha==0)
        {
            printf("\n");
        }
    }
}
void gerarVetorIntervalo(int vet[], int tam, int limSup, int limInf)
{
    int i;
    srand(time(NULL));
    for(i=0;i<tam;i++)
    {
        vet[i] = rand()%(limSup - limInf + 1) + limInf;
    }
}
