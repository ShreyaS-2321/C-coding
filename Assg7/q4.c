#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(x/2*2==x){
        printf("%d is even",x);
    }
    else printf("%d is odd",x);
    return 0;
}