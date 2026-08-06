#include <stdio.h>

void array(int arr[5]);

int main()
{
    int b[5];

    printf("Enter 5 integer values one by one:\n");

    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &b[j]);
    }

    array(b);

    return 0;
}

void array(int arr[5])
{
    int sum = 0;

    printf("Elements are:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("\nTotal sum = %d", sum);
}