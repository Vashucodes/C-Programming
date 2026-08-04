#include <stdio.h>

void rect(int a , int b); 

int main(){
    int x = 5, y = 4;
    rect(x,y);
    return 0;
}

void rect(int a , int b ){
int area ;
     area = a * b;
printf("The area of rectangle  = %d",area);
}