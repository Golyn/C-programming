#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int a=20;
    if(a==20)
    {
        printf("a is equal to 20\n");
    }
    else
    {
        printf("a is not equal to 20\n");
    }
    */

    //=====================================================================================>
    int b;
    printf("Enter a number2\n");
    scanf(" %d", &b);
    if(b>20)
    {
        printf("Number is greater than 20\n");
    }
    else if(b==20)
    {
        printf("Number is equal to 20\n");
    }
    else
    {
        printf("Number is less than 20\n");
    }

    return 0;

}
