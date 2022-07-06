/*1) A fórmula para cálculo de combinações simples de n elementos p a p é: n!/(p! * (n-p)!). Utilizar a
função do fatorial para implementar a fórmula. Nessa fórmula n significa o universo de elementos
(a quantidade de dígitos que podem ser utilizados para compor os números de telefone (10 que são
os dígitos de 0 a 9), a quantidade de números da loteria a serem combinados, 60 no caso da megasena)
e p o total de elementos combinados (9 dígitos no caso de São Paulo, por exemplo e 6 para os
números da mega-sena).*/

#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\fatorial.h"
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\MDC.h"
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\MMC.h"
int main(void)
{
    char repetir;
    int opcao,valor1,valor2,Cnp,MDC,MMC;

    do
    {
        system("cls");


        printf("1 - Calcular combinacao simples\n");
        printf("2 - Calcular o maior divisor comum\n");
        printf("3 - Calcular o minimo multiplo comum\n");
        printf("Opcao: ");
        scanf("%d",&opcao);

        switch (opcao)
        {
            case 1:
            {
                do
                {
                    printf("Informe o valor de n: ");
                    scanf("%d",&valor1);
                }while(valor1<0);

                do
                {
                    printf("Informe o valor de p: ");
                    scanf("%d",&valor2);
                }while(valor2<0);
                Cnp= calcularFatorial(valor1)/(calcularFatorial(valor2)*calcularFatorial(valor1-valor2));
                printf("O valor da combinacao e: %d",Cnp);
                break;
            }
/*2) Elaborar uma função para calcular o mdc (maior divisor comum) entre dois números. Os
números são lidos na função chamadora e passados como parâmetro para a função que calcula o
mdc. Esta função retorna o mdc para a função chamadora*/
            case 2:
            {
                do
                {
                    printf("Informe um valor: ");
                    scanf("%d",&valor1);
                }while(valor1<0);

                do
                {
                    printf("Informe outro valor: ");
                    scanf("%d",&valor2);
                }while(valor2<0);
                MDC = calcularMDC(valor1,valor2);
                printf("O maximo divisor comum entre %d e %d e: %d",valor1,valor2,MDC);
                break;
            }
/*3) Elaborar uma função para calcular o mmc (mínimo múltiplo comum) entre dois números. Os
números são lidos e passados como parâmetro para a função que calcula o mmc. Esta função
retorna o mmc para a função chamadora.*/

            case 3:
            {
                 do
                {
                    printf("Informe um valor : ");
                    scanf("%d",&valor1);
                }while(valor1<0);

                do
                {
                    printf("Informe outro valor: ");
                    scanf("%d",&valor2);
                }while(valor2<0);
                MMC = calcularMMC(valor1,valor2);
                printf("O minimo multiplo comum entre %d e %d e: %d",valor1,valor2,MMC);
                break;
            }
            default:
            {
                printf("Opcao invalida!");
            }
        }


        printf("\nExecutar novamente? (s/S para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S' || repetir=='s');

}
