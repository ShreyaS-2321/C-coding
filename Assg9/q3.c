#include<stdio.h>

int main()
{
    char x;
    printf("Enter an alphabet:");
    scanf("%c",&x);

    if(x>='a' && x<='z'){ // inside inverted comma because they are character ..if '' not given then they will be treated as variable
        printf("%c is a lowercase",x);
    }
    else{
        printf("%c is a uppercase",x);
    }
    return 0;
}