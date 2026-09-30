#include<stdio.h>

float temp(float c);

float temp(float c){
    printf("The Temperature in farheneit is %.2f\n", (9*c)/5 + 32);
}

int main(){
    float d;
    printf("Enter temperature in celcius\n");
    scanf("%f", &d);

    temp(d);

    return 0;
}