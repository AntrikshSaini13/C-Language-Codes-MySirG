// Write a program to draw  the shape  following pattern
// 1
// 21
// 321
// 4321
// 54321

#include<stdio.h>
int main()
{
    int i, j, num;
    printf("Enter the number = ");
    scanf("%d",&num);
    for (i=1 ; i<=num ; i++)
    {
        for (j=i ; j>=1  ; j--)
        {
            if(j<=i)
            {
                printf("%d",j);
            }   
            else
                printf(" ");

        }
        printf("\n");
    }
    return 0;
}