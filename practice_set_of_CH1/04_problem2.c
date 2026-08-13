#include <stdio.h>

int main()
{
    float p, r, t;

    printf("Enter Principle amount\n");
    scanf("%f", &p);

    printf("Enter annual rate of interest\n");
    scanf("%f", &r);

    printf("Enter years\n");
    scanf("%f", &t);

    printf("The of amount of interest is %f", (p * r * t) / 100);
    return 0;
}