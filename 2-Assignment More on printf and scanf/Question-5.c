#include <stdio.h>
int calculate(float costPrice, float sellingPrice);
int calculate(float costPrice, float sellingPrice){
    return (sellingPrice-costPrice)*25;
}
void main(){
    float costPrice,sellingPrice;
    printf("Enter the of Cost Price of Banana and Selling Price of banana");
    scanf("%f %f",&costPrice,&sellingPrice);
    float profitOrLose = calculate(costPrice, sellingPrice);
    if (0<=profitOrLose)
        printf("Profit is :%.2f ",profitOrLose);
    else
        printf("Lose is :%.2f ",-1*profitOrLose);
    
}