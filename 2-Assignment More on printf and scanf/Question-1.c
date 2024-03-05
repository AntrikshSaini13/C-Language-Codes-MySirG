#include <stdio.h>
#include<stdlib.h>
float average(float num1, float num2, float num3);
float average(float num1, float num2, float num3){
   return num1+num2+num3/3;
}
void main(){
    float num1, num2,num3;
    printf("Enter the three number of for finding the average\n");
    scanf("%f %f %f",&num1, &num2, &num3);
    system("cls");
    printf("Average of Three Number is : %.2f",average(num1, num2, num3));
}