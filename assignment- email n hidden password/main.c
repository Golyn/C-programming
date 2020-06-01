#include <stdio.h>
#include <stdlib.h>

int main()
{
       // Taking the password of 8 characters
    char pwd[7];
    int i;

    printf("Enter Password: \n");
    for (i = 0; i < 7; i++) {

        // Get the hidden input
        // using getch() method
        pwd[i] = getch();

        // Print * to show that
        // a character is entered
        printf("*");
    }
    pwd[i] = '\0';

    // Now the hidden input is stored in pwd[]
    // So any operation can be done on it

    // Now the console will wait
    // for a key to be pressed
    getch();
    return 0;
}
