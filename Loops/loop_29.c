#include <stdio.h>

int main()
{
    int n;
    int fib1 = 0, fib2 = 1, fib3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n >= 1)
        printf("%d ", fib1);

    if (n >= 2)
        printf("%d ", fib2);

    for (int i = 3; i <= n; i++)
    {
        fib3 = fib1 + fib2;
        printf("%d ", fib3);

        fib1 = fib2;
        fib2 = fib3;
    }

    return 0;
}