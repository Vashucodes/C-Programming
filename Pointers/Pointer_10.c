#include <stdio.h>

void sum(int *a, int *b, int *c);

int main()
{
    int a = 4, b = 5, c;

    sum(&a, &b, &c);

    printf("Sum = %d", c);

    return 0;
}

void sum(int *a, int *b, int *c)
{
    *c = *a + *b;
}