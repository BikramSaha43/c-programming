#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    do
    {
        printf("Guess the random number: ");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("This is higher then the random number\n");
        }
        else if (randomNumber > guessed)
        {
            printf("This is lower then the random number\n");
        }
        else {
            printf("Congrats!");
        }
        no_of_guesses++;

    } while (guessed != randomNumber);

    printf("You Guessed the number in %d guesses", no_of_guesses);

    return 0;
}