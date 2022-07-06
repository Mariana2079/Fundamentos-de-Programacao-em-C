/*3) Mostrar os números entre 10 e 0 (ordem decrescente) com intervalo de 0.35.*/

#include <stdio.h>

int main(void)

{
    float i;

    printf("Os numeros com intervalo de 0.35, entre 0 e 10, (em ordem decrescente) sao:\n");

    for(i=10;i>=0;i=i-0.35)
    {
        printf("%.2f\t",i);
    }

}
