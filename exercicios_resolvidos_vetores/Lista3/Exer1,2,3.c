#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\Mariana\Desktop\UTFPR\Programacao\Funcoes\Minhas funcoes super uteis\vetores\vetores.h "
int main(void)
{
    char repetir;
    float altura[5];
    float media[5];
    float soma,num,num2;
    int i,opcao,qtde,qtde2;

    do
    {
        system("cls");
        soma=0;
        qtde=0;
        qtde2=0;
        printf("1 - Calcular a media das alturas acima de 1,50m e mostrar a media\n");
        printf("2 - Mostrar quantos alunos estao acima da media\n");
        printf("3 - Mostrar 3 vetores com 50 elementos: pares, impares e aleatorios\n");
        printf("Opcao: ");
        scanf("%d",&opcao);

        switch(opcao)
        {
            case 1:
            {
                for(i=0;i<5;i++)
                {
                    do
                    {
                        printf("Informe uma altura para o indice %d: ",i);
                        scanf("%f",&altura[i]);
                    }while(altura[i]<0);
                    if(altura[i]>1.50)
                    {
                        soma=soma+altura[i];
                        qtde++;
                    }
                }
                if(qtde==0)
                {
                    printf("Nenhuma altura maior que 1,50 foi informada\n");
                }
                if(qtde>0)
                {
                    media=(float)soma/qtde;
                    printf("Media das alturas maiores que 1,50m: %.2f\n",media);
                }
                break;
            }
            case 2:
            {
                for(i=0;i<3;i++)
                {
                    do
                    {
                        printf("Informe a primeira nota do aluno %d: ",i);
                        scanf("%f",&num);
                    }while(num<0);
                    do
                    {
                        printf("Informe a segunda nota do aluno %d: ",i);
                        scanf("%f",&num2);
                    }while(num2<0);

                    soma=num+num2;
                    media[i]=soma/2;
                }
                for(i=0;i<3;i++)
                {
                    printf("=>Media do aluno %d: %.2f\n\n",i,media[i]);
                    if(media>=7.0)
                    {
                        qtde++;
                    }
                }
                 printf("%d aluno(s) acima da media e %d abaixo da média",qtde,3-qtde);
               break;
            }
            case 3:
            {
                int vet[50];
                int vetPares[50];
                int vetImpares[50];
                int iPares=0,iImpares=0;

                    //void gerarVetor(int vet[], int tam, int limite)
                    gerarVetor(vet,50,8);
                    //void mostrarVetor(int vet[], int tam, int qtdeLinha)
                    mostrarVetor(vet,50,8);

                    for(i=0;i<50;i++)
                    {
                        if(vet[i]%2==0)
                        {
                            vetPares[iPares]=vet[i];
                            iPares++;
                        }
                        else
                        {
                            vetImpares[iImpares]=vet[i];
                            iImpares++;
                        }
                    }
                    printf("\n\nValores pares\n");
                    mostrarVetor(vetPares,iPares,8);
                    printf("\n\nValores impares\n");
                    mostrarVetor(vetImpares,iImpares,8);
                    break;
            }
            default:
            {
                printf("Opcao invalida!! ");
            }
        }



        printf("\n\nExecutar novamente?(S/s para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S'||repetir=='s');
    return(0);

}
