#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    //varaible declaration
    FILE *fp, *out;
    time_t t;
    srand((unsigned) time(&t));
    int inputChoice = 0;
    int maxValue = 10;

    //Menu creation 
    while (inputChoice != 3) {
        printf("\nEnter option:\n[1]:Guess number\n [2]:Change max\n [3]:Exit\n");
        scanf("%d", &inputChoice);
        switch (inputChoice)
         {
            case 1: ;
                int num = rand() % maxValue+1;
                bool inProgress = false;
                printf("\nA random number has been generated, input number to start guessing: ");
                while (!inProgress) 
                {
                    char userInput;
                    scanf("%c", &userInput);

                    int convert = (int)userInput;
                    if (convert > num+48 && convert != 10 && convert != 113)
                    {
                        printf("Too high, try again!\n");
                    } 
                    else if (convert < num+48 && convert != 10 && convert != 113)
                    {
                        printf("Too low, try again!\n");
                    }
                    else if (convert == 10)
                    {
                        ;
                    }
                    else if (convert == 113)
                    {
                        printf("\nExiting the game, back to main menu!");
                        inProgress = true;
                    }
                    else
                    {
                        printf("Correct!");
                        inProgress = true;
                    }
                }
                break;
            case 2:
                printf("\nWhat is the max number? ");
                scanf("%d", &maxValue);
                printf("Max number saved as: %d", maxValue);
                break;
            case 3:
                printf("Thanks for playing!");
                exit(0);
            default:
                printf("invalid option");
                break;
        }
    }
}
    //switch 1: will be the regular base version of the game guessing between 1-10 
    //switch 2: will ask the user to change the max number a user can guess when playing 
    //switch 3: wil quit the game  