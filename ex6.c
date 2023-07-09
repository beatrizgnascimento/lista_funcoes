long long int fatorial(int x) 
{
    int i;
    long long int fat = 1;
    
    for (i = 1; i <= x; i++) 
    {
        fat = fat * i;
    }
    return fat;
}

double serie(int n) 
{
    int i;
    double soma = 0;
    
    for (i = 0; i < n; i++)
    {
        soma = soma + (double)i / fatorial(2 * i); //faz o fatorial so dos numeros pares
    }
    return soma;
}
