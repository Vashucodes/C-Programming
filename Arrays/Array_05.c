#include <stdio.h>

int main()
{
    int a[50], n, max;

    printf("Enter how many elements you want to store: ");
    scanf("%d", &n);

    // Input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Assume first element is maximum
    max = a[0];

    // Find maximum
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    printf("Maximum Value = %d", max);

    return 0;
}