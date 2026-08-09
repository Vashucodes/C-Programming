#include <stdio.h>

int main()
{
    char ch[200];
    int alpha = 0;

    printf("Enter any string: ");
    fgets(ch, sizeof(ch), stdin);

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if ((ch[i] >= 'A' && ch[i] <= 'Z') ||
            (ch[i] >= 'a' && ch[i] <= 'z'))
        {
            alpha++;
        }
    }

    printf("Total alphabets = %d", alpha);

    return 0;
}