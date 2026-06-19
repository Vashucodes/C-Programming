#include <stdio.h>

int main(){
    int x , Y;
    int year;
    printf("Enter your birth year =");
    scanf("%d",&year);
    Y =year % 4 ;
    if (Y == 0)
    {
        printf("you are born in leap year");
    }
    else{
        printf("you are not born in leap year");
    }
    
    return 0;
}