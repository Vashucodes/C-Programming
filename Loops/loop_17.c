#include <stdio.h>

int main(){
    int n ;
    int sum = 0;
    printf("Enter any number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
        sum = sum +i;
        
    }
    printf("total sum = %d\n", sum);
    return 0;
}                                                            