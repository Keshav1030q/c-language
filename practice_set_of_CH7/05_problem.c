// 6.
// Write a program containing functions which counts the number of positive integers in an array.

#include<stdio.h>

void count(int arr[], int n);
void count(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            printf("%d ", arr[i]);
        }
        else{
            printf("* ");
        }
    }
    
}

void main(){

    int n;
    printf("Enter no. of elements in array \n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter n integers \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");

    count(arr, n);
}