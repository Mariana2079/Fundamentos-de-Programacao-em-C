/*4) Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna a quantidade de
divisores que esse número possui.*/
#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\QtdeDivisores.h"
int main(void)
{
    char repetir;
    int num,num2,opcao,maior,divisores,i;

    do
    {
        maior=0;
        system("cls");
        printf(" 1 - Informar quantidade de divisores de um numero\n");
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
                    printf("Informe um valor inteiro e positivo: ");
                    scanf("%d",&num);
                }while(num<0);
                divisores=qtdeDivisores(num);
                printf("%d possui %d divisores",num,divisores);
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
                for(i=num;i<=num2;i++)
                {
                    divisores = qtdeDivisores(i);
                    printf("%d   %d \n",i,divisores);
                    if(divisores > maior)
                    {
                        maior = divisores;
                    }
                }


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
