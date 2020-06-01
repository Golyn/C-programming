#include <stdio.h>
#include <stdlib.h>
// Library where getch() is stored
#include <conio.h>
/*
Important Points regarding getch() method:
=========================================
getch() method pauses the Output Console untill a key is pressed.
It does not use any buffer to store the input character.
The entered character is immediately returned without waiting for the enter key.
The entered character does not show up on the console.
The getch() method can be used to accept hidden inputs like password, ATM pin numbers, etc.
*/

//Using getch() to accept hidden inputs
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

    // Here we are just printing the actual passwor
   // printf("Entered password: ");
    //for (i = 0; pwd[i] != '\0'; i++)
      //  printf("%c", pwd[i]);

    // Now the console will wait
    // for a key to be pressed
    getch();
    return 0;
}
