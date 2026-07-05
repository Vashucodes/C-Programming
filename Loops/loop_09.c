#include <stdio.h>

int main()
{
    int n, b, rev = 0, cpy;
    printf("Enter any number : ");
    scanf("%d", &n);
    cpy = n;
    do
    {
        b = n % 10;
        rev = rev * 10 + b;
        n = n / 10;
    } while (n != 0);
    if (cpy == rev)
    {
        printf("The given number is a palindrome");
    }
    else
    {
        printf("The given number is not a palindrome");
    }
    return 0;
}