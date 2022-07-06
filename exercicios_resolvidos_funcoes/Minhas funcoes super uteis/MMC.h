int calcularMMC(int num1, int num2)
{
    int i, mmc, maior, menor;
    if(num1 > num2)
    {
        maior = num1;
        menor = num2;
    }
    else
    {
        maior = num2;
        menor = num1;
    }
    mmc = maior;

    while(mmc % menor != 0)
    {
        mmc = mmc + maior;
    }
    return(mmc);
}
