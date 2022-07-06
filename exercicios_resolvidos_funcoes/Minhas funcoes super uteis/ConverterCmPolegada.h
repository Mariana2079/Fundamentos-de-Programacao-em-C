float converterCmPolegada (float i)
{
    float polegada=0;
    for(i=1;i<=20;i++)
    {
        polegada=polegada+0.39;
        printf("%.2f\t",polegada);
    }
    return(polegada);
}
float converterCmPolegadaNum (float num)
{
    float polegada;
    polegada = num*0.39;

    return(polegada);
}
