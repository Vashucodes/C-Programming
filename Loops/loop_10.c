#include <stdio.h>

int main()
{
  int n, b;
  int sum = 0;
  printf("Enter any number : ");
  scanf("%d", &n);
  do
  {
    b = n % 10;
    sum += b;
    n = n / 10;
  } while (n != 0);
  printf(" the sum of digits is %d", sum);
  return 0;
}