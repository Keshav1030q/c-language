#include<stdio.h>

float avg(float a, float b, float c);

float avg(float a, float b, float c){
    printf("The avg is %.2f\n", (a + b + c)/3);
}


int main(){
    float a, b, c;

    printf("Enter the three number\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    avg(a, b, c);

    return 0;
}