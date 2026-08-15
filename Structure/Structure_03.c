#include <stdio.h>

struct add
{
    int x;
    int y;
    int z;
};

int main()
{
    struct add ad;

    printf("Enter the value: ");
    scanf("%d", &ad.y);

    printf("Enter the value: ");
    scanf("%d", &ad.z);

    ad.x = ad.y + ad.z;

    printf("Addition = %d", ad.x);

    return 0;
}
