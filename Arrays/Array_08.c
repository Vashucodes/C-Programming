#include <stdio.h>

int main()
{
    int a[5], b[5], c[10];
    int n;

    printf("Enter number of elements (max 5): ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    // Copy first array into c
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    // Copy second array into c
    for (int i = 0; i < n; i++)
    {
        c[n + i] = b[i];
    }

    printf("Merged array is:\n");
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}