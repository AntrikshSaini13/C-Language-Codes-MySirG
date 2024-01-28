//here we are finding the lenth of String by using the fgets() function

# include <stdio.h>
void main(){
    int i ;
    char str[100];
    puts("Enter the vLUE OF string");
    fgets(str,100,stdin);

    for(i=0;str[i];i++);

    printf("The length of String is :- %d",i-1);
}