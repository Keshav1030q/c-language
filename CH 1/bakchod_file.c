#include<stdio.h>
#include <string.h>

int main(){
    
    char string[50] = "";
    int age = 0;

    printf("ENTER A NAME:- ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string)-1] = '\0';

    printf("ENTER YOUR AGE:- ");
    scanf("%d", &age);

    printf("NAME:- %s \n", string);
    printf("AGE:- %d", age);
    return 0;
}