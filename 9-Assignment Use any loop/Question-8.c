// WAP to check wheather a given number is a Prime number or not.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);
    if (num > 1)
    {
        if (num % 2)
            printf("\nPrime number = %d",num);
        else
            printf("\nNot a Prime number = %d",num);
    }
    else
    {
        printf("\nNot a Prime number = %d",num);
    }
    return 0;
}