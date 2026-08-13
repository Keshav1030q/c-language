#include<stdio.h>

int main(){
    int celsius;
    printf("Enter temperature in celsius\n" );
    scanf("%d", &celsius);

    printf("The temperature in Fahrenheit is %f", 1.8*celsius+32);
    return 0;
}