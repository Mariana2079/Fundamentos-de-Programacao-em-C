//mostrar o processo de calculo do fatorial
void mostrarFatorial (int num)
{
    int i;
    for(i=num;i>1;i--)
    {
        printf("%d * ",i);
    }
    printf("1");
}

//calcular o fatorial (como sera devolvida a funcao e int)
int calcularFatorial(int num)
{
    int i,fat=1;
    for(i=num;i>1;i--)
    {
        fat=fat*i;
    }
    return(fat);
}
