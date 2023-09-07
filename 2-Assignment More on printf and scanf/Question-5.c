// Write a program to ask user an=bout the cost price and selling price per banana per dorzen.calcuate  the profit and lose earned upon selling 25 bnanas.
#include<stdio.h>
int main()
{
    float cost_price, selling_price, profit, lose, cost_price_per_banana, selling_price_per_banana;
    printf("Enter the amount of banana is purchased price : ");
    scanf("%f",&cost_price);
    printf("Enter the amount of banana is sold price : ");
    scanf("%f",&selling_price);
    // find price of per bananas
    cost_price_per_banana = cost_price/12;
    selling_price_per_banana = selling_price/12;
    printf("Purchased price per Banana %.2f\n",cost_price_per_banana);
    printf("sold price per Banana %.2f\n",selling_price_per_banana);
    // find the profit here
    profit = 25*(selling_price_per_banana - cost_price_per_banana);
    // find the lose here
    lose = 25*(cost_price_per_banana - selling_price_per_banana);
    printf("profit is %.2f and lose is %.2f",profit,lose);
    return 0;
}