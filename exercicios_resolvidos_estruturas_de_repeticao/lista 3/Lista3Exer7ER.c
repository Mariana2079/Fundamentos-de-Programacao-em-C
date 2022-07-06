/*7) Ler 10 números e contar desses quantos são pares, quantos são ímpares e
quantos são divisíveis por 7 ou por sete. Apresentar essas quantidades*/

#include <stdio.h>

int main(void)

{
    int i,num,qtde=0,qtde2=0,qtde3=0;

    for(i=0;i<10;i++)
    {
       printf("Informe um numero: \n");
       scanf("%d",&num);

       if(num%2==0)
       {
           qtde++;
       }
       if(num%2!=0)
       {
           qtde2++;
       }
       if(num%7==0)
       {
           qtde3++;
       }
    }
    printf("\n%d sao pares\n%d sao impares\n%d sao divisiveis por 7\n",qtde,qtde2,qtde3);
}
