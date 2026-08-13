// 6. Write a program to find greatest of four numbers entered by the user.


#include<stdio.h>

int main(){
    int a=48, b=63, c=45, d=9;
    // printf("Enter four different integers\n");
    // scanf("%d", &a);
    // scanf("%d", &b);
    // scanf("%d", &c);
    // scanf("%d", &d);

    if(a>b && a>c && a>d){
        printf("The greatest value is %d", a);
    }
    else if(b>a && b>c && b>d){
        printf("The greatest value is %d", b);
    }
    else if(c>b && c>a && c>d){
        printf("The greatest value is %d", c);
    }
    else{
        printf("The greatest value is %d", d);
    }
    return 0;
}