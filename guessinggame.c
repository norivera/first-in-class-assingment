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
        printf("\nChoose an option 1 to start playing 2 to change maximum number 3 to quit: \n[1] \n[2] \n[3]");
        scanf("%d", &inputChoice);
        //use switch statments for the menu 
        switch (inputChoice)
        {
            case 1:
                int num = rand() % maxValue+1;
                bool found = false;
                printf("\nA random number has been generated, input a number to guess what my generated number: ");
                
        }
    }
    
    //switch 1: will be the regular base version of the game guessing between 1-10 
    //switch 2: will ask the user to change the max number a user can guess when playing 
    //switch 3: wil quit the game     
}

