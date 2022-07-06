/*1) Ler um número que representa a quantidade de valores pares, divisíveis por 3 e não
divisíveis por 5 que devem ser mostrados. Apresentar esses valores n por linha. n é
informado pelo usuário e deve ser positivo. Os valores são apresentados separados por
tabulação.
Por exemplo:
O usuário digita 7 (significa que ele quer visualizar os sete primeiros valores que atendem
condições) e em seguida 5 (que significa a quantidade de valores por linha que devem ser
mostrados).
Será mostrado:
6 12 18 24 36 //cinco valores por linha
42 48*/

#include <stdio.h>

int main(void)

{
    int num,qtde=0,linha,aux=1;


    do
    {
        printf("Informe um numero: ");
        scanf("%d",&num);

    }while(num<0);

    do
    {
        printf("Quantos valores por linha mostrar? ");
        scanf("%d",&linha);
    }while(linha<=0);

    do
    {
        if(aux%2==0 && aux%3==0 && aux%5!=0)
        {
            printf("%d\t",aux);
            qtde++;
            if(qtde%linha==0)
            {
                printf("\n");
            }
        }
        aux++;
    }while(qtde<num);


}
