#include <stdio.h>

struct add{
    int x;
    int y; 
    int z;
};

int main(){
    struct add ad;
        ad.y= 50;
        ad.z= 50;
        ad.x = ad.y +ad.z;
        printf("Addition = %d",ad.x);
    
    return 0;
}
