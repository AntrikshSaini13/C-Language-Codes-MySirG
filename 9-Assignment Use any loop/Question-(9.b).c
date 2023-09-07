// WAP to calculate LCM  of two numbers
// APPROACH 2
#include<stdio.h>
int main()
{
    int  a,b,l=1,f=0,i=2;
    printf("Enter the number = ");
    scanf("%d %d",&a,&b);

    // for(i=2,l=1;a>1||b>1;)
    while(a>1||b>1)
    {
        if(a%i==0)
        {
            a=a/i;
            f=1;
            printf("one\n");
        }
        if(b%i==0)
        {
            b=b/i;
            f=1;
            printf("two\n");
        }
        if(f == 1)
        {
            l=l*i;
            f=0;
            printf("three\n");
        }
        else
            i++;
    }
    printf("%d",l);
    return 0;
}