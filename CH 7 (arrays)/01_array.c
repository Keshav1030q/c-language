#include<stdio.h>

int main(){
    int marks[90];

    marks[0] = 45;
    marks[1] = 90;
    // we can go up to marks[89] from marks[0]
    printf("Marks 0 and marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}