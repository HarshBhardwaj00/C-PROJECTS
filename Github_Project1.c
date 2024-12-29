//Number Guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int targetNumber, userGuess, numOfTries = 0;

    srand(time(NULL));

    targetNumber = rand() % 100 + 1;

    printf("🎉 Welcome to the Number Guessing Adventure! 🎉\n");
    printf("Hey there, Player! 👋 Ready for a fun challenge? I've chosen a secret number between 1 and 100. Can you guess it? 🤔\n");
    printf("But don't forget to take care of your daily tasks first! 💪 After that, let's dive into this exciting game! 😎\n");
    printf("Let's go! Enter a number between 1 and 100: 🕹️\n");

    do {
        scanf("%d", &userGuess);
        numOfTries++;

        if (userGuess < 1 || userGuess > 100) {
            printf("❌ Whoa! Please choose a number between 1 and 100. Try again! 🔄\n");
        } else if (targetNumber > userGuess) {
            printf("🔽 Too low! Try a bigger number! You've got this! 💪\n");
        } else if (userGuess > targetNumber) {
            printf("🔼 Too high! Try a smaller number! Keep going! 💡\n");
        } else {
            printf("🎉 Congratulations! You've found the right number! 🙌🎊\n");
            printf("It only took you %d tries. Great job! 👏\n");
        }

    } while (userGuess != targetNumber);

    printf("\nThanks for playing! 🎮 Hope you had a blast! 😄 Come back anytime for another round! 💥\n");

    printf("\n----------------------------------------\n");
    printf("Developed by Harsh Bhardwaj 🚀\n");
    printf("----------------------------------------\n");

    return 0;
}
