/*2) Fazer uma fun��o que converte de cent�metros para polegadas. Usar essa fun��o para:
a) Imprimir uma tabela de convers�o de cent�metros para polegadas entre 1 a 20.
b) Mostrar o valor em polegadas de um determinado valor informado pelo usu�rio.*/
#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programa��o\Funcoes\Minhas funcoes super uteis\ConverterCmPolegada.h"
int main(void)
{
    char repetir;
    int num,num2,opcao,i;
    float polegadas;

    do
    {
        system("cls");
        printf(" 1 -  Imprimir uma tabela de conversao de centimetros para polegadas entre 1 a 20\n");
        printf(" 2 - Mostrar o valor em polegadas de um numero\n");
        printf("Opcao: ");
        scanf("%d",&opcao);

        switch(opcao)
        {
            case 1:
            {
                for(num=1;num<=20;num++)
                {
                     polegadas=converterCmPolegadaNum(num);
                    printf("%d cm = %.2f in (polegadas)\n",num,polegadas);
                }
                break;
            }
            case 2:
            {
                do
                {
                    printf("Informe um valor: ");
                    scanf("%d",&num);
                }while(num<0);
                polegadas=converterCmPolegadaNum(num);
                printf("%d cm = %.2f in (polegadas)\n",num,polegadas);
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
