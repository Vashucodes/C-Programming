#include <stdio.h>

int main()
{
    int n, b = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Number is not prime");
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            b = 1;
            break;
        }
    }

    if (b == 0)
        printf("Number is prime");
    else
        printf("Number is not prime");

    return 0;
}