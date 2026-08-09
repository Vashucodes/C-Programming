#include <stdio.h>

int main()
{
    char ch[200];
    int vowel = 0, consonant = 0;

    printf("Enter any string: ");
    fgets(ch, sizeof(ch), stdin);

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if ((ch[i] >= 'A' && ch[i] <= 'Z') ||
            (ch[i] >= 'a' && ch[i] <= 'z'))
        {
            if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' ||
                ch[i] == 'o' || ch[i] == 'u' ||
                ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' ||
                ch[i] == 'O' || ch[i] == 'U')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }

    printf("Total vowel = %d and consonant = %d", vowel, consonant);

    return 0;
}