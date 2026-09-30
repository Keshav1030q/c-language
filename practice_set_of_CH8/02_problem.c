// 3.
// Write your own version of strlen function from <string.h>

#include<stdio.h>

int strlen(char a[]);
int strlen(char a[]){
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return i;
}

int main(){
    char st[] = "keshav";
    printf("%d \n", strlen(st));
    return 0;
}