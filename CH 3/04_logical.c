#include<stdio.h>

int main(){
    int a=11; int b=2;
    printf("The value of a AND b is %d\n", a&&b);
    printf("The value of a OR b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);
    printf("The value of not(b) is %d\n", !b);

    if(a&&b){
        printf("Both are true\n");
    }
    // is same as writing
    if(a){
        if(b){
            printf("Both are True\n");
        }
    }
    return 0;
}