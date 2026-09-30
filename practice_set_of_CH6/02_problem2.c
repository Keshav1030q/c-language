#include<stdio.h>

 int fun(int* a);
 
 int fun(int* a){

     printf("The address of i is %u\n", a);
    
     return 0;
 }

int main(){

    int i = 78;
    int* j = &i;

    printf("The address of i is %u\n", j);
    
    fun(j);
    return 0;
}