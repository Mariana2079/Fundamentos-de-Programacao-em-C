/*2) Ler strings que representam um endere�o, no formato Rua/Avenida Nome, n�mero.
Finalizar a leitura (entrada de dados) quando o usu�rio informar algo diferente de Rua ou Avenida (basta validar pelo primeiro caractere, se A ou R).
Contar quantas vezes foi informado um endere�o de Rua.
Armazenar em um vetor num�rico o n�mero 1 para cada vez que o usu�rio informar um endere�o de Avenida. */
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

