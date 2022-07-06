/*1) Apresentar a tabuada de um número informado pelo usuário. A tabuada deve ser
apresentada na forma a seguir (sendo 'a' o valor informado e as outras letras o resultado da
multiplicação):
a * 0 = c
a * 1 = d*/

#include <stdio.h>

int main(void)

{
    int num,i;

    printf("Informe um numero: ");
    scanf("%d",&num);

    for(i=0;i<=10;i++)
    {
        printf("%d x %d = %d \n",num,i,num*i);
    }


}
