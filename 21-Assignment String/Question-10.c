// Copy one String to another String

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    system("cls");
    char str[100]={}, str2[100]= {};

    puts("Enter the String ");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';

    for(int i=0,j=0;str[i];i++,j++){
        str2[j]=str[i];
    }

    printf("the str1 is : %s\n",str);
    printf("the str2 is : %s",str2);
}