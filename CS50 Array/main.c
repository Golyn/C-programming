#include <stdio.h>
#include <stdlib.h>

int main()
{
    int foo[5] = {1,2,3,4,5};
    int bar[5];
    int j;
//Looping through and printing the elements of foo
    for(j=0; j<5; j++)
    {
       printf("%d",foo[j]);
    }

    printf("\n\n");

    //Copying the elements of foo into the bar array and then printing it out
    for(j=0; j<5; j++)
    {
       bar[j] = foo[j];
       printf("%d",bar[j]);
    }
    return 0;
}
