#include <stdio.h>
#include <stdlib.h>
/*
It is always a good practice to assign a NULL value to a pointer variable in case
you do not have an exact address to be assigned. This is done at the time of
variable declaration. A pointer that is assigned NULL is called a null pointer.
The NULL pointer is a constant with a value of zero(0) defined in several standard
libraries.
NB: In most of the operating systems, programs are not permitted to access
memory at address 0 because that memory is reserved by the operating system.
However, the memory address 0 has special significance; it signals that the
pointer is not intended to point to an accessible memory location. But by
convention, if a pointer contains the null (zero) value, it is assumed to point to
nothing.

To check for a null pointer, you can use an ‘if’ statement as follows:
if(ptr)    ==== succeeds if p is not null
if(!ptr)   === succeeds if p is null
*/
int main()
{
    int *ptr = NULL;
    printf("The value of null pointer: %d\n", ptr);

    int k=800;
    ptr=&k;
    //changing the value of k using pointer
    *ptr=230;
    printf("The value of k is: %d\n", *ptr);
    return 0;
}
