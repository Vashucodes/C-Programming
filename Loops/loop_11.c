#include <stdio.h>

int main()
{
  int n, b;
  int mul = 1;
  printf("Enter any number : ");
  scanf("%d", &n);
  do
  {
    b = n % 10;
    mul *= b;
    n = n / 10;
  } while (n != 0);
  printf(" Products of digits is %d", mul);
  return 0;
}