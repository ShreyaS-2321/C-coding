#include<stdio.h>

int main()
{
    int x;
    printf("Enter an ASCII code:");
    scanf("%d",&x);
    printf("Character corresponding to the ASCII code %d is %c",x,x);
    return 0;
}