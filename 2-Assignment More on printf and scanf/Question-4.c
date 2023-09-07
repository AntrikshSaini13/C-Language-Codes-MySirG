// write a program to calculate volume of cuboid.
// Volume of a cuboid = l × b × h
#include<stdio.h>
int main()
{
    float length, breath, height, volume;
    printf("Enter the length of rectangle : ");
    scanf("%f",&length);
    printf("Enter the Breath of rectangle : ");
    scanf("%f",&breath);
    printf("Enter the height of rectangle : ");
    scanf("%f",&height);
    volume=length*breath*height;
    printf("Volume of Cuboid is %.2f having Length of rectangle %.2f and Breath of rectangle %.2f and Height of rectangle %.2f ",volume,length,breath,height);
    return 0;
}