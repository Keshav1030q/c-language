#include<stdio.h>

int main(){
    int* t;
    printf("Enter a variable\n");
    scanf("%p", &t);

    printf("the address is %p\n", *(&t));
    printf("the value is %d\n", &t);
    return 0;
}