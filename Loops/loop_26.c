#include <stdio.h>

int main(){
    int n1, n2;
      printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);
if (n1 == 0 || n2 == 0)
{
    printf("LCM is not defined when one of the numbers is 0.");
    return 0;
}

    for (int i = (n1 > n2 ? n1 : n2); ; i++)
    {
  
        if(i%n1 == 0 && i%n2 == 0){
            printf("LCM of %d and %d is %d ",n1,n2,i);
            break;
        }
    }
    
    return 0;
}