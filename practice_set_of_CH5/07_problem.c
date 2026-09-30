#include<stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++);
    // answer is 6 6 4
    // because evaluation is from right to left
    // agar complier evaluate from left to right then answer is 4 5 5
    return 0;
}