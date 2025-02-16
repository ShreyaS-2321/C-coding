#include<stdio.h>

int main()
{
 int x,y;
 printf("enter value of x\n");
 scanf("%d",&x);
 y=(x/100)+((x/10)%10)+x%10;
 printf("sum of digits of x:%d",y);
 return 0;
}