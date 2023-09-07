// WAP of calcilate the sum of first N natural even number.
#include<stdio.h>
int main()
{
    int i=1, sum=0, even, num;
    printf("Enter the number = ");
    scanf("%d",&num);
    while(i <= num)
    {
        even = i * 2;
        printf("%d ",even);
        sum += even;
        i++;
    }
    printf("\nSum of N Even number i = %d",sum);
    return 0;
}