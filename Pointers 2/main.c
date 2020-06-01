#include <stdio.h>
#include <stdlib.h>
//NB: The address locations and the values stored at the variable and the pointer variables will be the same
int main()
{
int    *ip;    /* pointer to an integer */
double *dp;    /* pointer to a double */
float  *fp;    /* pointer to a float */
char   *ch;    /* pointer to a character */

int k; // variable declaration
k=900;
ip=&k;// ip  points to k
char name='S';
ch=&name;


//let ip show the value of k---:
printf("Using ip to display k value-->%d\n",*ip);

//let ip show the value of name---:
printf("Using ip to display name value-->%c",*ch);
}
