#include <stdio.h>

int main() {
    int n, b, c;

    printf("Enter any number : ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    c = n % 10;

    do {
        b = n % 10;
        n = n / 10;
    } while (n != 0);

    printf("First digit = %d and Last digit = %d", b, c);

    return 0;
}