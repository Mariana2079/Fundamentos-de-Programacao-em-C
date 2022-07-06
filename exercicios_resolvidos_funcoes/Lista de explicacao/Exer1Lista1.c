/*1) Fazer uma calculadora com as operações de soma, subtração, multiplicação, divisão e resto. Cada operação é uma função e deve ser acessada a partir de um menu. As funções são implementadas na próprio programa:
a) Soma sem parâmetros e sem retorno
b) Subtração com parâmetros e sem retorno
c) Multiplicação sem parâmetros e com retorno
d) Divisão com parâmetros e com retorno.
e) Resto com parâmetros e com retorno.*/
#include<stdio.h>
#include<stdlib.h>
void somar(void);//declarar funcao
void subtrair(int num1, int num2);//tornar  a funcao conhecida
int multiplicar (void);//cabecalho da funcao
int dividir(int num1, int num2);
int resto(int num1, int num2);

int main(void)
{
    char continuar,opcao;
    int valor1,valor2,retornoInt;
    do
    {
        system("cls");
        printf("A - adicao\n");
        printf("S - subtracao\n");
        printf("M - multiplicacao\n");
        printf("D - divisao\n");
        printf("R - resto\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c",&opcao);
        switch(opcao)
        {
            case 'A':
            case 'a':
            {
                //void somar(void)
                somar();
                break;
            }
            case 'S':
            case 's':
            {
                //void subtrair(int num1, int num2)
                printf("Informe um numero: ");
                scanf("%d",&valor1);
                printf("Informe outro numero: ");
                scanf("%d",&valor2);
                subtrair(valor1,valor2);
                break;
            }
            case 'M':
            case 'm':
            {
                //int multiplicar (void)
                retornoInt = multiplicar();
                printf("Multiplicacao: %d\n",retornoInt);
                // ou printf("Multiplicacao: %d\n",multiplicar();
                break;
            }
            case 'D':
            case 'd':
            {
                //int dividir(int num1, int num2)
                printf("Informe um numero: ");
                scanf("%d",&valor1);
                printf("Informe outro numero: ");
                scanf("%d",&valor2);
                if(valor2 !=0)
                {
                    retornoInt = dividir(valor1,valor2);
                    printf("Divisao: %d\n",retornoInt);
                }
                else
                {
                    printf("Nao e possivel realizar a divisao\n");
                }
                break;
            }
            case 'R':
            case 'r':
            {
                //int resto(int num1, int num2)
                printf("Informe um numero: ");
                scanf("%d",&valor1);
                printf("Informe outro numero: ");
                scanf("%d",&valor2);
                if(valor2!=0)
                {
                    retornoInt = resto(valor1,valor2);
                    printf("Resto: %d\n",retornoInt);
                }
                else
                {
                    printf("Divisor zero\n");
                }
                break;
            }
            default:
            {
               printf("Opcao invalida!");
            }

        }

        printf("\nExecutar novamente (s/S para sim): ");
        fflush(stdin);
        scanf("%c",&continuar);
    } while(continuar=='s' || continuar=='S');
}//fim main

//a)Soma sem parâmetros e sem retorno
void somar(void)
{
    double num1, num2, resultado;
    printf("Informe um valor: ");
    scanf("%lf",&num1);
    printf("Informe outro valor: ");
    scanf("%lf",&num2);

    resultado = num1 + num2;
    printf("Soma: %lf\n",resultado);
}
//b) Subtração com parâmetros e sem retorno
void subtrair(int num1, int num2)
{
    int resultado;
    resultado = num1 - num2;
    printf("subtracao: %d\n",resultado);
}
//c) Multiplicação sem parâmetros e com retorno
int multiplicar (void)
{
    int num1, num2, resultado;
    printf("Informe um valor: ");
    scanf("%d",&num1);
    printf("Informe outro valor: ");
    scanf("%d",&num2);

    resultado = num1 * num2;
    return(resultado);
}
//d) Divisão com parâmetros e com retorno.
int dividir(int num1, int num2)
{
    int resultado;
    resultado = num1 / num2;
    return(resultado);
}
//e) Resto com parâmetros e com retorno.
int resto(int num1, int num2)
{
    int resultado;
    resultado = num1 - ( (num1/num2) * num2 );
    return(resultado);
}
