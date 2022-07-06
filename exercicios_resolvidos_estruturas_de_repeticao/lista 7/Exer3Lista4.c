/*3) Construa um algoritmo que, dado um conjunto de valores inteiros e positivos, determine qual o menor e o maior valor do conjunto.
O final do conjunto de valores é conhecido através do valor -1, que não deve ser considerado.*/

 #include <stdio.h>

 int main(void)

 {
     int num=0,maior=0,menor=0;
     int aux=0;


     do
     {
        printf("Informe um numero: \n");
        scanf("%d",&num);

        if(num!=-1)
        {
            if(aux==0)
            {
                maior = num;
                menor = num;
                aux = 1;
            }
            else
            {
                if(num > maior)
                {
                    maior = num;
                }
                else //(num < menor)
                {
                    menor = num;
                }
            }
        }

     }while(num!=-1);

     printf("\nO maior valor e %d\nO menor valor e %d",maior,menor);

 }
