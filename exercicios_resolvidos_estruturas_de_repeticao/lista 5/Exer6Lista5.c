/*6) Fazer um programa para determinar o valor S da série:
S = (x +1 / y – 10) + (x + 2 / y – 9 ) + (x+3 / y – 8) + ... + (x+10 / y -1).
Onde x e y são valores informados pelo usuário*/

#include <stdio.h>

int main(void)
{
    float s;
    int i,x,y,var;

    printf("Informe quantos numeros deseja somar: ");
    scanf("%d",&termos)
    printf("Informe um numero para x: ");
    scanf("%d",&x);
    printf("Informe um valor para y: ");
    scanf("%d",&y);

    for(i=1;i<termos;i++)
    {
        s=s+(x+(float)/y-var);
        var--;
    }
    printf("");


}
