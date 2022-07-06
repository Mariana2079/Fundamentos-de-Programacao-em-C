int calcularMultiplicacao (int num, int num2)
{
    int multiplicacao;

    multiplicacao = num * num2;
    return(multiplicacao);
}
int calcularTabuada(int num)
{
    int i,tab;

    for(i=0;i<=10;i++)
    {
        tab=num*i;
        printf("%d * %d = %d\n",num,i,tab);
    }

    return(tab);
}
