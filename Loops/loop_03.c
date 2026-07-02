#include <stdio.h>

int main(){
    int n,b ;
    int mul = 1 ;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n != 0){
        
        b = n%10;
       mul*=b;
        n = n/10;

    }
    printf("Products of digits = %d",mul);
    return 0;
}