#include <stdio.h>

int main()
{
    int arr[50], n, x;
    int first, last, mid, flag = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d sorted numbers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    first = 0;
    last = n - 1;

    while (first <= last)
    {
        mid = (first + last) / 2;

        if (x == arr[mid])
        {
            flag = 1;
            break;
        }
        else if (x > arr[mid])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }

    if (flag == 1)
        printf("Number found at position %d", mid + 1);
    else
        printf("Number not found");

    return 0;
}