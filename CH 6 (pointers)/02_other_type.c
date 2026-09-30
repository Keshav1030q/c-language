#include<stdio.h>

int main(){
    char i = 'A';
    char* j = &i; // j is a pointer pointingto i
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    printf("The value at address j is %d", *(&i));
    return 0;
}

// same for float also