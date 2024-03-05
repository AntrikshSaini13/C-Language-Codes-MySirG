#include<stdio.h>
void main(){
    int day, month, year;
    printf("Enter the Day, Month, Year input this format only (DD/MM/YYYY)\n");
    scanf("%d/%d/%d",&day,&month,&year);// Date format
    printf("Day - %d, Month - %d, Year - %d",day,month,year);
}