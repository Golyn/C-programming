#include <stdio.h>
//#include <stdlib.h>
//Input and Output Functions
int main()
{
    char k;
    printf("Enter a character: \n");
    k = getchar();

    printf( "\nYou entered: ");
   //using putchar() to display the enter character on the screen.
    putchar(k);

    return 0;
}

/*
When the above code is compiled and executed, it waits for you to input some
text. When you enter a text and press enter, then the program proceeds and
reads only a single character and displays it.
*/
