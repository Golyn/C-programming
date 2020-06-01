#include <stdio.h>
#include <stdlib.h>
/*
Following is a simple example where we pass an unsigned long pointer to a
function and change the value inside the function which reflects back in the
calling function:

& is an address/referencing operator
* is a value/dereferencing operator
*/
void getSeconds(unsigned long *par);

int main ()
{
 unsigned long sec;
 getSeconds( &sec );
 /* print the actual value */
 printf("Number of seconds: %ld\n", sec );
 return 0;
}

void getSeconds(unsigned long *par)
{
 /* get the current number of seconds */
 *par = time( NULL );
 return;
}
