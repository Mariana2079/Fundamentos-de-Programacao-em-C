/*5) Escreva um programa que determine a soma dos n primeiros termos (informado pelo
usuário) que inicia com 500 e se necessário vai para números negativos.
S = 2/500 - 5/450 + 2/400 - 5/350... */

#include <stdio.h>

int main(void)

{
    int i,a=500,termos;
    float soma=0;

    printf("Informe o numero de termos a serem somados: ");
    scanf("%d",&termos);

    for(i=1;i<=termos;i++)
    {
        if (i%2!=0) //impar
        {
            soma=soma+2.0/a;
        }
        else
        {
            soma=soma-5.0/a;
        }
        a=a-50;
    }
    printf("A soma dos %d primeiros termos e: %.2f",termos,soma);
}
