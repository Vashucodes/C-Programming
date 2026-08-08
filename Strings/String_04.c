#include <stdio.h>
#include <string.h>

int main()
{
    char ch[200], rev[200];
    int length;

    printf("Enter string: ");
    fgets(ch, sizeof(ch), stdin);

    
    ch[strcspn(ch, "\n")] = '\0';

    length = strlen(ch);

    // Reverse string
    for (int i = 0; i < length; i++)
    {
        rev[i] = ch[length - 1 - i];
    }

    rev[length] = '\0';

    // Check palindrome
    if (strcmp(rev, ch) == 0)
    {
        printf("%s is a palindrome string", ch);
    }
    else
    {
        printf("%s is not a palindrome string", ch);
    }

    return 0;
}