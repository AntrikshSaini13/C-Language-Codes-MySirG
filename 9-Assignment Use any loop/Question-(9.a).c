// WAP to calculate LCM  of two numbers
// APPROACH 1 
#include<stdio.h>
int main()
{

int  LCM,num1,num2;
printf("Enter the number = ");
scanf("%d %d",&num1,&num2);
for(LCM = num1 > num2 ? num1 : num2 ; LCM <= num1 * num2 ; LCM++)
    if (LCM % num1 == 0 && LCM % num2 == 0)
        break;
printf("LCM is %d",LCM);
}