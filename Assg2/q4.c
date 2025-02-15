#include<stdio.h>

int main()
{
    int a;
    int volume_of_cuboid;
    printf("Enter the value of side a:");
    scanf("%d",&a);
    volume_of_cuboid = a*a*a;
    printf("The volume of cuboid for side %d is %d",a,volume_of_cuboid);
    return 0; 
}