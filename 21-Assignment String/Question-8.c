
// reverse the String

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    system("cls");

    char str[100] = {};
    char str2[100]={};
    int count=0,i,j,len;
    
    puts("Enter the Santance of String");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++);
    for(j=0;i>=0;j++){
        str2[j] = str[--i];
    }  
    str2[j]='\0';
    printf("Reverse %s",str2);

    // Output :

    // Enter the Santance of String
    // Aman
    // Reverse namA
    
    
}