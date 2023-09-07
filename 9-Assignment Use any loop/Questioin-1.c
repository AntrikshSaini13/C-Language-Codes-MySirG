// WAP to calculate sum fo first natural numbers.
#include<stdio.h>
int main()
{
    int i=1, number, sum = 0;
    printf("Enter the number = ");
    scanf("%d",&number);
    while (i<=number)
    {
        /* code */
        printf("%d ",i);
        sum += i;
        i++;
    }
    printf("\n Sum of first N natural number is = %d",sum);
    return 0;
}