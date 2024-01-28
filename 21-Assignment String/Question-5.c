
// here we are using the fgets() function

#include<stdio.h>
void main(){
    char str[100];
    puts("Enter the value of String");
    fgets(str,100,stdin);

    puts(str);

    for(int i = 0;str[i];i++){
        printf("%c",str[i]);
    }

}


// output aman
// Enter the name of person
// aman Saini heloo
// aman Saini heloo