#include<stdio.h>

int main()
{
    int cp,sp;
    printf("Enter the cost price of 1 banana:");
    scanf("%d",&cp);
    printf("Enter the selling price of 1 banana:");
    scanf("%d",&sp);
    int profit,loss;
    profit = (25*sp)-(25*cp);
    loss=(25*sp)-(25*cp);
    printf("The profit and loss by selling 25 banans are %d %d respectively",profit,loss);
}