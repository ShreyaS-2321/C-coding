#include<stdio.h>

int main()
{
    int r;
    float circumference;
    printf("Enter the value of radius:");
    scanf("%d",&r);
    circumference=2*3.14*r;
    printf("The circumference of circle is:%.2f",circumference);
}