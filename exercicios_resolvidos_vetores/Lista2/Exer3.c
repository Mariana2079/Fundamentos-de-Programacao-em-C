/*3) Gerar aleatoriamente 7 elementos para um vetor A. Construir um vetor B de mesmo
tamanho, sendo que cada elemento de B deverá ser o elemento de A correspondente
multiplicado por sua posição (ou índice), ou seja, B[i] = A[i] * i. Represente a solução.*/
#include<stdio.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\vetores\vetores.h "
int main(void)
{
  int vetorA[7];
  int vetorB[7];
  int i;

  gerarVetor(vetorA,7,7);
  for(i=0;i<7;i++)
  {
      vetorB[i]=vetorA[i]*i;
  }
  printf("Vetor A: \n");
  mostrarVetor(vetorA,7,7);
  printf("\nVetor B = Vetor A * i\n");
  mostrarVetor(vetorB,7,7);


}
