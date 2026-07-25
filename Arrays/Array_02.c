#include <stdio.h>

int main(){
    int arr[6]= {1,2,3,4,5,6};
    printf("Array in reverse order is gievn below\n");
    for (int i = 5; i >=0 ; i--)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}