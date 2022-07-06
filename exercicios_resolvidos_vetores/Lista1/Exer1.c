/*1) Ler dez números inteiros. Validar as entradas para que sejam informados valores positivos. E em listagens separadas:
a) mostrar os pares;
b) mostrar os divisíveis por 3 e por 5 e contar a quantidade deles e mostrar.
c) mostrar os valores menores que 10 e os maiores que 100.
d) mostrar os valores maiores que 10 e menores que 100.
e) mostrar os ímpares e a quantidade de ímpares. Fazer a proporção de ímpares em relação a quantidade total de números.
O programa permanecerá em execução até que seja escolhida a opção sair ou alguma equivalente.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int vetor[10];//para armazenar ate 10 valores inteiros
    int i;//indice
    int qtde;
    float percentual;
    do
    {
        system("cls");
        qtde=0;
        for(i=0;i<10;i++)//passar pelo indice (casinhas) do vetor
        {
            do
            {
                printf("Informe um valor para o indice %d: ",i);
                scanf("%d",&vetor[i]);
            }while(vetor[i]<0);
        }

        printf("\nPares\n");
        for(i=0;i<10;i++)
        {
            if(vetor[i]%2==0)//se o valor armazenado do indice i e par
            {
                printf("%d\t",vetor[i]);
            }
        }

        printf("\nDivisiveis por 3 e por 5\n");
        for(i=0;i<10;i++)
        {
            if(vetor[i]%3==0 && vetor[i]%5==0)
            {
                printf("%d\t",vetor[i]);
                qtde++;
            }
        }
        printf("\nHa %d valores divisiveis por 3 e por 5\n",qtde);

        printf("\nMenores que 10 e maiores que 100\n");
        for(i=0;i<10;i++)
        {
            if(vetor[i]<10 || vetor[i]>100)
            {
                printf("%d\t",vetor[i]);
            }
        }

        printf("\nImpares\n");
        qtde=0;
        for(i=0;i<10;i++)
        {
            if(vetor[i]%2!=0)
            {
                printf("%d\t",vetor[i]);
                qtde++;
            }
        }
        printf("\nHa %d impares\n",qtde);
        percentual=qtde*100/10.0;
        printf("Percentual de impares: %.2f\n",percentual);

        printf("\nExecutar novamente?(S/s para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S'||repetir=='s');
    return(0);
}
