/*2) Fazer uma fun��o para verificar se um n�mero � primo. A fun��o ser� implementada em um arquivo de cabe�alho.
Fazer uma fun��o para realizar afuncionalidade de system (�pause�);
a) Usar essa fun��o para verificar se um n�mero informado pelo usu�rio � primo.
Validar a entrada para que o usu�rio informe um n�mero positivo e maior que zero.
b) Usar essa fun��o para mostrar os primos no intervalo entre 1 e 100.
c) Usar essa fun��o para fazer a m�dia dos primos entre 200 e 100.*/
#include <stdio.h>
#include <stdlib.h>
#include "primo.h"
int main(void)
{
    char opcao,repetir;
    int numero,i,soma,qtde,retorno;
    float media;

    do
    {
        system("cls");
        soma=0;
        qtde=0;
        printf("A - verificar se um numero e primo\n");
        printf("B - mostrar primos entre 1 e 100\n");
        printf("C - media dos primos entre 100 e 200\n");
        printf("Selecione uma opcao: ");
        fflush(stdin);
        scanf("%c",&opcao);
        switch(opcao)
        {
            case 'A':
            case 'a':
            {
                do
                {
                    printf("Informe um numero maior que zero: ");
                    scanf("%d",&numero);
                }while(numero<=0);
                //int primo(int num)
                retorno = primo(numero);
                if(retorno==0)
                {
                    printf("%d e primo\n",numero);
                }
                else
                {
                    printf("%d nao e primo\n",numero);
                }
                break;
            }
            case 'B':
            case 'b':
            {
                for(i=1;i<=100;i++)
                {
                    retorno = primo(i);
                    if(retorno==0)//if(primo(i)==0
                    {
                        printf("%d\t",i);
                    }
                }
                break;
            }
            case 'C':
            case 'c':
            {
                for(i=200;i>100;i--)
                {
                    retorno = primo(i);
                    if(retorno==0)
                    {
                        soma=soma+i;
                        qtde++;
                    }
                }
                //nao precisa inicializar pois existe ao menos 1 primo no intervalo
                media=(float)soma/qtde;
                printf("\nMedia dos primos entre 100 e 200: %.2f\n",media);
                break;
            }
            default:
            {
                printf("Opcao invalida\n");
            }
        }



        printf("\nExecutar novamente (s/S para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S'||repetir=='s');
}


