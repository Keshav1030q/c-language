#include<stdio.h>

int main(){

    float length, breadth;
    printf("Enter length\n");
    scanf("%f", &length);

    printf("Enter breadth\n");
    scanf("%f", &breadth);

    printf(" The area of the rectangle is %f", length*breadth);
    return 0;
}