// 8.
// Write a program to count the occurrence of a given character in a string

#include<stdio.h>

int main(){
    char str[] = "keeessss";
    int length = 0;
    int occurence = 0;

    // printf("Enter a string \n");
    // scanf("%s", &str);
    // printf("Enter a letter \n");
    // scanf("%s", &ch);

    while (str[length] != '\0')
    {
        length++;
    }
    

    for (int i = 0; i < length; i++)
    {
        if (str[i] == 's')
        {
            occurence++;
        }
    }
    
    printf("The word 's' in string %s is occured %d times \n", str, occurence);

    return 0;
}