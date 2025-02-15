#include<stdio.h>

int main()
{
    float p,r,t;
    float SI;
    printf("Enter the value of p r and t:");
    scanf("%f %f %f",&p,&r,&t);
    SI=p*r*t;
    printf("For principal %.2f, rate of interest %.2f and time %.2f the SI is:%.2f",p,r,t,SI);
    return 0;
}