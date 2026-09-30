// 2.
// Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

#include<stdio.h>

int main(){
    char s[6];
    
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%c", &s[i]);
    //     fflush(stdin);
    // }
    // s[5] = '\0';
    
    scanf("%s", &s); //same as above
    printf("%s\n", s);

    // gets(s);
    // puts(s);
    return 0;
}