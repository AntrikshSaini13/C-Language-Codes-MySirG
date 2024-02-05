//  The First Occurance of given character

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int findOccurance(char str1[],char ch);
int findOccurance(char str1[],char ch){
    for(int i = 0 ; str1[i]; i++){
        if(str1[i]==ch){
            return ++i;
        }
    }
    
}

void main(){
    system("Cls");
    char str1[100]={},ch;int i;

    puts("Enter the String");
    fgets(str1,100,stdin);
    str1[strlen(str1)-1]='\0';

    puts("Enter the Charcter for Find Occurance");
    scanf("%c",&ch);

    printf("The First Occurance of given character is = %d",findOccurance(str1,ch));
}