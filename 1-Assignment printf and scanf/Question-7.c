#include <stdio.h>
int sum(int num1, int num2);
int sum(int num1, int num2){
        return num1+num2;
    }
void main(){
    int num1, num2;
    printf("Enter the two Number\n");
    scanf("%d %d",&num1, &num2);
    printf("The Sum is : %d",sum(num1, num2));
}