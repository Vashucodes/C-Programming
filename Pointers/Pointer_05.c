#include <stdio.h>

int main(){
    int b,c;
    int *p1,*p2;
    p1= &b;
    p2= &c;
    printf("Enter first number: ");
    scanf("%d",p1);
    printf("Enter second number: ");
    scanf("%d",p2);
    printf("Subtraction = %d",*p1 - *p2);
    return 0;
}