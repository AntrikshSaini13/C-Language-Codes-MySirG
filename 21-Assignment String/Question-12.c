// Count Space Of User Enter String 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int countSpace(char ch);
int countSpace(char ch){
    if(ch==' ')
        return 1;
    else
        return 0;
}

void main(){
    system("cls");

    char str[100] = {};
    int count=0;
    
    puts("Enter the Santance of String");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';

    for(int i = 0;str[i];i++)        
        if(countSpace(str[i]))
            count++;

    printf("Number of Space in Santance is %d",count);
}