// 5.
// Write a program containing a function which reverses the array passed to it.

#include<stdio.h>

void printarray(int arr[]);
void printarray(int arr[]){
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}

void reverse(int arr[]);
void reverse(int arr[]){
    int temp;

    for (int i = 0; i < 3; i++)
    {
        temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
    }
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};

    printarray(arr);
    reverse(arr);
    printarray(arr);
    return 0;
}