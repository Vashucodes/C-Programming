#include <stdio.h>

int main()
{
    FILE *ptr, *str;
    char ch;

    ptr = fopen("text.txt", "r");
    str = fopen("dev.txt", "w");

    if (ptr == NULL || str == NULL)
    {
        printf("File could not be opened");
        return 1;
    }

    while ((ch = getc(ptr)) != EOF)
    {
        putc(ch, str);
    }

    fclose(ptr);
    fclose(str);

    return 0;
}