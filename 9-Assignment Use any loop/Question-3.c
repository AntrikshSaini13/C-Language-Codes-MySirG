// WAP to calculate the sum of first N odd numbers.
#include<stdio.h>
int main()
{
    int i=1, sum=0, num, odd;
    printf("Enter the number = ");
    scanf("%d",&num);
    while (i<=num)
    {
        odd = 2 * i - 1;
        printf("%d ",odd);
        sum += odd;   
        i++;
    }
    printf("\nThe sum of N number's Odd =  %d ",sum);
    return 0;
}
