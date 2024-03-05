#include<stdio.h>
float volumeOfCuboid(float length, float breath, float height);
float volumeOfCuboid(float length, float breath, float height){
    return length*breath*height;
}
void main(){
    float length,breath,height;
    printf("Enter the length breath height for Find the \'Volume of Cuboid\'\n");
    scanf("%d %d %d",&length, &breath, &height);
    printf("Volume of Cubloid is : %.2f",volumeOfCuboid(length, breath, height));
}