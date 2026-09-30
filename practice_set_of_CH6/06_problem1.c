// 6.
// Write a program to print the value of a variable i by using “pointer to pointer” type of variable

#include<stdio.h>

int main(){
    int i;
    int* j = &i;
    int** k = &j;

    printf("Enter a value: \n");
    scanf("%d", &i);

    printf("the address of i is %p \n", &i);
    printf("the address of i is %p \n", j);
    printf("the address of i is %p \n", k);

    printf("the value is %d \n", *(&i));
    printf("the value is %d \n", *j);
    printf("the value is %d \n", **k);

    return 0;
}