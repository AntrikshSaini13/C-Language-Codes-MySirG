// Write a program to calculate simple intrest.
#include<stdio.h>
int main()
{
    int principal_price;
    float rate_of_intrest,year,simple_intrest;
    printf("Enter amount : ");
    scanf("%d",&principal_price);
    printf("Enter rate of intrest : ");
    scanf("%f",&rate_of_intrest);
    printf("Enter year : ");
    scanf("%f",&year);
    simple_intrest=principal_price*rate_of_intrest*year/100;
    printf("Simple intrest = %.2f\n having Amount of loan = %d\nand intrest of loan %.2f\n and year is %.2f",simple_intrest,principal_price,rate_of_intrest,year);
    return 0;
}

