/*5) Completar e corrigir o c�digo a seguir para:
a) Ler a quantidade somente se a categoria � v�lida.
b) Validar para que n�o seja realizada uma divis�o por zero no c�lculo da m�dia.
c) Permitir a leitura da categoria nas execu��es sucessivas do programa.
d) Garantir que a m�dia seja float*/

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
    printf("A m�dia dos produtos � %.2f",Media);
}
