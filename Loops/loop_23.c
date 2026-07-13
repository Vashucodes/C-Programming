#include <stdio.h>

int main() {
    int n;
    int fact = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number does not exist.");
    }
    else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial = %d", fact);
    }

    return 0;
}
