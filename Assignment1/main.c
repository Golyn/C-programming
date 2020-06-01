#include <stdio.h>
#include <stdlib.h>

/*
QUESTION
--------
Write a program to calculate the wages of a salesman according to the ff rules;
-The wage is calculated at a rate of 15% of sales.
-If the salesman has been with the company more than 3 yrs, he recieves a loyalty bonus of 10% of his calculated wage.
NB:
Your program should display the ff;
-The name of the salesman/woman
-Total sales
-Wage
-Bonus
-Total wage
================================================================================================================>
*/

int main()
{
    char name[30];
    float sales;
    float total_sales;
    float wage;
    int years;
    float bonus;
    float total_wage;
    const float loyalty=0.1;

    printf("Your name?\n");
    scanf(" %s",&name);
    printf("Enter your sales\n");
    scanf(" %f",&sales);
    printf("Number of years spent with your company\n");
    scanf(" %d",&years);

    wage =  0.15*sales;

    //condition
    if(years>3)
    {
        bonus= loyalty*wage;
        total_wage=wage+bonus;
    }
    else
    {
        bonus=0;
        total_wage=wage;
    }

    printf("Mr.%s\n\n", name);
    printf("Sales is %.2f\n", sales);
    printf("Wage is %.2f\n", wage);
    printf("Bonus amount is %.2f\n", bonus);
    printf("Total wage is %.2f\n", total_wage);

    return 0;
}
