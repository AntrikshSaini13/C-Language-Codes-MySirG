#include<stdio.h>
int main()
{
    int i, j, num , result = 0;
    printf("Enter the number = ");
    scanf("%d",&num);
    for (i=1 ; i<=num ; i++)
    {
        for (j=i ; j<=i*2  ; j++)
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