/*1) Apresente (separados por tabula��o) os n�meros entre 1 e 1000 que s�o divis�veis por
11 e �mpares.*/

#include <stdio.h>

int main(void)

{
    int i;

    for(i=1;i<=1000;i++)
    {
        if(i%11==0 && i%2!=0)
        {
            printf("%d\t",i);
        }

    }

}
