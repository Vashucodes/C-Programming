#include <stdio.h>

int main()
{
    FILE *ptr;
    int ch;
    int alpha = 0;

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
    }

    printf("Total number of alphabets = %d\n", alpha);

    fclose(ptr);

    return 0;
}