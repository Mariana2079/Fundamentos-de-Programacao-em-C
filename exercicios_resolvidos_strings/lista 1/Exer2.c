/*2) Ler strings que representam um endereço, no formato Rua/Avenida Nome, número.
Finalizar a leitura (entrada de dados) quando o usuário informar algo diferente de Rua ou Avenida (basta validar pelo primeiro caractere, se A ou R).
Contar quantas vezes foi informado um endereço de Rua.
Armazenar em um vetor numérico o número 1 para cada vez que o usuário informar um endereço de Avenida. */
#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programacao\Funcoes\Minhas funcoes super uteis\Strings\strings.h"
int main(void)
{
    char rua[101];
    char num[5];
    int qtde=0;

    do
    {
        printf("Informe o nome da Rua/Avenida: ");
        gets(rua);
        if(rua[0]=='a' || rua[0]=='A' || rua[0]=='r' || rua[0]=='R')
        {
            printf("Informe o numero: ");
            gets(num);
        }
        else
        {
            qtde++;
        }

    }while(rua[0]!='a' || rua[0]!='A' || rua[0]!='r' || rua[0]!='R');

    printf("%d",qtde);





}

