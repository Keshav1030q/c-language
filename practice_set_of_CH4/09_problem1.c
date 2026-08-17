// 10.
// Write a program to check whether a given number is prime or not using loops.

#include<stdio.h>

int main(){
    int n;
    printf("Enter value :\t");
    scanf("%d", &n);

    if((n % 6 == 5 || n % 6 == 1) && n % 5 != 0){
        printf("The enter number %d is a prime number", n);
    }
    else{
        printf("The enter number %d is not a prime number", n);
    }


    return 0;
}