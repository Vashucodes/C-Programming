#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter the value of x, y and z: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x >= y && x >= z) {
        printf("%d is greatest", x);
    }
    else if (y >= x && y >= z) {
        printf("%d is greatest", y);
    }
    else {
        printf("%d is greatest", z);
    }

    return 0;
}