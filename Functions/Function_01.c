#include <stdio.h>

int sub(int a , int b); 

int main(){
    int x = 5, y = 4;
    int c ;
    
    c = sub(x,y);
    
    printf("Subtraction = %d",c);
    
    return 0;
}

int sub(int a , int b )
{
   return a - b;
}