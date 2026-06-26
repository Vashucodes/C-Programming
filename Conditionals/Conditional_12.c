#include <stdio.h>

int main() {
    float p;

    printf("Enter percentage: ");
    scanf("%f", &p);

    if (p >= 60 && p <= 100) {
        printf("First Division");
    }
    else if (p >= 45) {
        printf("Second Division");
    }
    else if (p >= 33) {
        printf("Third Division");
    }
    else {
        printf("Fail");
    }

    return 0;
}