#include<stdio.h>

int main()
{
  register int i;
  i = 10; 
  printf("%d ", i);
  // vai dar erro já que i não está na RAM 
  // mas sim no processador.
  // error: address of register variable ‘i’ requested
  printf("Endereço na memória: %u", &i); 
  return 0;
}