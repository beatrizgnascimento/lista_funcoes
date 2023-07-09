int primo(int n)
{
    int i;
  
    if(n <= 1)
       {
          return 0;
       }
    
//nao precisa verificar a divisibilidade de todos os numeros
    
    for(i = 2; i <= n / 2; i++)
    {
        
        if(n % i == 0)
        {
            return 0;
        }
    }
    
   return 1;
}
