#include<stdio.h>
#include<string.h>

typedef struct employee 
{
    int code;
    float salary;
    char name[10];
} emp; // semicolon is important

int main(){
    // typedef int keshav;
    // keshav a = 55;
    // printf("%d \n", a);

    emp e1;
    emp* ptr1 = &e1;
    e1.code = 4522;
    e1.salary = 54.40;
    strcpy(e1.name, "Keshav");

    printf("%d %f %s \n", e1.code, e1.salary, e1.name);
    return 0;
}