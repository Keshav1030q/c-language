#include<stdio.h>
#include<math.h>

int factorial(int n);

int factorial(int n){
    if(n == 1 || n ==0){
        return 1;
    }
    return factorial(n-1)*n;
    
}

int main(){
    int b;
    printf("Enter whose factorial you want\n");
    scanf("%d", &b);
    printf("The value of factorial is %d", factorial(b));
    return 0;
}