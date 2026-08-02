#include <stdio.h>

int main()
{
    int arr[2][2]={{5 , 6},{4 , 5}};
                  
    
printf("Array is given below\n");
    
    for (int i = 0; i <=1; i++)
    {
        for (int j = 0; j <=1 ; j++)
        {
            printf("%d", arr[i] [j]);
        }
        printf("\n");
    }
    printf("Transpose of Array is given below\n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d", arr[j] [i]);
        }
        printf("\n");
    }
  
    return 0;
}