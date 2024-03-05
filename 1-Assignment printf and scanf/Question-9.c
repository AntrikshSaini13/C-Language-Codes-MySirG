#include<stdio.h>
float area(float num1, float num2);
float area(float num1, float num2){
    return num1*num2;   
}
void main(){
    float num1, num2;
    printf("Enter the Two Number\n");
    scanf("%f %f",&num1,&num2);
    printf("Area Of Rectangle : %.2f",area(num1, num2));
}