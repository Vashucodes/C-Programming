#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    ptr = (int *)calloc(2, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}