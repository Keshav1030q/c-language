// Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop

#include<stdio.h>

int main(){
    int n;
    printf("Enter value of n\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", i);
    }
    
    return 0;
}