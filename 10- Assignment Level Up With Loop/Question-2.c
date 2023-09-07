// WAP to print the first N term of  fibonacci series.
#include<stdio.h>
int main()
{
    int f0=0, f1=1, i, num,sum;
    printf("Enter the number = ");
    scanf("%d",&num);
    printf("Fibonaccie series = ");
    for (i=2;i<=num;i++)
    {
        sum = f0+f1;
        printf("%d ",sum);
        f0+=f1;
        f1+=f0;
        i++;
    }
    return 0;
}