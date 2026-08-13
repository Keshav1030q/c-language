#include<stdio.h>

int main(){
    int n; int i=1;
    printf("Enter value\n");
    scanf("%d", &n);

    while(i<=n){
        printf("sum is %d\n", (i*(i + 1))/2);
        i++;
    }
    return 0;
}