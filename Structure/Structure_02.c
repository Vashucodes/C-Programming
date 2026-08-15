#include <stdio.h>
#include <string.h>

struct student
{
    char name[200];
    int roll;
    float cgpa;
};

int main()
{
    struct student a1;

    a1.cgpa = 8.0;
    a1.roll = 28;
    strcpy(a1.name, "vashu");

    printf("Roll = %d\n", a1.roll);
    printf("Name = %s\n", a1.name);
    printf("CGPA = %.1f", a1.cgpa);

    return 0;
}
