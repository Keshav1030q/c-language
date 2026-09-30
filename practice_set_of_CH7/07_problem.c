// 8.
// Repeat problem 7 for a custom input given by the user.

#include<stdio.h>

int main(){
    int arr[3][10];
    int a[3];

    printf("Any three number\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < 11; i++)
    {
        arr[1][i] = a[0]*i;
        printf("%d ", arr[1][i]);
    }
    printf(" \n");
    
    for (int i = 1; i < 11; i++)
    {
        arr[2][i] = a[1]*i;
        printf("%d ", arr[2][i]);
    }
    printf(" \n");
    
    for (int i = 1; i < 11; i++)
    {
        arr[3][i] = a[2]*i;
        printf("%d ", arr[3][i]);
    }
    printf(" \n");
    return 0;
}