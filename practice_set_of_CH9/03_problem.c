// 4.
// Write a program to illustrate the use of arrow operator → in C.

#include<stdio.h>
#include<string.h>

typedef struct clash
{
    int a;
    int b;
} coc;


int main(){
    coc v = {1,2};
    coc* ptr1 = &v;
    printf("%d %d \n", ptr1->a, ptr1->b);
    return 0;
}