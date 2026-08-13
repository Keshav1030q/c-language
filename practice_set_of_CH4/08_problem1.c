// 8. Write a program to calculate the factorial of a given number using a for loop.
// 9. Repeat 8 using while loop.

#include<stdio.h>

int main(){
    int n; int product = 1;
    int i = 1;
    printf("Enter value\t");
    scanf("%d", &n);

    do {
        product *= i;
        i++;
    } while (i <= n);

    printf("The factorial of %d is %d", n, product);
    return 0;
}