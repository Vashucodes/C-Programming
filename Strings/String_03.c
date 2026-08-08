#include <stdio.h>
#include <string.h>

int main()
{
    char ch[200];
    int length = 0;

    printf("Enter any string: ");
    fgets(ch, sizeof(ch), stdin);

    // Find length
    for (int i = 0; ch[i] != '\0'; i++)
    {
        length++;
    }

    
    if (ch[length - 1] == '\n')
    {
        ch[length - 1] = '\0';
        length--;
    }

    printf("Reverse of %s is:\n", ch);

    for (int j = length - 1; j >= 0; j--)
    {
        printf("%c", ch[j]);
    }

    return 0;
}