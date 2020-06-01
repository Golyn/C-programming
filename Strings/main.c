#include <stdio.h>
#include <stdlib.h>
/*
Strings are actually one-dimensional array of characters terminated by
a null character zero ('\0'). Thus a null-terminated string contains the characters that
comprise the string followed by a null.
The following declaration and initialization create a string consisting of the word
"Hello". To hold the null character at the end of the array, the size of the
character array containing the string is one more than the number of characters
in the word "Hello."
*/
int main()
{

    char greeting[6] = {'H','e','l','l','o','\0'};
    /* If you follow the rule of array initialization, then you
    can write the above statement as follows:
    char greeting[] = "Hello";
    */
    printf("%s\n", greeting);
    return 0;
}
