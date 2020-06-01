#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float dollars;
    int cents;
    int keepCount = 0;
    // Accepting input
    do
    {
        printf("Enter amount : ");
        scanf(" %f",&dollars);
    }while(dollars<0);
    cents = round(dollars * 100);
    printf("%d\n",cents);

    // Performing changes

    /*
    WAY 1 --Bad Design
    ===================
    while(cents>=25)
    {
        cents = cents - 25;
        keepCount++;
    }
    while(cents>=10)
     {
        cents = cents - 10;
        keepCount++;
     }
     while(cents>=5)
     {
        cents = cents - 5;
        keepCount++;
     }
     while(cents>=1)
     {
        cents = cents - 1;
        keepCount++;
     }
    printf("%d coins need for the change", keepCount);
===================================================================================


    WAY 2 -- Good Design
    ======================
    int coins = 0;
    coins = coins + (cents/25); //  coins += cents/25;
    cents = cents % 25; // Accepting the remainder as the new cent's value

    coins = coins + (cents/10);
    cents = cents % 10;

    coins = coins + (cents/5);
    cents = cents % 5;


    coins = coins + (cents/1);
    cents = cents % 1;

    printf("%d coins need for the change", coins);
    ===================================================================================


    WAY 3 -- Better Design using Arrays and for loop
    ===================================================
    int denominations[] = {25, 10, 5, 1};
    int sizes = 4;
    int i;
    int coins = 0;
    for(i=0; i < sizes; i++)
    {
        coins += cents / denominations[i];
        cents %= denominations[i]; //  cents = cents % denominations[i];
    }
    printf("%d coins need for the change", coins);
    */


  //  WAY 3 -- Best Recommended Design using Arrays and for loop
  //  ==========================================================
    int denominations[] = {25, 10, 5, 1};
    int sizes = sizeof(denominations)/sizeof(int);
    int i;
    int coins = 0;
    for(i=0; i < sizes; i++)
    {
        coins += cents / denominations[i]; // coins = coins + (cents / denominations[i]);
        cents %= denominations[i]; // cents = cents % denominations[i]; i.e the remainder after the division is stored as the new cents for each iteration
    }
    printf("%d coins need for the change", coins);
    return 0;
}
