#include <stdio.h>

int main()
{
    int roll[10] = {14, 52, 63, 45, 65, 84, 75, 96, 51, 62};
    int r, found = 0;

    printf("Roll numbers are:\n");

    for (int i = 0; i < 10; i++)
        printf("%d ", roll[i]);

    printf("\nEnter roll number to search: ");
    scanf("%d", &r);

    for (int j = 0; j < 10; j++)
    {
        if (r == roll[j])
        {
            printf("Roll number found at position %d", j + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Roll number not found");

    return 0;
}