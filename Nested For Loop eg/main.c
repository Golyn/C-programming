#include <stdio.h>
#include <stdlib.h>

/*
 C program to print multiplication table from 1 to 5
 */

int main()
{
    /* Loop counter variable declaration */
    int i, j;

    /* Outer loop */
    for(i=1; i<=10; i++)
    {
        /* Inner loop */
        for(j=1; j<=5; j++)
        {
            printf("%d\n", (i*j));
        }

        /* Print a new line */
        printf("\n");
    }

    return 0;
}

/*
In the outer loop first variable i is initialized with 1.
Then it transfer program control to loop condition i.e. i<=10.
The loop condition part checks if i<=10 then transfer program control
to body of loop otherwise terminate from loop.
Body of loop does not contain any statement rather it contain another loop.
First the initialization part executes initializing j=1.
After initialization it transfer program control to loop condition part i.e. j<=5.
The loop condition checks if j<=5 then transfer program control to body of loop otherwise terminated the inner loop.
Body of loop contains single printf("%d\t", (i*j)); statement. For each iteration it print the product of i and j.
Next after loop body, the loop update part receives program control. It increment the value of j with 1 and
transfer program control back to loop condition. From the above description it is clear that the inner
 loop executes 5 times. For i=1 it prints the product of i and j.
The program control is transferred to loop update part i.e. i++ after inner loop terminates. The loop update part
increment the value of i with 1 and transfer the control to loop condition.
The outer loop executes 10 times. For each time outer loop repeats, inner loop is
executed with different value of i.
For i=1 it prints the product of i and j

1       2       3       4       5
Similarly for i=2 it prints

2       4       6       8       10
*/
