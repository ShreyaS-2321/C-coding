#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=x/10;
    printf("%d without last digit is %d",x,y);
    return 0;
}