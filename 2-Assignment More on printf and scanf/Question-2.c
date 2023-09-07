// Write a program to calculate circumference of circle
#include<stdio.h>
int main()
{
    int radius;
    float area_circumf;
    printf("Enter the value of radius : ");
    scanf("%d",&radius);
    area_circumf=2*3.14159*radius;
    printf("Area of circumference of circle %f having the radius %d",area_circumf,radius);
    printf("\n");
    return 0;
}