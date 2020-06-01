#include <stdio.h>
#include <stdlib.h>
/*
#define is a C-directive which is also used to define the aliases for various data
types similar to typedef but with the following differences:
 typedef is limited to giving symbolic names to types only,
whereas #define can be used to define alias for values as well, e.g., you
can define 1 as ONE, etc.
 typedef interpretation is performed by the compiler whereas #define
statements are processed by the preprocessor.
The following example shows how to use #define in a program: k
*/

#define TRUE 1
#define FALSE 0
int main()
{
    printf("Value of True: %d\n", TRUE);
    printf("Value of False: %d\n", FALSE);
    return 0;
}
