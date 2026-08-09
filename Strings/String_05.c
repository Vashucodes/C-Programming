#include <stdio.h>

int main()
{
    char ch[200];
    int count = 0;

    printf("Enter any string: ");
    fgets(ch, sizeof(ch), stdin);

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == '\n')
            break;

        count++;
    }

    printf("Length of string is %d", count);

    return 0;
}