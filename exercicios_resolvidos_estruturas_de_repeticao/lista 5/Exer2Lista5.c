/*2) Elaborar um programa que efetue a leitura de valores positivos inteiros at� que um
valor negativo seja informado. Ao final devem ser apresentados o maior e o menor valor
informados pelo usu�rio. O valor negativo, a condi��o de sa�da, n�o deve ser considerado
nas compara��es para localizar o maior e o menor.*/

#include <stdio.h>

int main(void)

{
    int num,maior=0,menor=0,aux=0;

    do
    {
        printf("Informe um numero positivo: ");
        scanf("%d",&num);
        if(num>0)
        {
            if(aux==0)
            {
                maior = num;
                menor = num;
                aux = 1;
            }
            else
            {
                if(num > maior)
                {
                    maior = num;
                }
                else //(num < menor)
                {
                    menor = num;
                }
            }
        }


    }while(num>0);
    printf("\nO maior valor e %d\nO menor valor e %d",maior,menor);
}
