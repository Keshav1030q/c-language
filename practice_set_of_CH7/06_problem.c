// 7.
// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.

#include<stdio.h>

int main(){
    int arr[3][10];
    for (int i = 1; i < 11; i++)
    {
        arr[1][i] = 2*i;
        printf("%d ", arr[1][i]);
    }
    printf(" \n");
    
    for (int i = 1; i < 11; i++)
    {
        arr[2][i] = 7*i;
        printf("%d ", arr[2][i]);
    }
    printf(" \n");
    
    for (int i = 1; i < 11; i++)
    {
        arr[3][i] = 9*i;
        printf("%d ", arr[3][i]);
    }
    printf(" \n");
    
    return 0;
}