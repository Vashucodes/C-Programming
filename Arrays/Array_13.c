#include <stdio.h>

int main()
{
    int arr[50][50], b[50][50], c[50][50];
    int row, col;

    printf("Enter the value of row: ");
    scanf("%d", &row);

    printf("Enter the value of col: ");
    scanf("%d", &col);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Addition
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = arr[i][j] + b[i][j];
        }
    }

    printf("Addition of matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}