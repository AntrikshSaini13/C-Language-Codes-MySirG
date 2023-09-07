// WAP to print table of five.
#include<stdio.h>
int main()
{
    int i =1;
    while (i <= 10)
    {
        printf("5 * ");
        printf("%d = ",i);
        printf("%d\n",i*5);
        i++;
    }
    return 0;
}