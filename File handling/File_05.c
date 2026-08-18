#include <stdio.h>

int main()
{
    FILE *ptr;
    int ch;
    int alpha = 0, digit = 0, special = 0;

    ptr = fopen("text.txt", "r");

    if (ptr == NULL)
    {
        printf("File not found");
        return 1;
    }

    while ((ch = getc(ptr)) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            alpha++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }

    printf("Total Alphabets = %d\n", alpha);
    printf("Total Digits = %d\n", digit);
    printf("Total Special Symbols = %d\n", special);

    fclose(ptr);

    return 0;
}