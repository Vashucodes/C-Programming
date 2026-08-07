#include <stdio.h>
#include <string.h>

int main()
{
    char ch[200];

    printf("Enter mobile number: ");
    scanf("%199s", ch);

    if (strlen(ch) == 10)
    {
        printf("The given mobile number is valid.");
    }
    else
    {
        printf("The given mobile number is not valid.");
    }

    return 0;
}