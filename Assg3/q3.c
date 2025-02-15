#include<stdio.h>

int main()
{
    char a,b,c;
    printf("Enter three characters:");
    scanf("%c %c %c",&a,&b,&c);
    printf("ASCII code of %c %c and %c are %d %d and %d respectively",a,b,c,a,b,c);
    return 0;
}