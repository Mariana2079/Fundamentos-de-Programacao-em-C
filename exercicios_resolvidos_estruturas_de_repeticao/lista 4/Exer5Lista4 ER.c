/*5) Completar e corrigir o código a seguir para:
a) Ler a quantidade somente se a categoria é válida.
b) Validar para que não seja realizada uma divisão por zero no cálculo da média.
c) Permitir a leitura da categoria nas execuções sucessivas do programa.
d) Garantir que a média seja float*/

#include<stdio.h>
int main(void)

{
 char Categoria;
 int Quantidade;
 int Soma=0;
 int Total;
 float Media=0;

 do
 {
     printf("Informe a categoria: \n");
     scanf("%c",&Categoria);

     if(Categoria=='A' || Categoria=='B')
     {
        printf("Informe a quantidade: ");
        scanf("%f",&Quantidade);
     }

    Soma = Soma + Quantidade;

 }while(Categoria =='A' || Categoria == 'B');

    if(Quantidade!=0)
    {
        Media = (float)Soma / Quantidade;
    }
    printf("A média dos produtos é %.2f",Media);
}
