#include <stdio.h>
#include <stdlib.h>

/*
A pointer is a variable whose value is the address of another variable, i.e.,
direct address of the memory location. The actual data type of the value of all pointers is a long hexadecimal number that represents
a memory address.
(a) We define a pointer variable.
(b) assign the address of a
variable to a pointer, and
(c) finally access the value at the address available in
the pointer variable. This is done by using unary operator * that returns the
value of the variable located at the address specified by its operand.
%x means that printf will output its value in hexadecimal format.
//NB: The address locations and the values stored at the variable and the pointer variables will be the same
*/

int main()
{
    //type *var-name;  --declaration
    //int *ip;  /* pointer to an integer */
    //double *dp;  /* pointer to a double */
    //float *fp;  /* pointer to a float */
    //char *ch  /* pointer to a character */

    int var = 20;   /* actual variable declaration */
    int *ip;    /* pointer variable declaration */
    ip= &var;   /* storing address of var in pointer variable*/

    printf("Address of var variable: %x\n", &var );  //address of the actual variable  and  %x means that printf will output its value in hexadecimal format.
    printf("Address stored in ip variable: %x\n", ip ); // the address stored in the pointer variable
    printf("Value of *ip variable: %d\n", *ip );  /* access the value using the pointer */


    return 0;
}
