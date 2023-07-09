#include <stdio.h>
void nota(float n1, float n2, float n3, char letra);

int main()
{
    float n1, n2, n3;
    char letra;
    
    scanf("%f %f %f %c", &n1, &n2, &n3, &letra);
    
    nota(n1, n2, n3, letra);
    
    return 0;
}

void nota(float n1, float n2, float n3, char letra)
{
    float media;
    float soma;
    
    if(letra == 'A')
    {
        soma = n1 + n2 + n3;
        media = soma / 3;
        printf("%.2f", media);
    }
    if(letra == 'P')
    {
        soma = (n1*5) + (n2*3) + (n3*2);
        media = soma / 10;
        printf("%.2f", media);
    }
}
