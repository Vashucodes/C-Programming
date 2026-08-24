#include <stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,n;
    printf("Enter the number:");
    scanf("%d",&n);
    ptr = (int*) malloc(n*sizeof(int));
    for(int i =0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    int largest = ptr[0];

    for(int i=0;i<n;i++){
        if(ptr[i]>largest){
            largest = ptr[i];
        }
    }
    printf("Largest num is %d",largest);
    free(ptr);

    return 0;
}