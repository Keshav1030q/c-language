#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;
    int guess;
    int no_of_guesses = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Generate random number from 1 to 100
    randomNumber = (rand() % 1000) + 1;

    // printf("Random number: %d\n", randomNumber);

    printf("Now Guess the number\n");

    while (scanf("%d", &guess))
    {
        if (randomNumber > guess)
        {
            printf("GO UP \n");
        }
        else if (randomNumber < guess)
        {
            printf("GO DOWN \n");
        }
        else if(randomNumber == guess)
        {
            printf("You guess the correct number\n");
            break;
        }
        no_of_guesses++;
    }

    printf("The number of gusses is %d", no_of_guesses);
    return 0;
}