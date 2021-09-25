#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    FILE *fp, *out;
    time_t t;
    srand((unsigned) time(&t));

    int inputChoice = 0;
    //================================
    int maxValue;
    fp = fopen("data.txt","r");
    fscanf(fp, "%d", &maxValue);
    fclose(fp);
    //================================
    while (inputChoice != 3) 
    {
        printf("\nEnter a option: \n [1]:Guess a number \n [2]:Change max \n [3]:Exit\n");
        scanf("%d", &inputChoice);
        switch (inputChoice) 
        {
            case 1: ;
                int num = rand() % maxValue+1;
                bool inProgress = false;
                printf("\nA random number has been generated. Please choose a random number: ");
                while (!inProgress)
                 {
                    char userInput[3];
                    scanf("%s", &userInput);

                    if (userInput[0] == 'q') 
                    {
                        printf("Break out!");
                        break;
                    } else {
                        int convert;
                        sscanf(userInput, "%d", &convert);
                        //printf("\nTest: %d", convert);

                        if (convert > num) {
                            printf("Too high, try again!\n");
                        } else if (convert < num) {
                            printf("Too low, try again!\n");
                        } else {
                            printf("Correct!\n");
                            inProgress = true;
                        }
                    }
                }
                break;
            case 2:
                printf("\nWhat is the max number? ");
                scanf("%d", &maxValue);
                printf("Max number saved as: %d", maxValue);
                //================================
                out = fopen("data.txt", "w");
                fprintf(out, "%d", maxValue);
                fclose(out);
                //================================
                break;
            case 3:
                printf("Thanks for playing!");
                exit(0);
            default:
                printf("invalid option\n");
                break;
        }
    }
}
    //switch 1: will be the regular base version of the game guessing between 1-10 
    //switch 2: will ask the user to change the max number a user can guess when playing 
    //switch 3: wil quit the game  