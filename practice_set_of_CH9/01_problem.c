#include<stdio.h>
#include<string.h>

typedef struct vector
{
    int i; 
    int j; 
} vector ;

int main(){
    vector v;
    v.i = 3;
    v.j = 4;
    printf("(%d i, %d j)", v.i, v.j);
    return 0;
}