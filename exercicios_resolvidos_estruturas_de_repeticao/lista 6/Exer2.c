/*2) Ler dois números positivos que representam os limites inferior e superior de um intervalo.
Validar a entrada para que sejam informados números positivos. É mais adequado validá-los separadamente.
Fazer a média dos múltiplos de 3 e de 5 desse intervalo. Verificar para que no cálculo da média não seja feita divisão por zero.*/

#include<stdio.h>
int main(void)
{
    char repetir;
    int limSup;
    int limInf;
    int i;
    int soma;
    int qtdeLinha;
    int qtde;
    float media;

    do
    {
        system("cls");
        soma=0;
        qtde=0;
        //validar entrada

        do
        {
            printf("Informe o limite inferior: ");
            scanf("%d",&limInf);
        }while(limInf<0);
        do
        {
            printf("Informe o limite superior: ");
            scanf("%d",&limSup);
        }while(limSup<0);
        do
        {
            printf("Quantos valores por linha?: ");
            scanf("%d",&qtdeLinha);
        }while(qtdeLinha<=0);

        if(limInf>limSup)
        {
            i=limInf;
            limInf=limSup;
            limSup=i;
        }
        for(i=limInf;i<=limSup;i++)
        {
            if(i%3==0 && i%5==0)
            {
                printf("%d\t",i);
                soma=soma+i;
                qtde++;
                if(qtde%qtdeLinha==0)
                {
                    printf("\n");
                }
            }
        }
        if(qtde>0)
        {
            media=(float)soma/qtde;
            printf("\nMedia: %.2f\n",media);
        }
            printf("\nExecutar novamente (S/s para sim): ");
            fflush(stdin);
            scanf("%c",&repetir);
    }while(repetir=='s'|| repetir=='S');
}
