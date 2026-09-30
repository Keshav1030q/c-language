#include<stdio.h>

int main(){
    int marks[5];

    printf("Enter marks of 5 students \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student(%d) is %d and address is %u\n", (i+1), marks[i], &marks[i]);
    }
    
    
    return 0;
}