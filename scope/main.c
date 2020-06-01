#include <stdio.h>
#include <stdlib.h>

//these are global variables
int h=7000, g=9000;
int i=90, j=70;

int calc2Num()
{
    //local variables
    int x=3, y=9;
    i+=x;
    return i;
}
int main()
{

    printf("%d--printing the value of i in calc2Num function\n",i);
    printf("%d--printing the value of j in main function\n",g);
    printf("%d--printing the value of i in calc2Num function\n",i);
    printf("%d--printing the value of j in main function\n",j);
    return 0;
}
