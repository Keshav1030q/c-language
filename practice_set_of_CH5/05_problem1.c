#include<stdio.h>

int term(int a);


int term(int a){
    if(a == 1 || a  == 2){
        return a-1;
    }
    return term(a-1) + term(a-2);
}

int main(){
    int n;
    printf("Enter term\n");
    scanf("%d", &n);
    printf("%d",term(n));   
    return 0;
}