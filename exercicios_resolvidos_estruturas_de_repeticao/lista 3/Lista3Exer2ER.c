/*2) Faça um programa que apresente uma tabela de lucro esperado, em decorrência do
número de pessoas e valor do ingresso. O valor do ingresso vai de R$ 15 até 20,
aumentando de 0,50 centavos. É informada a quantidade de pessoas. */

#include <stdio.h>

int main(void)

{
    int pessoas;
    float i, valor;

    printf("Informe a quantidade de pessoas: ");
    scanf("%d",&pessoas);

    printf("\nLucro esperado: \n");
    printf("Valor do ingresso     Valor total recebido:\n");
    for(i=15;i<=20;i=i+0.50)
    {
        valor=i*pessoas;
        printf("R$%.2f\t               R$%.2f\n",i,valor);
    }
}
