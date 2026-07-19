#include <stdio.h>

int main()
{
    char color;
    int choice;

    do
    {
        printf("Enter the alphabet of color code: ");
        scanf(" %c", &color);

        switch (color)
        {
        case 'V':
        case 'v':
            printf("The color is Violet\n");
            break;

        case 'B':
        case 'b':
            printf("The color is Blue\n");
            break;

        case 'G':
        case 'g':
            printf("The color is Green\n");
            break;

        case 'Y':
        case 'y':
            printf("The color is Yellow\n");
            break;

        case 'O':
        case 'o':
            printf("The color is Orange\n");
            break;

        case 'R':
        case 'r':
            printf("The color is Red\n");
            break;

        default:
            printf("Invalid color code\n");
        }

        printf("\nDo you want to continue? (1/0): ");
        scanf("%d", &choice);

    } while (choice == 1);

    return 0;
}