#include<stdio.h>

int main()
{
    float y;
    double z;
    printf("Enter the value of y and z:");
    scanf("%f %lf",&y,&z);
    printf("Size of real constants %f and %lf is %d and %d",y,z,sizeof(y),sizeof(z));
    return 0;
}