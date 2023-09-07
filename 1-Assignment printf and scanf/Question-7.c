// Write a Program to calculate sum fo two integers numbers. Numbers are taken from user through keyboard.
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the value of number\n");
    // printf("Enter the value of number_2 %d\n",num1);
    // printf("Enter the value of number_2 %d\n",num1);
    scanf("%d %d",&num1,&num2);
    num3=num1+num2;
    printf("Sum of two number is = %d \n",num3);
    return 0;
}