#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>99 && x<999){
        printf("The number is 3 digit");
    }
    else{
        printf("The number is not 3 digit");
    }
    return 0;
}