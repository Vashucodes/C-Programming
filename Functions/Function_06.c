#include <stdio.h>

void sub(int *a, int *b);

int main()
{
    int x = 5, y = 4;

    printf("Before function:\n");
    printf("x = %d, y = %d\n", x, y);

    sub(&x, &y);

    printf("After function:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

void sub(int *a, int *b)
{
    *a = *a - *b;
}