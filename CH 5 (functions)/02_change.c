#include<stdio.h>

int change(int a);

int change(int a){
    a = 77;
    printf("%d\n", a);
    return 0;
}

int main(){
    int b =22;
    change(b);
    printf("b is %d\n", b);
    change(1);
    return 0;
}