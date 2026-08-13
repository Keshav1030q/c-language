#include<stdio.h>

int main(){

    int P; int M; int C;
    printf("Enter marks of Physics, Chemistry, Maths respectively\n");
    scanf("%d", &P);
    scanf("%d", &M);
    scanf("%d", &C);

    if(P>=33 && M>=33 && C>=33, (P + M + C)/3<40){
        printf("You get 33 percent in each subject but your total percentage is less than 40 so you are failed\n");
    }
    else if((P + M + C)/3>=40){
        printf("Congratulations! You are passed with a total percentage of %d\n", (P + M + C)/3);
    }
    else{
        printf("Sorry but you are failed\n");
    }


    
    return 0;
}