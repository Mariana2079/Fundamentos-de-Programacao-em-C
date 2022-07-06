//contar a quantidade de caracteres da string
int tamanhoString(char texto[])
{
    int i=0;
    while(texto[i]!= '\0')
    {
        i++;
    }
    return(i);
}
//verificar se um determinado caractere está na string
//retornar -1 se o caracterre nao esta na string ou o indice da primeira ocorrencia
int verificarCaractere(char texto[],char caractere)
{
    int i=0;
    //int retorno=-1;
    while(texto[i]!='\0')
    {
        if(texto[i] == caractere)
        {
            //retorno=i;
            //break;
            //return(retorno)
            return(i);
        }
        i++;
    }
    return(-1);
}
//contar a quantidade de caracteres iguai ao passado para a funcao
int contarCaracteresIguais(char texto[],char caractere)
{
    int i=0;
    int retorno=0;
    while(texto[i]!='\0')
    {
        if(texto[i] == caractere)
        {
            retorno++;
        }
        i++;
    }
    return(retorno);
}
