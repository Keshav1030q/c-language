// 4.
// Repeat problem 3 for a general input provided by the user using scanf

#include<stdio.h>

int main(){
    int a[10];
    int n, c;

    printf("Enter a numbeer \n");
    scanf("%d", &c);

    for (int i = 1; i < 11; i++)
    {
        n = c*i;
        a[i] = n;
    }

    for (int i = 1; i < 11; i++)
    {
        printf("%d ", a[i]);  
    }
    return 0;
}