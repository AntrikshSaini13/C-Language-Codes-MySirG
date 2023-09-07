// WAP to calculate the N number of factorial.
#include<stdio.h>
int main()
{
    int i=1, factorial=1, num ;
    printf("Enter the number = ");
    scanf("%d",&num);
    while (i<=num)
    {
        printf("%d ",i);
        factorial=factorial*i; 

        i++;
    }
    printf("\nFactorial is = %d",factorial);
    return 0;
}
