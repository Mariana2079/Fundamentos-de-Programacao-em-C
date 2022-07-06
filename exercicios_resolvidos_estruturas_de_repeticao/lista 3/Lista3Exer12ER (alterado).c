/*12) Faça um programa que imprima os 'n' (indicado pelo usuário) primeiros números
impares, divisiveis por 5 e nao divisiveis por 7. Apresentar cinco valores por linha.
Por exemplo, se o usuário informar 10, mostrar:
5 15 25 45 55 //primeira linha com cinco números
65 75// segunda linha com cinco números. */

#include <stdio.h>

int main(void)

{
    int aux=1; //variavel que sera testada se e impar, divisivel por 5 e nao divisivel por 7
    int qtdeMostrados=0; //controlar quantos valores foram mostrados
    int qtdeMostrar;

    printf("Quantos impares, divisiveis por 5 e nao por 7 mostrar?: ");
    scanf("%d",&qtdeMostrar);

    for(qtdeMostrados=0; qtdeMostrados<qtdeMostrar;)
    {
        if(aux%2!=0 && aux%5==0 && aux%7!=0)
        {
            printf("%d\t",aux);
            qtdeMostrados++;

            if(qtdeMostrados%5==0)
            {
                printf("\n");
            }
        }
        aux++; //vai para o proximo
    }

}


