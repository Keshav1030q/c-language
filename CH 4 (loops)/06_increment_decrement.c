#include<stdio.h>

int main(){

    int i = 5;
    printf("The value of i is %d\n", i);
    i = i + 5;
    printf("The value of i is %d\n", i);
    i++; 
    printf("The value of i is %d\n", i);
    ++i;
    printf("The value of i is %d\n", i);
    i--;
    printf("The value of i is %d\n", i);
    --i;
    printf("The value of i is %d\n", i);


    // i++ print first than increments (post increment opeerator)
    // ++i increament first than print (pre increment opeerator)
    // i-- print first than decrements (post decrement opeerator)
    // --i decreament first than print (pre decrement opeerator)

    i +=2; // same as i = i + 2
    printf("The value of i is %d\n", i);

    return 0;
}