#include <stdio.h>

typedef struct multiply
{
    int x;
    int y;
    int z;
} m1;

int main()
{
    m1 s1;

    s1.x = 40;
    s1.y = 1;
    s1.z = s1.x * s1.y;

    printf("Multiplication = %d", s1.z);

    return 0;
}