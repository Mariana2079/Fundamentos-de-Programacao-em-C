/*4) Fazer uma fun��o que apresenta o resultado da multiplica��o de dois n�meros. Usar essa fun��o
para:
a) Apresentar a multiplica��o de dois n�meros informados pelo usu�rio.
b) Apresentar a tabuada (0 a 10) de um n�mero informado pelo usu�rio.*/
#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programa��o\Funcoes\Minhas funcoes super uteis\multiplicacao.h"
int main(void)
{
    char repetir;
    int num,num2,opcao,resposta;

    do
    {
        system("cls");
        printf(" 1 - Informar a multiplicacao de dois numeros\n");
        printf(" 2 - Informar a tabuada (0 a 10) de um numero\n");
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
                do
                {
                    printf("Informe um valor inteiro e positivo: ");
                    scanf("%d",&num2);
                }while(num2<0);
                resposta=calcularMultiplicacao(num,num2);
                printf("%d * %d = %d",num,num2,resposta);
                break;
            }
            case 2:
            {
                do
                {
                    printf("Informe um valor inteiro e positivo: ");
                    scanf("%d",&num);
                }while(num<0);
                resposta=calcularTabuada(num);



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
