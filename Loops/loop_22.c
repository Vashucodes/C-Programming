#include <stdio.h>

int main() {
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        printf("%d is odd\n", i);
    }

    return 0;
}