/*3 desafio) Ler uma string e contar quantos espaços sucessivos ela contém entre as palavras, no início ou no final.
Armazenar esses valores em um vetor. Mostrar esse vetor.*/
#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programacao\Funcoes\Minhas funcoes super uteis\Strings\strings.h"
#include "C:\Users\Mariana\Desktop\UTFPR\Programacao\Funcoes\Minhas funcoes super uteis\vetores\vetores.h"
int main(void)
{
    char Texto[101];
    int QtdeEspacosSucessivos[50];
    int i=0,j=0;
    int Qtde=0;

    printf("Informe uma string: ");
    fflush(stdin);
    scanf("%[^\n]s",&Texto);

    while(Texto[i] != '\0')
    {
        if(Texto[i] == ' ')
        {
            Qtde++;
        }
        else if (Qtde != 0)
        {
            QtdeEspacosSucessivos[j]= Qtde;
            j++;
            Qtde=0;
        }
        i++;
    if(Qtde != 0)
    {
        QtdeEspacosSucessivos[j] = Qtde;
        j++;
    }
    printf("\nQuantidade de espacos sucessivos\n");
    MostrarVetor(QtdeEspacosSucessivos,j);
}

void MostrarVetor(int Vet[], int Tam)
{
    int i;
    for(i=0;i<Tam;i++)
    {
        printf("%d  ",Vet[i]);
    }
}
}
