/*7) Em uma determinada cidade, sabe-se que, de janeiro a abril de um determinado ano (121
dias), a temperatura ficou entre a 5° e 45°. Gerar um vetor com valores randômicos (aleatorios) nesse
intervalo para esse período de tempo. Fazer uma função para gerar vetores de tamanho e com
dentro de limites informados. A partir do vetor gerado, obtenha e mostre:
a) a menor temperatura ocorrida;
b) a maior temperatura ocorrida;
c) a temperatura média;
d) o número de dias em que a temperatura foi inferior à temperatura média.*/
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
