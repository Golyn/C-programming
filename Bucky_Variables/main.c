#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age =25;
    int new_age;
    new_age = 27;

    int old;
    int currentYear;
    int birthyear;

    currentYear = 2020;
    birthyear = 1994;
    old =  currentYear - birthyear;
    printf("Seth is %d yrs old\n", age);
    printf("New age is %d yrs old\n", new_age);
    printf("I am %d yrs old\n", old);
    return 0;
}
