/*11) Ler um número inteiro e determinar se o mesmo é primo. Um número é primo
quando é divisível de maneira exata somente por 1 e por ele mesmo.*/

#include <stdio.h>

int main(void)

{
    int num;
    int i;
    int qtdeDiv=0;

    printf("Informe um numero para verificar se e primo: ");
    scanf("%d",&num);
    //valor dividir de 2 ate metade do numero. Se encontrada uma divisao exata, numero nao e primo
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)//testar se a divisao e exata
        {
            qtdeDiv++;
            //se divisao exata, numero nao e primo!
            i=num; //break(finaliza/forca ER)
        }

    }
    if (qtdeDiv==0) //de 2 ate a metade de num nao ha divisoes exatas e primo
    {
        printf("%d e primo\n",num);
    }
    else
    {
        printf("%d nao e primo",num);
    }
}

