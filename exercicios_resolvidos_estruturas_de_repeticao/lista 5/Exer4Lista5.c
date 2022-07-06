/*4) Escreva um programa que determine o valor de S, com n informado pelo usuário, da
série S = 1/1 – 2/4 + 3/9 – n / n^2. Para n = 10:
S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 - 6/36 + ... - 10/100.*/

#include <stdio.h>

int main(void)

{
    int i,termos;
    float soma=0;

    printf("Informe o numero de termos a serem mostrados: ");
    scanf("%d",&termos);

    for(i=1;i<=termos;i++)
    {
        if(i%2!=0)
        {
            soma=soma+(float)i/(i*i);
        }
        else
        {
            soma=soma-(float)i/(i*i);
        }
    }
    printf("Soma = %.2f",soma);
}
