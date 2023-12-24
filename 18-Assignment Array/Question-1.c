// Write a program to calculate the sum of number stored in an Array of size 10. Teke
// array vlaue from the user ?

#include <stdio.h>
#include <stdlib.h>
int sumOfArray(int array[],int size);
int sumOfArray(int array[],int size){
    int sum, i;
    for(i = 0, sum = 0; i < size;i++)
        sum += array[i];
        return sum;
}
void main(){
    int i,size,array[100];
    printf("Enter the size of array");
    scanf("%d",&size);
    puts("Enter the array elements");
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);
    printf("Sum of array ->  %d",sumOfArray(array,size));
    
}