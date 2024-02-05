//  Find LAst Character

#include<stdio.h>
#include<string.h>
int lastChar(char str[]);

int lastChar(char str[]){
    return strlen(str)-1;
}

void main(){

    char str[100];
    puts("Enter the value of string ");
    fgets(str,100,stdin);

    str[strlen(str)-1]='\0';

    printf("Last char : %c",str[lastChar(str)]);
}

// Enter the value of string 
// Aman
// Last char : n