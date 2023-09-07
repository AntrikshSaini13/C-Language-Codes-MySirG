#include<stdio.h>
int combinations(int,int);
int main()
{
    int result,n,r;
    printf("Enter the number of 'n' is number of items and than 'r' is select of at time make for combinations = ");
    scanf("%d %d",&n,&r);
    result = combinations(n,r);
    printf("Combination of items is %d",result);
    return 0;
}
int combinations(int x,int y)
{
    int n=1,r=1,i,result,sub,diff=1,mul;
    for(i=1;i<=x;i++)
    {
        n=n*i;
    }
    // printf("n = %d \n",n);
    for(i=1;i<=y;i++)
    {
        r*=i;
    }
    // printf("r = %d \n",r);

    sub = x-y;
    for(i=1;i<=sub;i++)
    {
        diff*=i;
    }
    // printf("diff = %d \n",diff);
    mul = r*diff;
    // printf("mul = %d \n",mul);

    result = n / mul;
    // printf("%d",result);

    return result;
}