#include <stdio.h>

int main() {
    float x, y;
    char ch;

    printf("Enter first number: ");
    scanf("%f", &x);

    printf("Enter second number: ");
    scanf("%f", &y);

    printf("Enter\n+ for add\n- for sub\n* for multiply\n/ for div\n");
    scanf(" %c", &ch);

    switch (ch) {
        case '+':
            printf("Add = %.2f", x + y);
            break;

        case '-':
            printf("Sub = %.2f", x - y);
            break;

        case '*':
            printf("Multiply = %.2f", x * y);
            break;

        case '/':
            if (y != 0)
                printf("Div = %.2f", x / y);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid input!!");
    }

    return 0;
}