/*7) O que faz o algoritmo a seguir?*/

#include <stdio.h>

int main(void)

{
    int i,s=0;

    printf("Valores de S:\n");
    for(i=0;i<10;i++)
    {
        s=s+i;
        printf("%d\t",s);
    }
    printf("\nValores de I:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",i);
    }

}
