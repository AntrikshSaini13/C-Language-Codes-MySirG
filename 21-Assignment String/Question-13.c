// String Convert Upper Case
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int upperCase(char ch);
int upperCase(char ch){
    if(92<=ch && ch<=122)
        ch-=32;//string implicitly pointer
}
void main(){
    system("cls");
    char str[100]={};

    puts("Enter the Name in String");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';

    for(int i=0;str[i];i++)
        str[i]=upperCase(str[i]);
     
    printf(str);
}

// Output :
// Enter the Name in String
// aman Saini
// AMAN SAINI