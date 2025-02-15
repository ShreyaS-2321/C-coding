#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if(x<=0){
        printf("%d is Non positive",x);
    }
    else{
        printf("%d is positive",x);
    }
    return 0;
}