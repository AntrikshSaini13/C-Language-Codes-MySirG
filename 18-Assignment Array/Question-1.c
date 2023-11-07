#include<stdio.h>
void sum_array(int);
int main(){
    int size_of_array;
    printf("Who many value instert in array between 1-100 \n");
    scanf("%d",&size_of_array);

    // call here sum function
    sum_array(size_of_array);
    return 0;
}
// sum function of array
void sum_array(int size_of_array){
    int a[100], index_of_array,sum_of_array_elements=0;
    printf("Enter the array elements\n ");
    for(index_of_array = 0; index_of_array < size_of_array; index_of_array++){
        scanf("%d",&a[index_of_array]);
    }
    for(index_of_array = 0; index_of_array < size_of_array; index_of_array++){
        printf("Array[%d] = %d\n",index_of_array,a[index_of_array]);
        sum_of_array_elements+=a[index_of_array];
    }

    // for(index_of_array = 0; index_of_array < size_of_array;index_of_array++){
    //     sum_of_array_elements+=a[index_of_array];
    // }
    printf("sum of array is %d",sum_of_array_elements);
}