#include <stdio.h>

void table(int num, int i);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    table(num, 1);

    return 0;
}

void table(int num, int i)
{
    if (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        table(num, i + 1);
    }
}