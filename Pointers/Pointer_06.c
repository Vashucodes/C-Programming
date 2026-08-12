#include <stdio.h>

int main(){
    int a , b ;
    int *p,*q;
    p = &a;
    q= &b;
    printf("Enter first number :");
    scanf("%d",p);
    printf("Enter second number :");
    scanf("%d",q);

    printf("Multiply of two numbers = %d",(*p) *(*q) );
    return 0;
}