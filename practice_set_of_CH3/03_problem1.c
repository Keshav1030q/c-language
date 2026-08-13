// 3. Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include<stdio.h>

int main(){
    int income;
    printf("Enter your income\n");
    scanf("%d", &income);

     if(income >= 1000000){
        printf("The amount of tax you have to pay to Modih ji is %d\n", (income*30)/100);
     }
     else if(income >= 500000){
        printf("The amount of tax you have to pay to Modih ji is %d\n", (income*20)/100);
     }
     else if(income >= 250000){
        printf("The amount of tax you have to pay to Modih ji is %d\n", (income*5)/100);
     }
     else{
        printf("You don't have to pay any tax 'Gareeb'");
     }
    return 0;
}