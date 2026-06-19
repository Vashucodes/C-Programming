#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("%d is greater", x);
    }
    else if (y > x) {
        printf("%d is greater", y);
    }
    else {
        printf("Both numbers are equal");
    }

    return 0;
}