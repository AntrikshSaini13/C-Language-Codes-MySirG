// user define String

#include<stdio.h>
void main(){
    char str[1];

    puts("Enter the name of person");
    gets(str);

    printf("%s",str);

    for(int i; str[i];i++){
        printf("%c",str[i]);
    }
}

// output
// Enter the name of person
// aman saini
// aman saini