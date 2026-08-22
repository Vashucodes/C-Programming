#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    ptr[0] = 2;
    ptr[1] = 1;
    ptr[2] = 5;
    ptr[3] = 4;
    ptr[4] = 3;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}