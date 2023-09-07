// write a program to calculate average of three intergers. Numbers are give by the user.
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    float averg;
    printf("Enter the number : ");
    scanf("%d",&num1);
    printf("Enter the number : ");
    scanf("%d",&num2);
    printf("Enter the number : ");
    scanf("%d",&num3);
    averg=num1+num2+num3/3.0;
    printf("Average of three number is : %.2f",averg);
    return 0;
}