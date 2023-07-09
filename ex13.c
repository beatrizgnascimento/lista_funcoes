#include <stdio.h>

typedef struct Ponto {
    int x, y;
} Ponto;

int estaContido(Ponto v1, Ponto v2, Ponto p);

int main() {
    Ponto v1, v2, p;
    scanf("%d %d", &(p.x), &(p.y));
    scanf("%d %d", &(v1.x), &(v1.y));
    scanf("%d %d", &(v2.x), &(v2.y));
    

    
    int resultado = estaContido(v1, v2, p);
    printf("%d", resultado);

    return 0;
}

int estaContido(Ponto v1, Ponto v2, Ponto p) 
{
    if (p.x > v1.x && p.x < v2.x && p.y > v1.y && p.y < v2.y) 
    {
        return 1;
    }

    return 0;
}
