#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value for the sides a, b and c of the triangle:\n");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("The triangle is valid");
    }
    else{
        printf("The triangle is invalid");
        }
    return 0;    
}