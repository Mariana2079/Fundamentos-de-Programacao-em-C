int calcularMDC(int a, int b)
{
    int i,MDC,menor;
    if(a<b)
    {
        menor=a;
    }
    else
    {
        menor=b;
    }

    for(i=menor;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            MDC=i;
            i=0;
        }
    }
    return(MDC);
}
