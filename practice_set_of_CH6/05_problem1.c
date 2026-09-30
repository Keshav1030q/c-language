#include<stdio.h>

int sum(int* a, int* b);
int sum(int* a, int* b){
    return (*a + *b);
}
int avg(int* a, int* b);
int avg(int* a, int* b){
    return ((*a + *b )/2);
}

int main(){
    int a; int b;
    printf("Enter any two values \n");
    scanf("%d", &a);
    scanf("%d", &b);

    int* x = &a; int* y = &b;

    printf("The sum of this two numbers is %d\n", sum(x, y));
    printf("The avg of this two numbers is %.2f\n", avg(x, y));

    return 0;
}