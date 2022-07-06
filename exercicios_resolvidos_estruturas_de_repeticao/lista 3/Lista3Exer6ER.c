/*6) Apresente os pares entre entre 0 e 100, sem utilizar if dentro do for.*/

#include <stdio.h>

int main(void)

{
    int i=0;

    for(i=100;i>=0;i=i-2)
    {
        printf("%d\t",i);
    }

}
