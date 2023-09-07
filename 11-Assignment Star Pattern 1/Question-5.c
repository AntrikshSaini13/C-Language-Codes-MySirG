// Write a program to draw  the shape  following pattern
//1 
//12
//123
//1234
//12345

#include<stdio.h>
int main()
{
    int i, j, num;
    printf("Enter the number = ");
    scanf("%d",&num);
    for (i=1 ; i<=num ; i++)
    {
        for (j=1 ; j<=num; j++)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}