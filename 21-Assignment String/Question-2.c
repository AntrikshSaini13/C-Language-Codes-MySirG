// find the length here

# include <stdio.h>
void main(){
    int i ;
    char str[100];
    puts("Enter the value of string");
    fgets(str,100,stdin);

    for(i=0;str[i];i++);

    printf("The length of String is :- %d",i-1);
}