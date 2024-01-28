// count Vowels given String 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int countVowels(char ch);
int countVowels(char ch){
    if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        return 1;
    }
    else{
        return 0;
    }
}
void main(){
    system("cls");
    char str[100]={};
    int count=0;

    puts("Enter the String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';

    for(int i = 0; str[i]; i++)
        if(countVowels(str[i]))
            count++;  

    printf("\nNumber Vowels %d\n",count);    
}