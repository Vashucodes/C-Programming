#include <stdio.h>

int main()
{
    int n, temp, digit;
    int sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    temp = n;

    for (; temp != 0; temp /= 10)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
    }

    if (sum == n)
        printf("%d is an Armstrong Number.", n);
    else
        printf("%d is not an Armstrong Number.", n);

    return 0;
}