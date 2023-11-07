#include<stdio.h>
void main(){
    int size_of_array;
    int a[100], index_of_array;
    printf("Who many value instert in array between 1-100 \n");
    scanf("%d",&size_of_array);
    printf("Enter the array elements\n ");
    for(index_of_array = 0; index_of_array <5; index_of_array++){
        scanf("%d",&a[index_of_array]);
    }
    for(index_of_array = 0; index_of_array <= size_of_array; index_of_array++){
        printf("Array[ ]\b%d = %d",index_of_array,a[index_of_array]);
    }
}