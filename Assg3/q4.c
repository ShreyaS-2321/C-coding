#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=x%10;
    printf("Last digit of %d is %d",x,y);
    return 0;
}