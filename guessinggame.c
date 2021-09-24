#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> 

int main()
{
    //declare variables needed 
    FILE *fp, *out;
    time_t t;
    srand((unsigned)time(&t));
    int inputChoice = 0;
    int maxValue = 10;
    while (inputChoice != 3)
    {
        printf("\nChoose an option: \n[1]:Start game \n[2]:Change maximum number \n[3]:Quit\n");
        scanf("%d", &inputChoice);
        //use switch statments for the menu 
        switch (inputChoice)
        {
            case 1:
                int num = rand() % maxValue+1;
                bool found = false;
                printf("\nA random number has been generated, pick a number between 1-10: ");
                while(!found)
                {
                    int userInput;
                    scanf("%d", &userInput);

                    if (userInput > num)
                    {
                        printf("Too high, try again!\n");
                    }
                    else if (userInput < num)
                    {
                        printf("Too low, try again!\n");
                    }
                    else 
                    {
                        printf("Correct!\n");
                        found = true;
                    }

                }
                break;
            case 2:
        }
    }
    //switch 1: will be the regular base version of the game guessing between 1-10 
    //switch 2: will ask the user to change the max number a user can guess when playing 
    //switch 3: wil quit the game     
}

