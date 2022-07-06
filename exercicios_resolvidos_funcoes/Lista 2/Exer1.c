/*1) Fazer uma função para calcular o quadrado de um número. Usar essa função para (usar
obrigatoriamente a mesma função):*/
#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\Quadrado.h"
int main(void)
{
    char repetir;
    int num,num2,opcao,quadrado;

    do
    {
        system("cls");
        printf(" 1 - Informar o quadrado de um numero\n");
        printf(" 2 - Informar o quadrado de um intervalo\n");
        printf(" 3 - Implementar a formula: (x + y) * x^2 / y^2\n");
        printf("Opcao: ");
        scanf("%d",&opcao);

        switch(opcao)
        {
            case 1:
            {
                do
                {
                    printf("Informe um valor inteiro e positivo: ");
                    scanf("%d",&num);
                }while(num<0);
                quadrado=calcularQuadrado(num);
                printf("O quadrado de %d e: %d",num,quadrado);
                break;
            }
            case 2:
            {
                do
                {
                    printf("Informe um valor para o primeiro intervalo: ");
                    scanf("%d",&num);
                }while(num<0);
                do
                {
                    printf("Informe um valor para o outro intervalo: ");
                    scanf("%d",&num2);
                }while(num2<0);
                quadrado= quadradoIntervalo(num,num2);
                break;
            }
            case 3:
            {
                do
                {
                    printf("Informe um valor inteiro e positivo: ");
                    scanf("%d",&num);
                }while(num<0);
                do
                {
                    printf("Informe um valor inteiro e positivo: ");
                    scanf("%d",&num2);
                }while(num2<0);
                quadrado= calcularFormula(num,num2);
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
