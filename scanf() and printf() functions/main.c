#include <stdio.h>
//#include <stdlib.h>
//Input and Output Functions
int main()
{
    char str[100];
    int i;

    printf("Enter values: ");
    scanf("%s %d", str, &i);
    printf( "\nYou entered: %s %d ", str, i);

    return 0;
}

/*
When the above code is compiled and executed, it waits for you to input some
text. When you enter a text and press enter, then program proceeds and reads
the input and displays it.

Here, it should be noted that scanf() expects input in the same format as you
provided %s and %d, which means you have to provide valid inputs like "string
integer". If you provide "string string" or "integer integer", then it will be
assumed as wrong input. Secondly, while reading a string, scanf() stops reading
as soon as it encounters a space, so "this is test" are three strings for scanf().
*/
