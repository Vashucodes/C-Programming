#include <stdio.h>

void add(int *z, int *y);

int main()
{
    int a = 23, b = 34;

    printf("Before function call:\n");
    printf("a = %d, b = %d\n", a, b);

    add(&a, &b);

    printf("\nAfter function call:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void add(int *z, int *y)
{
    *z = *z + 10;
    *y = *y + 20;

    printf("\nInside function:\n");
    printf("z = %d, y = %d\n", *z, *y);
}