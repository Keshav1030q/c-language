#include<stdio.h>
// #include <string.h>

int main(){
    
    // char string[50] = "";
    // int age = 0;

    // printf("ENTER A NAME:- ");
    // fgets(string, sizeof(string), stdin);
    // string[strlen(string)-1] = '\0';

    // printf("ENTER YOUR AGE:- ");
    // scanf("%d", &age);

    // printf("NAME:- %s \n", string);
    // printf("AGE:- %d", age);

    char c;
    // c = getchar();
    putchar(97);
    // putchar(c);

    while((c = getchar()) != EOF){
        putchar(c);
    }
    return 0;
}