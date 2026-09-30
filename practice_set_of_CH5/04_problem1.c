#include<stdio.h>

int sum(int a);

int sum(int a){
    if(a>=0){
        return (a + sum(a-1));
    }
    else{
        return 0;
    }

}

int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    // sum(a);
    printf("The sum is %d", sum(a));
    return 0;
}