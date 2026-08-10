#include <stdio.h>

int main(){
    int a , b = 20, c = 30;
    int *p;

    *p = b + c;

    printf("Add = %d",*p);
    
    return 0;
}