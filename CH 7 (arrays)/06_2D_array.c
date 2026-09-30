#include<stdio.h>

int main(){
    int a = 3, b = 2;

    int arr[3][2] ={{1,2}, {2,3}, {3,4}};

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        
    }
    
    return 0;
}