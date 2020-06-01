#include <stdio.h>
#include <stdlib.h>
/*
Pointer Arithmetic
A pointer in C is an address, which is a numeric value. Therefore, you can
perform arithmetic operations on a pointer just as you can on a numeric value.
There are four arithmetic operators that can be used on pointers: ++, --, +, and
-
Pointer by default points to the first index of the array
*/
//Incrementing pointer
const int MAX = 3;
int main ()
{
 int var[] = {10, 100, 200};
 int i, *ptr;
 // & is a reference operator so it references variables
 //*(asterks is a dereference operator).It dereferences a variable to get its value. NB: * for intiating a pointer(eg. int *ptr;) is different from that for dereference(*)
 /* let us have array address in pointer */
 ptr = var;  //it is holding the address of the 1st of array element(index 0). Array is a reference value on it's so it doesn't need an &(ampersand)
 for ( i = 0; i < MAX; i++)
 {
 printf("Address of var[%d] = %x\n", i, ptr );
 printf("Value of var[%d] = %d\n", i, *ptr );
 /* move to the next location of the index */
 ptr++;
 }
 return 0;
}
