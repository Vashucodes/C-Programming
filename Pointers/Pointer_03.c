#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 3, y = 5;

    printf("Before Call by Value: x = %d & y = %d\n", x, y);

    swap(x, y);

    printf("After Call by Value: x = %d & y = %d\n\n", x, y);

    _swap(&x, &y);

    printf("After Call by Reference: x = %d & y = %d", x, y);

    return 0;
}

// Call by Value
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;

    printf("Inside Call by Value: a = %d & b = %d\n", a, b);
}

// Call by Reference using pointers
void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}