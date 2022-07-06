//Biblioteca. Arquivo que contem funcoes.
//Funcao que recebe um valor e devolve 0 se primo 1 se nao primo

int primo(int num)
{
    int i;
    int qtde=0;

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            qtde++;
            i=num;
            //ou return(1);
        }
    }
    return(qtde); //ou return(0);
}
