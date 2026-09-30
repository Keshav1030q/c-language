// Quick Quiz: Write a program to store the details of 3 employees
// from user defined data. Use the structure declared above

#include<stdio.h>
#include<string.h>

struct employee { 
    int code; // This declares a new user defined data type! 
    float salary; 
    char name[10]; 
}; // semicolon is important

int main(){
    struct employee e1, e2, e3;
    
    e1.code = 1234;
    e1.salary = 51.00;
    strcpy(e1.name, "keshav");
    
    e2.code = 5678;
    e2.salary = 52.53;
    strcpy(e2.name, "yugam");
    
    e3.code = 91011;
    e3.salary = 64.69;
    strcpy(e3.name, "amit");

    printf("%s %d %f \n", e1.name, e1.code, e1.salary);
    printf("%s %d %f \n", e2.name, e2.code, e2.salary);
    printf("%s %d %f \n", e3.name, e3.code, e3.salary);
    return 0;
}