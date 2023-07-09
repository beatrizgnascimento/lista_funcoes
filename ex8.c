int qtdprimos(int n)
{
    int i, j;
    int cont_primos = 0;
    
    if(n <= 1)
       {
          return 0;
       }
    
    
    for(i = 2; i < n; i++) //numeros primos menores que n
    {
        int ehprimo = 1;
          //colocar o idx primo no loop
        
        for(j = 2; j <= i / 2; j++) //verificar ate metade de i
        {
            if(i % j == 0)
            {
                ehprimo = 0; //nao e primo
                break;
            }
        }
        if(ehprimo == 1)
        {
            cont_primos++;
        }
    }
    
    return cont_primos;
   
}
