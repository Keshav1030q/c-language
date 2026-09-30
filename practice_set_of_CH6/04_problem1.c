#include<stdio.h>

int function(int* a);
int function(int* a){
    printf("The value is %d \n", *(&a));
    return 0;
}

int main(){
    int i;
    printf("Enter any digit: \n");
    scanf("%d", &i);

    function(i);
    return 0;
}