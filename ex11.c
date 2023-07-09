double avgvet(int *vet, int n)
{
    int i;
    double media = 0;
    double soma = 0;
    
    for(i = 0; i < n; i++)
    {
        soma = soma + vet[i];
    }
    
    media = soma / n;
    
    return media;
}
