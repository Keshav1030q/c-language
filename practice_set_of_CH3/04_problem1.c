// 4. Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.
// NOT COMPLETE YET
#include<stdio.h>

int main(){
    int y;

    printf("Please enter year to check wheather it is leap year or not\n");
    scanf("%d", &y);
    
    if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) ){
        printf("The year you entered is a leap year");
    }
    else{
        printf("The year you entered is not a leap year");
    }

    return 0;
}