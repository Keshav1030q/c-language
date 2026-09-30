#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointingto i
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    printf("The value at address j is %d", *(&i));

    return 0;
}

// in place of %p we can use %u