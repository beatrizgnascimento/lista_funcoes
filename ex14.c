#include <stdio.h>
#include <stdlib.h>

int* funcao(int n, int *a, int *b);

int main()
{
    int i;
    int n;
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    int* b = (int*)malloc(n * sizeof(int));
    
    for(i = 0 ; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(i = 0 ; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    
    int* c = funcao(n, a, b);
    
    for(i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
    
    printf("\n");
    
    free(a);
    free(b);
    free(c);

    return 0;
}

int* funcao(int n, int *a, int *b)
{
    int* c = (int*)malloc(n * sizeof(int));
    int i;
    
    for(i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    return c;
}
