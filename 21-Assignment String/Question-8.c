// here we are cheak occurance of character

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
char occuranceCheak(char str[],char ch); 
char occuranceCheak(char str[],char ch){

    printf("Here we are checking occurance of word\n");

    int count = 0;
    for(int i = 0; str[i];i++){
        
        printf("%c == %c\n",str[i],ch);
        if(str[i]==ch){
            count++;
        }
    }
    return count;
} 
void main(){
    system("cls");

    char str[100]={},ch;

    puts("Enter the String ");
    fgets(str,100,stdin);
    str[strlen(str)-1] = '\0';

    puts("Enter any character for check occurance String  :");
    scanf("%c",&ch);

    printf("\n%c is repeat only %d",ch,occuranceCheak(str,ch));

}