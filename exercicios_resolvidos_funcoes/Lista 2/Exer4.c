/*4) Fazer uma função que apresenta o resultado da multiplicação de dois números. Usar essa função
para:
a) Apresentar a multiplicação de dois números informados pelo usuário.
b) Apresentar a tabuada (0 a 10) de um número informado pelo usuário.*/
#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\multiplicacao.h"
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
