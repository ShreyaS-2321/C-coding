#include<stdio.h>

int main()
{
    float a,b;
    printf("Enter the cost price of the product:");
    scanf("%f",&a);
    printf("Enter the selling price of the product:");
    scanf("%f",&b);
    float d=b-a; // difference = selling price-cost price
    float per=(d/a)*100;
    if(d>0){
        printf("Customer has gained profit of %.2f%",per);
    }
    else if(d==0){
        printf("Customer has neither gained nor lost");
    }
    else{
        printf("Customer has lost by %.2f%",per);
    }
    return 0;
}