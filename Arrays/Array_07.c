#include <stdio.h>

int main(){
    int a[5]={20,30,40,50,60};
    int b[5];
    printf("FIrst array is given below\n");
    for (int i = 0; i <= 4; i++)
    {
    printf("%d",a[i]);
        b[i]=a[i];
    }
    printf(" After copy second array is given below\n");
    for (int j = 0; j <= 4; j++)
    {
        printf("%d",b[j]);
    }
    
    return 0;
}