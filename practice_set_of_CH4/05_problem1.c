#include<stdio.h>

int main(){
    int n;
    int i = 1;
    printf("Enter value\n");
    scanf("%d", &n);

    do{
        printf("Sum is %d\n", (i*(i  + 1))/2);
        i++;
    } while (i <= n);
    return 0;
}