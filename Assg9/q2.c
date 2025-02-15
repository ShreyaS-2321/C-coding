#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter marks of maths, english, phy, chem and bio:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33){
        printf("Student has passed!!");
    }
    else{
        printf("Student has failed!");
    }
    return 0;
}