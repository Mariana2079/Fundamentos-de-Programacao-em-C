/*9) Ler n�meros inteiros informados pelo usu�rio at� ser informado um valor negativo. Dentre
os n�meros informados, exceto o valor negativo que � a condi��o de sa�da:
a) contar a quantidade de n�meros menores que 10 e os maiores que 100;
b) contar a quantidade de n�meros �mpares;
c) contar a quantidade de n�meros entre 10 e 100;
d) contar quantas vezes � informado um n�mero diferente de 10, de 20 e de 30.*/

#include <stdio.h>

int main(void)

{
    int num,qtde10e100=0,qtdeImpares=0,qtde2=0,qtde3=0;

    for(num=1;num>=0;)
    {
        printf("Informe um numero: ");
        scanf("%d",&num);
        if(num>=0)//se o valor serve
        {
            if(num<10 || num>100)
            {
                qtde10e100++;
            }
            if(num%2!=0)
            {
                qtdeImpares++;
            }
            if(num<=10 && num<=100)
            {
                qtde2++;
            }
            if((num!=10) || (num!=20) || (num!=30))
            {
                qtde3++;
            }
        }
    }
    printf("\nA quantidade de numeros menores que 10 e os maiores que 100 e %d",qtde10e100);
    printf("\nA quantidade de numeros impares e %d",qtdeImpares);
    printf("\nA quantidade de numeros entre 10 e 100 e %d",qtde2);
    printf("\n%d vez(es)foi informado um numero diferente de 10, de 20 e de 30 ",qtde3);

}

