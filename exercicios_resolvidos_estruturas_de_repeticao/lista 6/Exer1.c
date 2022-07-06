/*1) Ler um número positivo. Repetir a leitura até que seja informado um número que atende essa condição (validar a entrada).
Esse número representa a quantidade de primos a serem mostrados.
Fazer a Média dos números primos mostrados. Validar para que não  seja realizada divisão por zero.*/

#include<stdio.h>
#include<stdlib.h>
int main(void)

{
    int div,num,qtde=0;
    char repetir;
    int qtdePrimosMostrar,qtdeMostrados;
    int aux, soma,qtdeDivisores,qtdePrimosMostrados,i;
    float media;

    do
    {
      //limpar a tela
      system("cls");
      //inicializar variaveis
      aux=1;
      qtdePrimosMostrados=0;
      soma=0;
      qtde=0;
      //validar entrada
    do
    {
        printf("Quantos primos mostrar?: ");
        scanf("%d",&qtdePrimosMostrar);
    }while(qtdePrimosMostrar<0);

    while(qtdePrimosMostrados<qtdePrimosMostrar)
    {
      qtdeDivisores=0;
      for(i=2;i<=aux/2;i++)
      {
          if(aux%i==0)
          {
              qtdeDivisores++;
              i=aux;//sair
          }
      }
      if(qtdeDivisores==0)
      {
          printf("%d\t",aux);
          qtdePrimosMostrados++;
          soma=soma+aux;
          qtde++;
      }
      aux++;
    }
    if(qtde>0)
    {
        media=(float)soma/qtde;
        printf("\nMedia: %.2f",media);
    }

      printf("\nExecutar novamente (S/s para sim): ");
      fflush(stdin);
      scanf("%c",&repetir);

    }while(repetir=='s'|| repetir=='S');
    return(0);





}
