/*4) Gerar dois vetores com 20 valores aleatórios cada, entre 0 e 30.
Percorrer esses vetores e armazenar em um vetor de strings: P se o primeiro e maior que o
segundo, S se o segundo e maior que o primeiro ou I se ambos são iguais.
Mostrar os três vetores O vetor de caracteres conterá algo do tipo: P S P P S I...*/
#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programacao\Funcoes\Minhas funcoes super uteis\Strings\strings.h"
#include "C:\Users\Mariana\Desktop\UTFPR\Programacao\Funcoes\Minhas funcoes super uteis\vetores\vetores.h"
int main(void)
{
    int vetor[20];
    int vetor2[20];
    char vetor3[21];
    int i;
        if(vetor[i]>vetor2[i])
        {
            vetor2[i]='P';
        }
        else if(vetor3[i]>vetor2[i])
        {
            vetor3[i]='S';
        }
    }
    if(vetor3[i]=='\0')
    {
        printf("%s",vetor3);
    }

}

