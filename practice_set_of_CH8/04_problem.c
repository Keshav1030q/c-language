// 5.
// Write your own version of strcpy function from <string.h>

#include<stdio.h>

int mystrlen(char a[]);
int mystrlen(char a[]){
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return i;
}

void mystrcpy(char a[], char b[]);
void mystrcpy(char a[], char b[]){
    for (int i = 0; i < mystrlen(b); i++)
    {
        a[i] = b[i];
    }
    a[mystrlen(b)] = '\0';
    
    return a;
}

int main(){
    char str1[] = "keshav";
    char str2[] = "gupta";
    mystrcpy(str1, str2);
    printf("%s %s", str1, str2 );
    return 0;
}