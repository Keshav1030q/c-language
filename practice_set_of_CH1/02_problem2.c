#include<stdio.h>

int main(){
    int radius;
    printf("Enter radius\n");
    scanf("%d", &radius);
    
    printf("The area of circle of radius %d is %f", radius, 3.14*radius*radius);
    return 0;
}