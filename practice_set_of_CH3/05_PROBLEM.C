// 5. Write a program to determine whether a character entered by the user is
// lowercase or not.

// https://www.cs.cmu.edu/~pattis/15-1xx/common/handouts/ascii.html

#include<stdio.h>

int main(){
    char ch;
    printf("Enter your character\n");
    scanf("%c", &ch);

    printf("The character is %c \n", ch);
    printf("The value of character is %d\n", ch);
    // 92 - 122

    if(ch>=92  && ch<=122){
        printf("The character you entered is a lower case letter");
    }
    else{
        printf("The character you entered is a not lower case letter");
    }
    
    return 0;
}