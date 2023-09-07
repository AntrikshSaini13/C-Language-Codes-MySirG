// WAP to take time as an input in below given format and convert thw time format and display the result as given below.
// user input date format - "HH:MM"
// output Format:- "HH hour and MM minutes"

#include<stdio.h>
int main()
{
    int HH,MM;
    printf("Enter the time (HH:MM) \n");
    scanf("%d:%d",&HH,&MM);
    printf("%d hours and %d minutes\n",HH,MM);
    return 0;
}