#include <stdio.h>
#include <stdlib.h>
float area(float radius);
float area(float radius){
    return 3.14*radius;
}
void main(){
    float radius;
    printf("Enter the \'radius\' for finding Area of Circumfrence of a Circle \n");
    scanf("%f",&radius);
    system("cls");
    printf("Area of Circle is : %.2f",area(radius));
}