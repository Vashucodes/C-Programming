#include <stdio.h>

void doWork(int a, int b, int *sum, int *avg, int *sub);

int main()
{
    int a = 4, b = 5;
    int sum, avg, sub;

    doWork(a, b, &sum, &avg, &sub);

    printf("Sum = %d\n", sum);
    printf("Average = %d\n", avg);
    printf("Subtraction = %d\n", sub);

    return 0;
}

void doWork(int a, int b, int *sum, int *avg, int *sub)
{
    *sum = a + b;
    *avg = (a + b) / 2;
    *sub = a - b;
}