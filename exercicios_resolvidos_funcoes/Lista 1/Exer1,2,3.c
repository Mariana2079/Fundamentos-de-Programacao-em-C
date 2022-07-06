/*1) A f�rmula para c�lculo de combina��es simples de n elementos p a p �: n!/(p! * (n-p)!). Utilizar a
fun��o do fatorial para implementar a f�rmula. Nessa f�rmula n significa o universo de elementos
(a quantidade de d�gitos que podem ser utilizados para compor os n�meros de telefone (10 que s�o
os d�gitos de 0 a 9), a quantidade de n�meros da loteria a serem combinados, 60 no caso da megasena)
e p o total de elementos combinados (9 d�gitos no caso de S�o Paulo, por exemplo e 6 para os
n�meros da mega-sena).*/

#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programa��o\Funcoes\Minhas funcoes super uteis\fatorial.h"
#include "C:\Users\Mariana\Desktop\UTFPR\Programa��o\Funcoes\Minhas funcoes super uteis\MDC.h"
#include "C:\Users\Mariana\Desktop\UTFPR\Programa��o\Funcoes\Minhas funcoes super uteis\MMC.h"
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
/*2) Elaborar uma fun��o para calcular o mdc (maior divisor comum) entre dois n�meros. Os
n�meros s�o lidos na fun��o chamadora e passados como par�metro para a fun��o que calcula o
mdc. Esta fun��o retorna o mdc para a fun��o chamadora*/
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
/*3) Elaborar uma fun��o para calcular o mmc (m�nimo m�ltiplo comum) entre dois n�meros. Os
n�meros s�o lidos e passados como par�metro para a fun��o que calcula o mmc. Esta fun��o
retorna o mmc para a fun��o chamadora.*/

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
