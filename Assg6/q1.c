#include <stdio.h>

int main(){
    float usd = 84.23;
    float x;
    printf("Enter amount in INR:\n");
    scanf("%f",&x);
    printf("Amount of %f INR in USD is %.2f",x,x/usd);
    return 0;
}