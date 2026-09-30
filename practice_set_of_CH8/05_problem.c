// 6.
// Write a program to encrypt a string by adding 1 to the ascii value of its characters.

#include<stdio.h>

int main(){
    char str[] = "keshav123456";
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    
    for (int i = 0; i < length; i++)
    {
        str[i] = str[i] + 1;
    }
     
    printf("%s \n", str);
    return 0;
}