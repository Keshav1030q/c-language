#include<stdio.h>

int main(){
    int marks[5];

    printf("Enter marks of 5 students \n");

    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);
    // printf("%d %d %d %d %d\n", marks[0], marks[1], marks[2], marks[3], marks[4]);
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student(%d) is %d\n", i, marks[i]);
    }
    
    
    return 0;
}