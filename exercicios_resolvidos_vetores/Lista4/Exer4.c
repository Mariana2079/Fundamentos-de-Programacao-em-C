/*4) Gerar um vetor de números aleatórios com o tamanho e a faixa de valores informado pelo
usuário. Mostrar o vetor gerado, contar a quantidade de números múltiplos de 5 e informar.
Exemplo:
Tamanho do vetor: 20
Faixa
Limite inferior 30
Limite superior 50
Gerar um vetor de 20 elementos aleatórios entre 30 e 50*/
#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programação\Funcoes\Minhas funcoes super uteis\vetores\vetores.h "
int main(void)
{
    int i,qtde,tam,limite,limite1,limite2;
    char repetir;

    do
    {
        system("cls");
        qtde=0;
        do
        {
            printf("Informe o tamanho do vetor: ");
            scanf("%d",&tam);
        }while(tam<0);

        int vetor[tam];

        do
        {
            printf("Informe um valor para o primeiro limite: ");
            scanf("%d",&limite1);
        }while(limite1<0);
        do
        {
            printf("Informe outro valor para o segundo limite: ");
            scanf("%d",&limite2);
        }while(limite2<0);

        gerarVetorIntervalo(vetor,tam,limite2,limite1);
        mostrarVetor(vetor,tam,5);

        for(i=0;i<tam;i++)
        {
            if(vetor[i]%5==0)
            {
                qtde++;
            }
        }

        printf("Multiplos de cinco = %d numero(s)",qtde);
        printf("\nExecutar novamente? (s/S para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s' || repetir=='S');
}
