#include <stdio.h>

int main()
{
    int a;
    int *p = &a;

    printf("Enter a number: ");
    scanf("%d", p);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", *p, i, (*p) * i);
    }

    return 0;
}