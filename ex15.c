#include <stdio.h>
#include <stdlib.h>

int* funcao(int n, int vet[]);

int main()
{
    int n;
    scanf("%d", &n);
    int vet[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    
    int *resultado = funcao(n, vet);
    
    printf("%d ", resultado[1]);
    printf("%d\n", resultado[0]);
    
    free(resultado);
    return 0;
}

int* funcao(int n, int vet[])
{
    int i;
    int a = vet[0];
    int b = vet[0];
    
    for(i = 0 ; i < n; i++)
    {
        if(vet[i] > a)
        {
            a = vet[i];
        }
        if(vet[i] < b)
        {
            b = vet[i];
        }
    }
    
    int *resultado = malloc(2 * sizeof(int));
    resultado[0] = a;
    resultado[1] = b;
    
    return resultado;
}
