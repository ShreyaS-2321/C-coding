#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);

    if(a>b&&c){
        printf("%d is greater than %d and %d",a,b,c);
    }
    else if(b>a&&c){
        printf("%d is greater than %d and %d",b,a,c);
    }
    else if(c>a&&b){
        printf("%d is greater than %d and %d",c,a,b);
    }
    else{
        printf("%d, %d and %d are equal",a,b,c);
    }
    return 0;
}