// Count Consonats of Given String

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int countVowels(char ch);
// here check the Vovels or not
int countVowels(char ch){
    if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        return 0;
    }
    else{
        return 1;
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

    printf("Number Consonats %d\n",count);    
}

// output:
// Enter the String :
// aman Saini
// Number Consonats 5