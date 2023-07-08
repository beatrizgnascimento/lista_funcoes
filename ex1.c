#include <stdio.h>

void data(int mes);

int main()
{
  int dia, mes, ano;

  scanf("%d %d %d", &dia, &mes, &ano);

  

  printf("%d/", dia);
  data(mes);
  printf("/%d", ano);
  
  return 0;
}

void data(int mes)
{
  if(mes == 1)
  {
    printf("Janeiro");
  }
  if(mes == 2)
  {
    printf("Fevereiro");
  }
  if(mes == 3)
  {
    printf("Marco");
  }
  if(mes == 4)
  {
    printf("Abril");
  }
  if(mes == 5)
  {
    printf("Maio");
  }
  if(mes == 6)
  {
    printf("Junho");
  }
  if(mes == 7)
  {
    printf("Julho");
  }
  if(mes == 8)
  {
    printf("Agosto");
  }
  if(mes == 9)
  {
    printf("Setembro");
  }
  if(mes == 10)
  {
    printf("Outubro");
  }
  if(mes == 11)
  {
    printf("Novembro");
  }
  if(mes == 12)
  {
    printf("Dezembro");
  }
}
