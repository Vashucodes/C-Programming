#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("text.txt", "r");

    if (ptr == NULL)
    {
        printf("File not found");
        return 1;
    }

    printf("File opened successfully");

    fclose(ptr);

    return 0;
}