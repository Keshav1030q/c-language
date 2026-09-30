// 4. Write a function slice() to slice a string. 
// It should change the original string such that it is now the sliced string.
// Take ‘m’ and ‘n’ as the start and ending position for slice.

#include<stdio.h>

char* slice(char a[], int m, int n);
char* slice(char a[], int m, int n){
    char* ptr1 = &a[m];
    char* ptr2 = &a[n];

    a = ptr1;
    a[n] = '\0';
    return a;
}

int main(){
    char st[] = "keshav gupta";
    printf("%s \n", slice(st, 1, 7));
    return 0;
}