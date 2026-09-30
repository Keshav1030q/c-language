#include<stdio.h>
#include<string.h>

struct employee 
{
    int code;
    float salary;
    char name[10];
}; // semicolon is important

int main(){
    struct employee e1, e2;
    e1.code = 452;
    e1.salary = 54.40;
    strcpy(e1.name, "Keshav");

    printf("%d %f %s \n", e1.code, e1.salary, e1.name);
    return 0;
}