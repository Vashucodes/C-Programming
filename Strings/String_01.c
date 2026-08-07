#include <stdio.h>
#include <string.h>

int main()
{
    char u[200] = "easy@gmail.com";
    char v[200] = "miss@001";

    char u1[200], v1[200];

    printf("Enter username: ");
    scanf("%199s", u1);

    printf("Enter password: ");
    scanf("%199s", v1);

    if (strcmp(u, u1) == 0 && strcmp(v, v1) == 0)
    {
        printf("Login successful");
    }
    else
    {
        printf("Wrong username or password");
    }

    return 0;
}