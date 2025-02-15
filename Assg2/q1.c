#include<stdio.h>

int main()
{
    int x,y,z;
    float avg;
    printf("Enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
    avg=(x+y+z)/3;
    printf("Average of %d %d and %d is:%.2f",x,y,z,avg);
    return 0;
}