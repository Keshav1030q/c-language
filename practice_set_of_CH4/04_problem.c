#include<stdio.h>

int main(){
    int n;
    printf("Enter value\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("sum is %d\n", (i*(i + 1))/2);
    }
    
    return 0;
}