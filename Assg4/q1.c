#include<stdio.h>

int main()
{
    char x;
    printf("Enter a character constant:");
    scanf("%c",&x);
    printf("Size of character constant %c is %d",x,sizeof(x));
}