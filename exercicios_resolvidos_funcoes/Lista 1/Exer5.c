/*5) Fazer uma fun��o que mostre os divisores de um n�mero. Essa fun��o recebe como par�metro o
n�mero e mostra os divisores de 1 at� o n�mero passado como par�metro da fun��o.
a) Usar essa fun��o para mostrar os divisores de valores informados pelo usu�rio. Validar para que
seja uma entrada positiva.
b) Usar essa fun��o para mostrar os divisores de cada n�mero de um intervalo com os limites
informados pelo usu�rio. E a fun��o do exerc�cio anterior para apresentar a quantidade de divisores.
Apresentar primeiro os divisores e em seguida (no final da respectiva linha) a quantidade de
divisores.
Exemplo:
intervalo entre 5 e 7
5 => 1 5. Total de divisores: 2
6 => 1 2 3 6. Total de divisores: 4
7 => 1 7. Total de divisores: 2*/
#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programa��o\Funcoes\Minhas funcoes super uteis\QtdeDivisores2.h"
#include "C:\Users\Mariana\Desktop\UTFPR\Programa��o\Funcoes\Minhas funcoes super uteis\QtdeDivisores.h"
int main(void)
{
    char repetir;
    int num,num2,opcao,divisores;

    do
    {
        system("cls");
        printf(" 1 - Informar quantidade de divisores de numeros\n");
        printf(" 2 - Informar quantidade de divisores de um intervalo\n");
        printf(" 3 - Informar a maior quantidade de divisores de um numero\n");
        printf("Opcao: ");
        scanf("%d",&opcao);

        switch(opcao)
        {
            case 1:
            {
                do
                {
                    do
                    {
                        printf("Informe um valor inteiro e positivo (zero para parar): ");
                        scanf("%d",&num);
                    }while(num<0);
                    divisores=qtdeDivisores2(num);
                    printf("%d possui %d divisores\n\n",num,divisores);
                }while(num2!=0);

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
                    printf("Informe outro valor para o segundo intervalo: ");
                    scanf("%d",&num2);
                }while(num2<0);
                divisores=divisoresIntervalo(num,num2);
                printf("O intervalo possui %d divisores",divisores);


                break;
            }
            case 3:
            {

                break;
            }
            default:
            {
                printf("Opcao incorreta!");
            }
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);

    }while(repetir=='S'||repetir=='s');
}
