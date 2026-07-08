#include <stdio.h>

int main(){
    int n,b;
    printf("Enter any number : ");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
       b = n*i;
       printf("%d\n",b);
    }
    
    return 0;
}