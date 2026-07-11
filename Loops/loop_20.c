#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
    {
        printf("%d is even\n", i);
    }

    return 0;
}