#include <stdio.h>
int square(int num1, int num2);
int square(int num1, int num2){
    int mul=1;
    for(int i = 0; i<num2;i++){
        mul*=num1;
    }
    return mul;
}
void main(){
    int num1, num2;
    printf("What do you want square, cude, etc (2,3,...)\n");
    scanf("%d",&num2);
    printf("Which Number of you wnat enter here\n");
    scanf("%d",&num1);
    printf("Square is : %d",square(num1, num2));
}