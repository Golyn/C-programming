#include <stdio.h>
#include <stdlib.h>
//Sharing Static Variables across multiple funx

static int eggs;  //Automatically initialized to 0

int up()
{
    eggs+=10;
}

int down()
{
    eggs-=5;
}

int main()
{
     up();
     up();  //the function compiles value increases per each call since the variable is static.
     down();
    printf("Value of the static variable becomes: %d\n",eggs); //Hence 20-5=15
    return 0;
}
