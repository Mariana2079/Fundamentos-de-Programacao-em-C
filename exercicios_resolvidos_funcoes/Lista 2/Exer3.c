/*3) Fazer uma função que converte de reais para dólares ou de dólares para reais. Essa função recebe
como parâmetros: o valor a ser convertido, o valor da cotação, é se é para converter em dólares ou
em reais. A função faz a conversão e retorna o valor convertido.*/
#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\ConversaoDolares.h"
int main(void)
{
    char repetir;
    int num,num2,opcao,resposta;

    do
    {
        system("cls");
        printf(" 1 - Informar a conversao de reais para dolares\n");
        printf(" 2 - Informar a conversao de dolares para reais\n");
        printf("Opcao: ");
        scanf("%d",&opcao);

        switch(opcao)
        {
            case 1:
            {
                do
                {
                    printf("Informe o valor a ser convertido: ");
                    scanf("%d",&num);
                    if(num<0)
                    {
                        printf("Informe um valor positivo!\n");
                    }
                }while(num<0);
                do
                {
                    printf("Informe a cotacao do dolar: ");
                    scanf("%d",&num2);
                    if(num2<0)
                    {
                        printf("Nao existe cotacao negativa!\n");
                    }
                }while(num2<0);
                resposta=converterDolar(num,num2);

                break;
            }
            case 2:
            {
                do
                {
                    printf("Informe o valor a ser convertido: ");
                    scanf("%d",&num);
                    if(num<0)
                    {
                        printf("Informe um valor positivo!\n");
                    }
                }while(num<0);
                do
                {
                    printf("Informe a cotacao do dolar: ");
                    scanf("%d",&num2);
                    if(num2<0)
                    {
                        printf("Nao existe cotacao negativa!\n");
                    }
                }while(num2<0);
                resposta=converterReais(num,num2);

                break;
            }
            default:
            {
               printf("Opcao invalida!");
            }

        }




        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);

    }while(repetir=='S'||repetir=='s');
}
