// Quick Quiz: Create a 2-d array by taking input from the user. 
//             Write a display function to print the content of this 2-d array on the screen.

#include<stdio.h>

int main(){
    int a; int b;
    // int i; int j;
    printf("Enter a and b respectively \n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("a is %d and b is %d\n", a, b);
    
    int arr[a][b];

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("Enter the value of arr[%d][%d] \n", i, j);
            scanf("%d", &arr[i][j]);
        }
        
    }

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        
    }
    return 0;
}