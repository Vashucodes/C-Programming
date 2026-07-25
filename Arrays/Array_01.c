#include <stdio.h>

int main(){
    int arr[5];
    for(int i = 0; i <= 4; i++){
        printf("Enter %d element ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Element is given below\n");
    for (int j = 0; j <=4 ; j++)
    {
        printf("%d\n",arr[j]);
    }
    
    return 0;
}