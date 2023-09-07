// Write a program to draw  the shape  following pattern
// ABCDE
//  ABCD
//   ABC
//    AB
//     A

#include<stdio.h>
int main()
{
    int i, j;
    char k;
    // printf("Enter the 5ber = ");
    // scanf("%d",&num);
    for (i=1 ; i<=5 ; i++)
    {
        k=64;
        for (j=1 ; j<=5 ; j++)
        {
            if(j>=i)
            {
                printf("%c",k+j);
                // k++;
            }   
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}