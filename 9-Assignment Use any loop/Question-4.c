// WAP to calculate the sum of first N square numbers.
#include<stdio.h>
int main()
{
    int i=1, sum=0, num, sqr;
    printf("Enter the number = ");
    scanf("%d",&num);
    while (i<=num)
    {
        sqr = i * i;
        printf("%d ",sqr);
        sum += sqr;   
        i++;
    }
    printf("\nThe sum of N number's square =  %d ",sum);
    return 0;
}
