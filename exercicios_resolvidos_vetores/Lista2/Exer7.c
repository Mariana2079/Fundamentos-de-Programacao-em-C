/*7) Em uma determinada cidade, sabe-se que, de janeiro a abril de um determinado ano (121
dias), a temperatura ficou entre a 5� e 45�. Gerar um vetor com valores rand�micos (aleatorios) nesse
intervalo para esse per�odo de tempo. Fazer uma fun��o para gerar vetores de tamanho e com
dentro de limites informados. A partir do vetor gerado, obtenha e mostre:
a) a menor temperatura ocorrida;
b) a maior temperatura ocorrida;
c) a temperatura m�dia;
d) o n�mero de dias em que a temperatura foi inferior � temperatura m�dia.*/
#include<stdio.h>
int main(void)
{
    int n,i;
    do
    {
        printf("Informe um numero positivo para os elementos: ");
    }while(n<0);

    int vetor[n];

    gerarVetor(vetor,n,n);
    mostrarVetor(vetor,n,n);

}
