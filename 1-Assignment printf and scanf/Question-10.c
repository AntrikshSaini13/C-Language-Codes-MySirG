#include<stdio.h>
float area(float radius);
float area(float radius){
    return 3.14*radius*radius;
}
void main(){
    float radius;
    printf("Enter the radius for find thr area of circle : ");
    scanf("%f",&radius);
    printf("Area of Circle is : %.2f having the radius %.2f ",area(radius),radius);
}