#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(int argc, char *argv[]) 
{

    time_t t;
    srand((unsigned)time(&t));
    int num = rand() % 4;
    double price;
    if (num == 0) 
    {
        price = 9.95;
    }
    if (num == 1) 
    {
        price = 4.55;
    }
    if (num == 2) 
    {
        price = 13.25;
    }
    if (num == 3) 
    {
        price = 22.35;
    }

    printf("Meal Cost: $%.2f \n", price);
    double tax, tip;
    sscanf(argv[1], "%lf", &tax);
    sscanf(argv[2], "%lf", &tip);

    tax = tax * price; 
    printf("Tax: $%.2f\n", tax);
    
    tax = tax + price;
    tip = tip * tax;
    printf("Tip: $%.2f\n", tip);

    price = tax + tip;
    printf("Total Bill: $%.2f\n", price);
    return 0;

}