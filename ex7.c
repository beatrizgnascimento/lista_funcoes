#include <stdio.h>
int somafun(int num);

int main()
{
    int n, resultado;
    scanf("%d", &n);
    resultado = somafun(n);
    
    printf("%d", resultado);

    return 0;
}

int somafun(int num)
{
    int soma = 0;
    int ultimo;
    
    while(num != 0)
    {
        ultimo = num % 10; //acha o ultimo numero
        num = num / 10; //acha o dividendo
        soma = soma + ultimo; //guarda o ultimo numero na soma
    }
    return soma;
}
