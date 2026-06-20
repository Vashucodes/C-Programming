#include <stdio.h>

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The given number is positive.\n");
    }
    else if (n < 0)
    {
        printf("The given number is negative.\n");
    }
    else
    {
        printf("The given number is zero.\n");
    }

    return 0;
}