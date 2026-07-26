#include <stdio.h>

int main(){
    int arr[4]= {2,4,5,6};
    int sum = 0;
    for (int i = 0; i <= 3; i++)
    {
        sum += arr[i];
      
    }
      printf("Total sum = %d ",sum);
    return 0;
}