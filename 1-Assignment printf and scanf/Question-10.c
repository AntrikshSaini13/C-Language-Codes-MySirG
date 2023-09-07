// WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
#include<stdio.h>
int main()
{
    float area;
    int radius;
    printf("Enter the radius of circle = ");
    scanf("%d",&radius);
    area=3.14159*radius;
    printf("\"Area of cirle is %.2f having the radius %d\"",area,radius);
    return 0;
}