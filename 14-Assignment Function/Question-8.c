#include<stdio.h>
int Arrangnment(int,int);
int main()
{
    int n,r;
    printf("Enter the number of 'n' is number of items and than 'r' is select of at time make for Arrangnment = ");
    scanf("%d %d",&n,&r);
    printf("Arrangnment of items is %d",Arrangnment(n,r));
    return 0;
}
int Arrangnment(int x,int y)
{
    int n=1,i,sub,diff=1;
    sub=x-y;
    while(x)
    {
        n=n*x;
        x--;
    }
    while(sub)
    {
        diff=diff*sub;
        sub--;
    }
    return n/diff;  
}