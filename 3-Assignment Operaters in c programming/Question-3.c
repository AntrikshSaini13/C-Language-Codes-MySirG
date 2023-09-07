// WAP with one char type variable. Assign 'A' in the variable. Now change the value of variable form 'A' to 'B' using increment operater;
#include<stdio.h>
int main()
{
    char char1;
    printf("Enter the any alphabet = ");
    scanf("%c",&char1);
    char1++;
    printf("%c",char1);
}