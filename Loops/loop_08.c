#include <stdio.h>

int main(){
    int n , b ;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("Reverse is given below");
    do
    {
        b = n % 10;
        printf("%d",b);
        n = n/10;
    } while ( n != 0);
    
    return 0;
}