#include <stdio.h>

int main(){
    int n , p , f= 1;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("Enter the power of given number : ");
    scanf("%d",&p);
    for (int i = 1; i <= p; i++)
    {
        f *= n;
    }
    printf("Result = %d",f);
    return 0;
}