#include <stdio.h>
#include <stdlib.h>
/*
--Demonstrating passed by value in function calls for variables.
--Demonstrating passed by reference in function calls for arrays.
*/
void set_array(int array[4]);
void set_int(int x);

int main()
{
    int a = 10;
    int b[4] = {0,1,2,3};
    set_int(a);
    set_array(b);
    //the variable "a" is passed by value whilst array b is passed by refernce
    printf("%d %d\n", a, b[0]);
    return 0;
}

void set_array(int array[4])
{
    array[0] = 22;
}

void set_int(int x)
{
    x = 22;
}
