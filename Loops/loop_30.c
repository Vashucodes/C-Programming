#include <stdio.h>

int main()
{
    int n, temp, rev = 0, digit;

    printf("Enter any number: ");
    scanf("%d", &n);

    temp = n;

    for (; temp != 0; temp /= 10)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
    }

    if (rev == n)
        printf("%d is a Palindrome Number.", n);
    else
        printf("%d is not a Palindrome Number.", n);

    return 0;
}