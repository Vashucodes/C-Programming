#include <stdio.h>

int main()
{
    int arr[50][50], row, col, sum = 0;

    printf("Enter the value of row: ");
    scanf("%d", &row);

    printf("Enter the value of col: ");
    scanf("%d", &col);

    printf("Enter %d integer values:\n", row * col);

    // Input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Output
    printf("Matrix is:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }

    printf("Total sum = %d", sum);

    return 0;
}