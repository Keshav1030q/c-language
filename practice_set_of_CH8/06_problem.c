// 7.
// Write a program to decrypt the string encrypted using encrypt function in problem 6.

#include<stdio.h>

void encrypt(char str[], int length);
void encrypt(char str[], int length){
    for (int i = 0; i < length; i++)
    {
        str[i] = str[i] + 1;
    }
}
void dencrypt(char str[], int length);
void dencrypt(char str[], int length){
     for (int i = 0; i < length; i++)
    {
        str[i] = str[i] - 1;
    }
}

int main(){
    char str[] = "keshav123456";
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    encrypt(str, length);
    printf("encrypted password %s \n", str);
    dencrypt(str, length);
    printf("dencrypted password %s \n", str);
    
    return 0;
}