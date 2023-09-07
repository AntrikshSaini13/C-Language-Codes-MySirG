// WAP to reverse a give numbers.
#include<stdio.h>
int main()
{
    int num1, num2=0;
    printf("Enter the number = ");
    scanf("%d",&num1);
    while (num1)
    {
        /* code */
        num2 = num2 * 10 + num1 % 10;
        num1 = num1 / 10;
    }
    printf("\nThe revrse number is = %d",num2);
    return 0;
}