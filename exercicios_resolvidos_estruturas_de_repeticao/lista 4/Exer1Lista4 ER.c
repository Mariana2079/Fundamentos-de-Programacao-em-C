/*1) Ler dois valores que representam os limites de um intervalo. Mostrar os números pares e
divisíveis por 3 desse intervalo em ordem crescente. O usuário pode informar os valores dos
limites do intervalo em ordem crescente ou decrescente. Apresentar 5 valores por linha.
Por exemplo: informados 300 e 2 como limites
Mostrar: 6, 12, 18, 24, 30
 36, 42, 48 …
 // esses valores são pares e divisíveis por 3 apresentados com cinco valores por linha*/

 #include<stdio.h>
 int main(void)

 {
     int valor1,valor2,mostrar=0,i;

     printf("Informe um valor para o primeiro intervalo: ");
     scanf("%d",&valor1);
     printf("Informe outro valor para o segundo intervalo: ");
     scanf("%d",&valor2);

     if(valor1>valor2)
     {
         i=valor1;
         valor1=valor2;
         valor2=i;
     }
     for(i=valor1;i<=valor2;i++)
     {
         if(i%2==0 && i%3==0)
         {
             printf("%d\t",i);
             mostrar++;
             if(mostrar%5==0)
             {
                 printf("\n");
             }
         }
     }
 }
