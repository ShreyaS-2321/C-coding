#include <stdio.h>

int main(){
    int usd = 84.23;
    int x;
    printf("Enter amount in INR:\n");
    scanf("%d",&x);
    printf("Amount of %dINR in USD is %d",x,usd*x);
}