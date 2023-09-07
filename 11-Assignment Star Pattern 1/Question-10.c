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
            if(j==1 || j==5 || i==1 || i==5)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}