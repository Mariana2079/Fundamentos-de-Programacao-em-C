int qtdeDivisores (int num)
{
    int i, qtde=2;
    if(num == 1)
    {
        qtde=1;
    }
    for(i=num/2;i>1;i--)
    {
        if(num%i==0)
        {
            qtde++;
        }
    }
    return(qtde);
}
int divisoresIntervalo (int num, int num2)
{
    int i,j,divisores;
    for(i=num;i<=num2;i++)
    {
        divisores=2;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                divisores++;
            }
        }
    }
    return(divisores);
}
