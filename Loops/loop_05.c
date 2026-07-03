#include <stdio.h>

int main(){
    int n,b ;
    int sum = 0 ;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n != 0){
        b = n%10;
        sum+=b;
        n = n/10;

    }
    printf("Total sum of digits = %d",sum);
    return 0;
}