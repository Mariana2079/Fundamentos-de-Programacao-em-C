int calcularDias(int dia, int mes, int ano)
{
    int dias;

    dias = (30-dia)+(12-mes)*30+(2018-ano)*12*30;
    return(dias);
}
char calcularNumPerfeito(int num)
{
    int i;
    int somaDivisores=1;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            somaDivisores = somaDivisores + i;
        }
    }
    if(somaDivisores == num)
    {
        return('S');
    }
    else
    {
        return ('N');
    }
}

float calcularPesoIdeal(char genero, float altura)
{
    float peso;
    if(genero=='f'||genero=='F')
    {
        peso = (62.1 * altura) - 44.7;
    }
    if(genero=='m'||genero=='M')
    {
        peso = (72.7 * altura) - 58;
    }

    return(peso);
}
int calcularTriangulos(int lado1, int lado2, int lado3)
{
    if(lado1==lado2==lado3)
    {
        printf("Triangulo Equilatero");
    }
    else if(lado1==lado2 && lado1==lado3 && lado2!=lado3)
    {
        printf("Triangulo Isosceles");
    }
    else if(lado1!=lado2!=lado3)
    {
        printf("Triangulo Escaleno");
    }
}
/*int calcularNumPalindromo(int )
{
    if(n>=10 && n<=99)
    {
        u=
        d=
    }
    else if(n>100 && n<=999)
    {
        u=
        c=
    }
    else if ()
}
*/
