int quadrados(int n)
{
    int i;
    int soma = 0;
    
    for(i = 1; i <= n; i++)
    {
        soma = soma + (i*i);
    }
    return soma;
}
