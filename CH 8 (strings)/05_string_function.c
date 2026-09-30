#include<stdio.h>
#include<string.h>

int main(){
    char st[] = "keshav";
    char s1[56] = "keshav";
    char s2[56] = "bhai";
    printf("%d \n", strlen(st)); //strlen counts characters excluding null character
 
    char target[30]; 
    strcpy (target,st); //target now contains "harry"
    printf("%s %s\n", st, target);

    strcat(s1,s2); // s1 now contains "helloharry" <no space in between>
    printf("%s %s\n", s1, s2);

    int a = strcmp("far", "joke"); // Negative value 
    int b = strcmp("joke", "far"); // Positive value
    printf("%d %d", a, b); //distonary mai pehele vo aata hai jo ascii table mai aage ho
    return 0;
}