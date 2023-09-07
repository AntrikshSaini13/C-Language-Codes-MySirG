#include<stdio.h>
int main()
{
    int DD,MM,YYYY;
    printf("Enter the date (DD/MM/YYYYY) :");
    scanf("%d/%d/%d",&DD,&MM,&YYYY);
    printf("Day - %d, Month - %d, Year - %d\n",DD,MM,YYYY);
    printf("%d/%d/%d",DD,MM,YYYY);
    return 0;
}