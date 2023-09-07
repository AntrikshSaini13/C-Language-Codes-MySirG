// WAP to calculate the sum of first N cube numbers.
#include<stdio.h>
int main()
{
    int i=1, sum=0, num, cubes;
    printf("Enter the number = ");
    scanf("%d",&num);
    while (i<=num)
    {
        cubes = i * i * i;
        printf("%d ",cubes);
        sum += cubes;   
        i++;
    }
    printf("\nThe sum of  fist N natural number's cube =  %d ",sum);
    return 0;
}
