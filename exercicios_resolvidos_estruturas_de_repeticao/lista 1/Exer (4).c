/*4) Existem normas para determinar a potência de iluminação por metro quadrado de uma residência
que é determinada pela utilização do cômodo, de acordo com a tabela seguinte:*/
#include <stdio.h>

int main(void)

{
    int lampadas=0,i,qtde;
    char classe;
    float largura,comprimento,area;

    printf("Informe a quantidade de comodos: ");
    scanf("%d",&qtde);

    for(i=1;i<=qtde;i++)
    {
         printf("Informe a classe de um comodo: ");
         fflush(stdin);
         scanf("%c",&classe);

        if((classe!='A' && classe!='a') && (classe!='B'&& classe!='b') && (classe!='C' && classe!='c'))
        {
            printf("Caractere invalido, tente novamente");
        }
        else
        {
            printf("Informe comprimento do comodo: \n");
            scanf("%f",&comprimento);
            printf("Informe a largura do comodo: \n");
            scanf("%f",&largura);
            area = comprimento*largura;

            if(classe == 'A'|| classe== 'a')
            {
                lampadas = lampadas + (area*15/60 + 0.999999);
            }
            else if(classe == 'B' || classe == 'b')
            {
                lampadas = lampadas + (area*18/60 + 0.999999);
            }
            else
            {
                lampadas = lampadas + (area*20/60 + 0.999999);
            }



        }

    }
    printf("A quantidade de lampadas necessarias e %d",lampadas);
}

