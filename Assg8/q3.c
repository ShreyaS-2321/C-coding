#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a, b and c:");
    scanf("%d %d %d",&a,&b,&c);
    int d=(b*b)-4*a*c;

    if(d>0){
        printf("The roots are real and distinct");
    }
    else if(d==0){
        printf("The roots are real and equal");
    }
    else{
        printf("The roots are distinct and complex");
    }
    return 0;
}