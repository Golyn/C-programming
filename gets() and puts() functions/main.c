#include <stdio.h>
//#include <stdlib.h>
//Input and Output Functions
int main()
{
   char str[100];
   printf( "Enter a value :");
   gets( str );
   printf( "\nYou entered: ");
   puts( str );

    return 0;
}

/*
When the above code is compiled and executed, it waits for you to input some
text and then the gets() holds it. When you enter a text and press enter, then the program proceeds and
reads the complete line till end, and displays it using the puts() fnx.
*/
