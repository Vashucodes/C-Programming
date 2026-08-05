#include <stdio.h>

void add(int z, int y);

int main()
{
    int a = 10, b = 20;

    printf("Before function call:\n");
    printf("a = %d, b = %d\n", a, b);

    add(a, b);

    printf("\nAfter function call:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void add(int z, int y)
{
    z = z + 5;
    y = y + 5;

    printf("\nInside function:\n");
    printf("z = %d, y = %d\n", z, y);
}