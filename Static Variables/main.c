#include <stdio.h>
#include <stdlib.h>

/*
Static Variables in C
Static variables have a property of preserving their value even after they are out of their scope!
Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope
=====syntax=====
static data_type var_name = var_value;

1) A static int variable remains in memory while the program is running.
A normal or auto variable is destroyed when a function call where the variable was declared is over.
For example, we can use static int to count a number of times a function is called,
but an auto variable can’t be used for this purpose.
2) Static variables (like global variables) are initialized as 0 if not initialized explicitly.
3) In C, static variables can only be initialized using constant literals.
*/

int myFun()
{
    static int count = 0;  // just int count = 0; as an auto or normal variable will generate 1,1,1 instead of 1,2,3 in the main function calls
    count++;
    return count;
}

int main()
{
    printf("%d\n",myFun());
    printf("%d\n",myFun());
    printf("%d\n",myFun());
    return 0;
}
