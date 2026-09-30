#include<stdio.h>
#include<math.h>

int factorial(int a);

int factorial(int a){
    
    int fact = 1;
    
    for (int i = a; i > 0 ; i--)
    {
        fact *= i;
    }
    
    printf("The factorial is %d\n", fact);
    return 0;
}

int main(){
    int b;
    printf("Enter whose factorial you want\n");
    scanf("%d", &b);

    factorial(b);
    return 0;
}