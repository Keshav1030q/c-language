/*Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F
*/

#include <stdio.h>

int main()
{
    int percentage;
    printf("Enter your percentage: \n");
    scanf("%d", &percentage);

    if (percentage >= 90)
    {
        printf("You got A grade");
    }
    else if (percentage >= 80)
    {
        printf("You got B grade");
    }
    else if (percentage >= 70)
    {
        printf("You got C grade");
    }
    else if (percentage >= 60)
    {
        printf("You got D grade");
    }
    else if (percentage >= 50)
    {
        printf("You got E grade");
    }
    else
    {
        printf("Sorry but you are Failed");
    }
    return 0;
}