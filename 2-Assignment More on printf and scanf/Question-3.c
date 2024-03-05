#include <stdio.h>
float simpleIntrest(float amount, float time, float intrest);
float simpleIntrest(float amount, float time, float intrest){
    return (amount*time*7)/100;
}
void main(){
    float amount, time, intrest =7;
    printf("Enter the /'amount/' and /'time/' for finding the simple interst\n");
    scanf("%f %f",&amount,&time);
    printf("Total amount is %.2f\nTime is %.2f\nYearly intrest is %.2f PBersent%\nThe Simple Intrest of year is : %.2f \n",amount,time,intrest,simpleIntrest(amount,time,intrest));
    printf("With Intrest Ammount is : %.2f Pay of Bank",simpleIntrest(amount, time, intrest)+amount);
    printf("");
}