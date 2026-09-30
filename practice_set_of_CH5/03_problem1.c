#include<stdio.h>

float weight(float m);

float weight(float m){
    printf("The force of attraction act on the body of mass %.2f is %.2f\n", m, (981*m)/100); 
}

int main(){
    float m;
    printf("Enter mass of body\n");
    scanf("%f", &m);

    weight(m);

    return 0;
}