#include <stdio.h>

int main() {
    int i, b;

    printf("Enter any number: ");
    scanf("%d", &i);

    printf("Reverse is given below\n");

    while (i != 0) {
        b = i % 10;
        printf("%d", b);
        i = i / 10;
    }

    return 0;
}