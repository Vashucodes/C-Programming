#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("gautam.txt", "w");

    if (ptr == NULL)
    {
        printf("File could not be opened");
        return 1;
    }

    fprintf(ptr, "hello friend");

    fclose(ptr);

    return 0;
}