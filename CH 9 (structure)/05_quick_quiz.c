// Quick Quiz: Complete this show function to display the content of employee.

#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

void print (struct employee e);
void print (struct employee e){
    printf("%d %f %s", e.code, e.salary, e.name);
}

int main(){
    struct employee e;
    e.code = 54;
    e.salary = 74.4;
    strcpy(e.name,"Keshav");
    print(e); 
    return 0;
}