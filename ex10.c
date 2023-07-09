int maxvet(int *vet, int n)
{
    int i;
    int maior = 0;
    
    for(i = 0; i < n; i++)
    {
        if(vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    
    return maior;
}
