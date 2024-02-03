

// Count the Digit and alphatbet and number

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
    system("cls");
    char str[100];
    int digit = 0, smallAlpha = 0, captialAlpha = 0, specialCharacter = 0;
    puts("Enter The name Of in String");
    fgets(str,100,stdin);

    str[strlen(str)-1]='\0';

    for(int i = 0;str[i];i++){
        if(48 <= str[i] && str[i]<=57)digit++;       
        else if (str[i] <= 90 && 65 <= str[i] )captialAlpha++;
        else if (str[i] <= 122 && 97 <= str[i] ) smallAlpha++;
        else specialCharacter++;       
    }

    printf(" Number %d \n Small Letter %d \n Capital Letter %d \n Special Character %d",digit,smallAlpha,captialAlpha,specialCharacter);
}

// Output :
// Enter The name Of in String
// AntrikshSaini13@gmail.com[Aman] 
//  Number 2
//  Small Letter 22
//  Capital Letter 3
//  Special Character 4