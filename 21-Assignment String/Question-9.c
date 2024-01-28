// here we are cheak occurance of word

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
char occuranceCheak(char str1[],char str2[]); 
char occuranceCheak(char str1[],char str2[]){

    printf("Here we are checking occurance of word\n");

    int count = 0;
    for(int i=0,j=0; str1[i];i++,j++){
        if(str1[i]==str2[j]&&str1[i]!=' '){
            printf("\n%c  == %c\n",str1[i],str2[j]);
        }
        else{
            j=0;
            // count++;
        }
    }
    return count;
} 
void main(){
    system("cls");

    char str1[10][100]={}, str2[100]={};

    puts("Enter the String ");
    fgets(str1,100,stdin);
    str1[strlen(str1)-1] = '\0';
    
    puts("Enter the String ");
    fgets(str2,100,stdin);
    str1[strlen(str2)-1] = '\0';

    printf("is repeat only %d",occuranceCheak(str1,str2));

}