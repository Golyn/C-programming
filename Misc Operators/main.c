#include <stdio.h>
#include <stdlib.h>

//Miscellaneous operators
main()
{
int a;
short b;
double c;
int* ptr;

/* sizeof operator  Returns the size of a variable.*/
printf("Line 1 - Size of variable a = %d\n", sizeof(a) );
printf("Line 2 - Size of variable b = %d\n", sizeof(b) );
printf("Line 3 - Size of variable c= %d\n", sizeof(c) );


/* '&' and '*' operators . '&' Returns the address of a variable.*/
ptr = &a; /* 'ptr' now contains the address of 'a'*/
printf("value of a is %d\n", a);
printf("*ptr is %d.\n", *ptr);


/* ternary operator */
a = 10;
b = (a == 1) ? 20: 30;
printf( "Value of b is %d\n", b );
b = (a == 10) ? 20: 30;
printf( "Value of b is %d\n", b );
}
