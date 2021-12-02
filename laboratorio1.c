#include <stdio.h>

int main()
{
  int num1, num2;
  int res, mcd;

  printf("Ingrese el número 1: ");
  scanf("%d", &num1);

  printf("Ingrese el número 2: ");
  scanf("%d", &num2);

  do
  {
    res = num1 % num2;
    if(num1 > 0 & num2 > 0)
    {
      if((res) ==! 0)
      {
        num1 = num2;
        num2 = res;
      }
      else
        mcd = num2;
    }
    else
    printf("Ingrese números positivos.\n");

  } while((res) ==! 0);
  
  printf("El máximo común divisor es: %d\n", mcd);

  return 0;
}
