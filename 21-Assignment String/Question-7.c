
// hERE lower case for code which of upper albhabet conver into lower alphabet

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void upperCase(char str[]);
void upperCase(char str[]){
    for(int i = 0;str[i];i++)
        if (65<=str[i] && str[i]<=90)
            str[i]+=32; 
}
void main(){
    // system("cls");
    char str[100]={};

    puts("Enter the Name In String ");
    fgets(str,100,stdin);

    str[strlen(str)-1]='\0';

    upperCase(str);

    printf(str);    
}

// Output :
// Enter the Name In String 
// Aman
// aman