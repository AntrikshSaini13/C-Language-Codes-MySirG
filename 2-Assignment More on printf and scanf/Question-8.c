// Write a program to input three characters from the user and display character with their corresponding ASCII codes
#include<stdio.h>
int main()
{
    char char1;
    char char2;
    char char3;
    printf("Enter the character 1: ");
    scanf("%c",&char1); 
    printf("Enter the character 2 : ");
    scanf(" %c",&char2); 
    printf("Enter the character 3 : ");
    scanf(" %c",&char3); 
    printf("%c = %d \n",char1,char1);
    printf("%c = %d \n",char2,char2);
    printf("%c = %d \n",char3,char3);
    return 0;
}