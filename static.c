#include<stdio.h>

int fun()
{
  static int count = 10;
  count++;
  return count;
}
  
int main()
{
  printf("%d ", fun());
  printf("%d ", fun());
  printf("%d ", fun());
  return 0;
}