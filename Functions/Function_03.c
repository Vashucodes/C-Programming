#include <stdio.h>

void mul(int a, int b);

int main()
{
    int x = 5, y = 4;
    mul(x, y);
    return 0;
}

void mul(int a, int b)
{
    int c;
    c = a * b;
    printf("Multiplication  = %d", c);
}