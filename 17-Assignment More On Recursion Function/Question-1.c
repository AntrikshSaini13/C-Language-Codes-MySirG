# include<stdio.h>
int main(){
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
    num =factorial(num);
    printf("Factorial is %d",num);
    return 0;
}

int factorial(int n);
int factorial(int n){
    int multiple;
    if(n == 0){

        // step-3 Base
        return 0;
    }
    //Step-2  here is recursion function class itself
    multiple = n+factorial(n-1);
    printf("%d\t%d\n",n,multiple);
    return(multiple);
}