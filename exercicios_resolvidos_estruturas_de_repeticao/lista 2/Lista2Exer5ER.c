/*5) O que faz o algoritmo a seguir?*/

#include <stdio.h>

int main(void)

{
    int j,valor,maior;

    printf("Informe um valor: ");
    scanf("%d",&valor);

    maior=valor;

    for(j=0;j<4;j++)
    {
        printf("Informe outro valor: ");
        scanf("%d",&valor);

        if(valor>maior)
        {
           maior=valor;
        }
        else
        {
            maior=maior;
        }

    }

    printf("\nMaior = %d",maior);
}


