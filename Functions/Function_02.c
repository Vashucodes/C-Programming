#include <stdio.h>

void sub(int a, int b);

int main()
{
    int x = 5, y = 4;

    sub(x, y);

    return 0;
}

void sub(int a, int b)
{
    int c = a - b;

    printf("Subtraction = %d", c);
}