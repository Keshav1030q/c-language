// Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include<stdio.h>

int main(){
    int a[10];
    int n;

    for (int i = 1; i < 11; i++)
    {
        n = 5*i;
        a[i] = n;
    }

    for (int i = 1; i < 11; i++)
    {
        printf("%d ", a[i]);  
    }
    
    
    return 0;
}