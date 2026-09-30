#include<stdio.h>

void ten_timers(int* a);
void ten_timers(int* a){
    *a = *a * 10;
}

int main(){
    int i;
    printf("Enter value: \n", i);
    scanf("%d", &i);
    ten_timers(&i);
    printf("The value become %d", i);
    return 0;
}