/*13) Apresentar os múltiplos de 10 entre 1000 e 0 (ordem decrescente).
Mostrar os valores separados por uma marca de tabulação e em colunas com 8 números por linha.*/

#include <stdio.h>

int main(void)

{
    int i;


    for(i=1000;i>=10;i--)
    {
        if(i%10==0)
        {
            printf("%d\t",i);

        }
    }

}
