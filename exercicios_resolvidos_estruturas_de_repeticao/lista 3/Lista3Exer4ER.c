/*4) Leia dos valores que representam os limites de um intervalo. O usu�rio pode informar
os valores em ordem crescente ou decrescente. Mostrar os divis�veis por x e n�o
divis�veis por y nesse intervalo. X e y s�o vari�veis informadas pelo usu�rio*/

#include <stdio.h>

int main(void)

{
    int x,y,i,l1,l2;

    printf("Informe um valor para o primeiro limite: ");
    scanf("%d",&l1);
    printf("Informe um valor para o segundo limite: ");
    scanf("%d",&l2);
    printf("Informe um valor: ");
    scanf("%d",&x);
    printf("Informe outro valor: ");
    scanf("%d",&y);

    if(l1 > l2)
    {
        i = l1;
        l1 = l2;
        l2 = i;
    }

    for(i=l1;i<=l2;i++)
    {
        if(i%x==0 && i%y!=0)
        {
            printf("%d\t",i);
        }
    }

}
