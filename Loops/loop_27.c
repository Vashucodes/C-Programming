#include <stdio.h>

int main()
{
    int n1, n2, hcf = 1;

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    // Handle negative numbers
    if (n1 < 0)
        n1 = -n1;
    if (n2 < 0)
        n2 = -n2;

    
    if (n1 == 0 || n2 == 0)
    {
        printf("HCF is not defined when one of the numbers is 0.");
        return 0;
    }

    
    int min = (n1 < n2) ? n1 : n2;

    
    for (int i = 1; i <= min; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", n1, n2, hcf);

    return 0;
}