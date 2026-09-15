#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int player, computer;
    char choice;

    do
    {
        computer = rand() % 3;

        /*
            0 --> Rock
            1 --> Paper
            2 --> Scissors
        */

        printf("\nChoose 0 for Rock, 1 for Paper and 2 for Scissors: ");
        scanf("%d", &player);

        printf("Computer chose %d\n", computer);

        if (player == 0 && computer == 0)
        {
            printf("It's a Draw!\n");
        }
        else if (player == 0 && computer == 1)
        {
            printf("You Lose!\n");
        }
        else if (player == 0 && computer == 2)
        {
            printf("You Win!\n");
        }
        else if (player == 1 && computer == 0)
        {
            printf("You Win!\n");
        }
        else if (player == 1 && computer == 1)
        {
            printf("It's a Draw!\n");
        }
        else if (player == 1 && computer == 2)
        {
            printf("You Lose!\n");
        }
        else if (player == 2 && computer == 0)
        {
            printf("You Lose!\n");
        }
        else if (player == 2 && computer == 1)
        {
            printf("You Win!\n");
        }
        else if (player == 2 && computer == 2)
        {
            printf("It's a Draw!\n");
        }
        else
        {
            printf("Something went wrong!\n");
        }

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for playing!");

    return 0;
}