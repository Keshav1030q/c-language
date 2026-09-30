// 9.
// Write a program to check whether a given character is present in a string or not.

#include<stdio.h>

int main(){
    char str[] = "keshavgupta";
    int length = 0;
    int occured = 0;
    
    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'l')
        {
            occured++;
        }
    }

    if (occured > 0)
    {
        printf("The word 's' qccured in %s total %d times \n", str, occured);
    }
    else
    {
        printf("Not occured in %s \n", str);
    }

    return 0;
}