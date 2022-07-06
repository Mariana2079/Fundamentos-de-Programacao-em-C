/*2) Mostrar os valores ímpares e divisíveis por 7 entre 500 e 0 em ordem decrescente.
Obter a média dos pares e divisíveis por 3 desse intervalo.*/

 #include <stdio.h>

 int main(void)

 {
     int i,qtde=0,soma=0;
     float media=0;

     for(i=500;i>0;i--)
     {
         if(i%7==0)
         {
            printf("%d\t",i);
            qtde++;
            soma=soma+i;
         }
     }
     media=soma/qtde;
     printf("\n A media dos valores e: %.2f ",media);

 }
