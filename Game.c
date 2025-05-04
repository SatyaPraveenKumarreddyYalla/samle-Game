#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ATTEMPTS 7

int main() {
    int number, guess, attempts = 0;
    srand(time(0)); // Seed the random number generator
    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n", MAX_ATTEMPTS);

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < 1 || guess > 100) {
            printf("Please guess a number between 1 and 100.\n");
            attempts--; // Do not count this attempt
            continue;
        }

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
            break;
        }
    }

    if (attempts == MAX_ATTEMPTS) {
        printf("Sorry! You've used all your attempts. The number was %d.\n", number);
    }

    return 0;
}