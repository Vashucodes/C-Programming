#include <stdio.h>

int main() {
    float amt, creditamt, debitamt;
    char ch;

    printf("Enter initial amount: ");
    scanf("%f", &amt);

    printf("\nEnter\n");
    printf("c for Credit\n");
    printf("d for Debit\n");
    printf("b for Balance\n");

    scanf(" %c", &ch);

    switch (ch) {

        case 'c':
            printf("Enter credit amount: ");
            scanf("%f", &creditamt);

            amt = amt + creditamt;

            printf("New amount = %.2f", amt);
            break;

        case 'd':
            printf("Enter debit amount: ");
            scanf("%f", &debitamt);

            if (amt >= debitamt) {
                amt = amt - debitamt;
                printf("New amount = %.2f", amt);
            }
            else {
                printf("Insufficient Balance");
            }
            break;

        case 'b':
            printf("Amount in your account = %.2f", amt);
            break;

        default:
            printf("Invalid input");
    }

    return 0;
}