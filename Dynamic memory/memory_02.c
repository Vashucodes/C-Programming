#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    printf("Sum = %d", sum);

    free(ptr);

    return 0;
}