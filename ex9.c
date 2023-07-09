int somafat(int n) 
{
    int soma = 0;
    int i, j;

    if (n < 0) 
    {
        exit(1);
    }

    if (n == 0 || n == 1) {
        return 1;
    }

    int fatorial[10000];
    fatorial[0] = 1;
    int fat = 1;

    for (int i = 2; i <= n; i++) 
    {
        int temp = 0;//ira carregar o valor excedente do produto
        for(j = 0; j < fat; j++)
        {
            int produto = fatorial[j] * i + temp; //calcula o fatorial
            fatorial[j] = produto % 10; //o resto da divisão por 10 é armazenado no vetor fatorial
            temp = produto / 10; //valor excedente é armazenado em temp
        }
        while(temp != 0)
        {
            fatorial[fat] = temp % 10;
            temp /= 10;
            fat++;
        }
    }

   for (i = 0; i < fat; i++) 
    {
        soma = soma + fatorial[i];
    }


    return soma;
}


/*
1) Inicialize uma variável fat com 1 para representar o número de dígitos no fatorial parcial e um array fatorial vazio para armazenar os dígitos.
2) Inicie um loop de 2 até n.
3) Dentro desse loop, para cada número i, multiplique cada dígito no fatorial parcial por i e mantenha um valor excedente (carry) caso a multiplicação resulte em um número com mais de um dígito.
4) Atualize o fatorial parcial e o valor excedente (carry) conforme necessário.
5) Continue atualizando o fatorial parcial e o valor excedente (carry) até que não haja mais valor excedente.
6) Ao final do loop, a variável fat representará o número de dígitos no fatorial final e o array fatorial conterá os dígitos do fatorial.
7) Some os dígitos no array fatorial para obter a soma total dos dígitos do fatorial.
Retorne a soma total dos dígitos.

*/
