#include <stdio.h>

int main(){
    int a , b , c ;
    int *p,*q,*r;
    p = &a;
    q = & b;
    r = &c;
    printf("Enter first number :");
    scanf("%d",q);
    printf("Enter second number :");
    scanf("%d",r);

    if (*r == 0){
    printf("Division by zero is not possible");
    return 0;
    }
    
    *p = *q / *r;
    printf("The division of two numbers = %d",*p);
    return 0;
}