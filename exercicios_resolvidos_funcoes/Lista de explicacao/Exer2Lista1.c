/*2) Fazer uma função para verificar se um número é primo. A função será implementada em um arquivo de cabeçalho.
Fazer uma função para realizar afuncionalidade de system (“pause”);
a) Usar essa função para verificar se um número informado pelo usuário é primo.
Validar a entrada para que o usuário informe um número positivo e maior que zero.
b) Usar essa função para mostrar os primos no intervalo entre 1 e 100.
c) Usar essa função para fazer a média dos primos entre 200 e 100.*/
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


