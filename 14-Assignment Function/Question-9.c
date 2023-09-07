#include<stdio.h>
int check_digit(int,int);
int main()
{
    int result,n,r;
    printf("Enter the number of 'n' is number of items and than 'r' is select of at time make for combinations = ");
    scanf("%d %d",&n,&r);
    result = check_digit(n,r);
    printf("Combination of items is %d",result);
    return 0;
}
int check_digit(int x,int y)
{
    int div;
    while(x)
    {
        div=x/10;

        switch(x)
        {
            case 65 ... 98:
            return "prime";
        }
    }
}