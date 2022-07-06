int calcularQuadrado (int num)
{
    int quadrado;

    quadrado=num*num;

    return(quadrado);
}
int quadradoIntervalo (int num, int num2)
{
    int quadrado,i,j;

    if (num>num2)
    {
        i=num;
        num=num2;
        num2=i;
    }
    for(j=num;j<=num2;j++)
    {
        quadrado= j*j;
        printf("%d\t",quadrado);
    }

    return(quadrado);
}
float calcularFormula (float x, float y)
{
    float resposta;

    resposta=((x + y) * (x*x)) / (y*y);
    printf("Resposta: %.2f",resposta);

    return(resposta);
}
