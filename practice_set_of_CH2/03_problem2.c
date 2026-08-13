#include<stdio.h>

int main(){
    int a;
    printf("Enter the value you want to check\n");
    scanf("%d", &a);
     
    printf("The value of a%97 is %d", a%97);
    return 0;
}