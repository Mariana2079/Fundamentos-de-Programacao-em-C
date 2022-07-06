/*1) Ler dois valores que representam os limites de um intervalo.
Mostrar os números pares e divisíveis por 3 desse intervalo em ordem crescente.
O usuário pode informar os valores dos limites do intervalo em ordem crescente ou decrescente.
Apresentar 5 valores por linha.
Por exemplo: informados 300 e 2 como limites
Mostrar: 6, 12, 18, 24, 30
 36, 42, 48 ... // são pares e divisíveis por 3 apresentados com cinco valores por linha*/

 #include <stdio.h>

 int main(void)

 {
     int num,valor1,valor2,qtde=0;

     printf("Informe o valor do primeiro intervalo: ");
     scanf("%d",&valor1);
     printf("Informe o valor do outro intervalo: ");
     scanf("%d",&valor2);

     printf("\nOs numeros sao:\n");

     if(valor1<valor2)
     {
         num=valor1;
         valor1=valor2;
         valor2=num;
     }
     for(num=valor2;num<=valor1;num++)
     {
         if(num%2==0 && num%3==0)
         {
             printf("%d\t",num);
             qtde++;

             if(qtde%5==0)
             {
                 printf("\n");
             }
         }
     }


 }
