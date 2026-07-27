#include <stdio.h>

int main(){
    int arr[4]= {1,2,3,6};
   
    for (int i = 0; i <= 3; i++)
    {
       if (arr[i]%2 == 0 )
       {
        printf("Even number is %d\n",arr[i]);
       }
       
      
    }
      
    return 0;
}