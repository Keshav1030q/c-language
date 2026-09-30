#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee facebook[100]; // an array of structures 
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 101;

    // more ways to initiallize structure
    struct employee harry = {100, 71.22, "harry"}; 
    struct employee shubh = {0} ; //All elements set to 0
    return 0;
}