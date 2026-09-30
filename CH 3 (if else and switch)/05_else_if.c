#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if(age>=60){
        printf("You can drive but you are senior citizen\n");
    }
    else if(age>=40){
        printf("You can drive but you are elder\n");
    }
    else if(age>=18){
        printf("You can drive\n");
    }
    else{
        printf("You cannot drive\n");
    }
    
    return 0;
}