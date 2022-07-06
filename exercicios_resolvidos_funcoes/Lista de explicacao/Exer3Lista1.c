/*3) Fazer uma função para calcular o fatorial de um número. A função será implementada em um arquivo de cabeçalho.
a) Usar essa função para mostrar o fatorial dos números entre 1 e 12.
b) Usar essa função para mostrar o fatorial de um valor informado pelo usuário. Continuar a leitura enquanto forem informados valores positivos.*/
#include<stdio.h>
#include<stdlib.h>
#include "fatorial.h"
int main(void)
{
    char repetir;
    int i,num,opcao;

    do
    {
        printf("1 - Fatorial de um numero\n");
        printf("2 - Fatorial de 1 a 12\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d",&opcao);
        switch(opcao)
        {
            case 1:
            {
                do
                {
                    printf("Informe um numero positivo: ");
                    scanf("%d",&num);
                }while(num<0);
                //int calcularFatorial(int num)
                i=calcularFatorial(num);
                printf("O fatorial de %d e: %d\n",num,i);

                break;
            }
            case 2:
            {
                for(i=1;i<=12;i++)
                {
                    printf("%d! => ",i);
                    mostrarFatorial(i);
                    num = calcularFatorial(i);
                    printf(" = %d\n",num);
                }
                break;
            }
            case 0:
            {
                exit(0);//sair (fechar) o programa
                break;
            }
            default:
            {
                printf("Opcao invalida! ");
            }
        }

        //
        printf("\nExecutar novamente(S/s para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);

    }while(repetir=='s'||repetir=='S');
    return(0);
}
