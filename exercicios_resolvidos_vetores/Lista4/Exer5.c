/*5) Gerar um vetor aleatório com 10 elementos entre 0 e 100. Verificar se cada um dos elementos
armazenados no vetor é primo. Mostrar da seguinte forma:
Vet[0] = 10  não é primo;
Vet[1] = 7  é primo;
Vet[2] = 30  não é primo;
 Utilizar, obrigatoriamente, uma função para verificar se o número é primo. Essa função pode
retornar 0 para indicar que o número e primo e 1 para indicar que não é primo. Tratar esse retorno
na função chamadora.*/
#include<stdio.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programacao\Funcoes\Minhas funcoes super uteis\vetores\vetores.h"
#include "C:\Users\Mariana\Desktop\UTFPR\Programacao\Funcoes\Minhas funcoes super uteis\primo.h"
int main(void)
{
    int vetor[10];
    int i;

    gerarVetor(vetor,10,100);
    mostrarVetor(vetor,10,10);
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("Vet[%d] = %d ",i,vetor[i]);
        if(primo(vetor[i]) == 0)
        {
            printf("E primo\n");
        }
        else
        {
            printf("Nao e primo\n");
        }
    }
}
