/*3) Ler um número positivo e maior que zero (validar a entrada).
Esse número indica a quantidade de valores ímpares e não divisíveis por 5 e divisíveis por 7 que devem ser mostrados.
Apresentar 'n' valores por linha. 'n' é informado pelo usuário e deve ser maior que zero. Validar a entrada.*/

#include<stdio.h>
int main(void)
{
    int num;
    int qtdeMostrar;
    int qtdeMostrados;
    int i,qtdeLinha;
    char repetir;

    do
    {
        system("cls");
        qtdeMostrados=0;
        num=1;
        do
        {
            printf("Quantos valores mostrar?: ");
            scanf("%d",&qtdeMostrar);
        }while(qtdeMostrar<0);
        do
        {
           printf("Informe a quantidade por linha: ");
           scanf("%d",&qtdeLinha);
        }while(qtdeLinha<0);

        while(qtdeMostrados < qtdeMostrar)
        {
            if(num%2!=0 && num%5!=0 && num%7==0)
            {
                printf("%d\t",num);
                qtdeMostrados++;
                 if(qtdeMostrados%qtdeLinha==0)
                {
                    printf("\n");
                }
            }
            num++;
        }

        printf("\nExecutar novamente (S/s para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S'|| repetir=='s');

}

