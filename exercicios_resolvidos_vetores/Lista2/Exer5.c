/*5) Gerar aleatoriamente dois vetores A e B com n elementos. O usuário informa a
quantidade de elementos dos vetores, ou seja, o seu tamanho. Validar para que seja
informado um valor positivo para a quantidade de elementos. Mostrar os elementos
desses vetores. Construir um vetor C, em que cada elemento de C será 1, quando o
elemento de A for maior que o respectivo elemento em B; 0, quando o elemento de A for
igual ao respectivo elemento em B; e -1 quando o elemento de A for menor que o
respectivo elemento em B. Mostrar os elementos desse vetor C.*/
#include<stdio.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\vetores\vetores.h "
int main(void)
{
    int n,i;

    do
    {
        printf("Informe o numero de elementos: ");
        scanf("%d",&n);
    }while(n<=0);

    int vetorA[n];
    int vetorB[n];
    int vetorC[n];

    gerarVetor(vetorA,n,n);
    printf("Vetor A: \n");
    mostrarVetor(vetorA,n,n);
    printf("\nVetor B: \n\n");
    gerarVetor(vetorB,n,n);
    mostrarVetor(vetorB,n,n);

    for(i=0;i<n;i++)
    {
        if(vetorA[i]>vetorB[i])
        {
            vetorC[i]=1;
        }
        if(vetorA[i]==vetorB[i])
        {
            vetorC[i]=0;
        }
        if(vetorA[i]<vetorB[i])
        {
            vetorC[i]=-1;
        }
    }
    printf("\nVetor C: \n");
    mostrarVetor(vetorC,n,n);
}
