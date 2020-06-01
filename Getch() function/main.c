#include <stdio.h>
#include <stdlib.h>
// Library where getch() is stored
#include <conio.h>
/*
getch() reads a single byte character from input.
getch mean "get a charecter" from the output console
this is used similarly in the place of scanf
getch() is a way to get a user inputted character.
getch () function reads character from keyboard.
getch() and getchar() are used to read a character from screen.
putch() and putchar() are used to write a character to screen.
Getch is used to hold the output sceen and wait until user gives any
type of input(i.e. Until user press any key ) so that they can read the
character and due to this we able to see the output on the screen.
getch() or getchar() wait for user to press a key so that they can read
the character and this allows you to see the output.
getch() is simply a function makes a user to press a character and the character
is not printed on the screen, getch is included in conio.h header file.
Same effect can be achieved by using getche() function

Important Points regarding getch() method:
====================================================
getch() method pauses the Output Console untill a key is pressed.
It does not use any buffer to store the input character.
The entered character is immediately returned without waiting for the enter key.
The entered character does not show up on the console.
The getch() method can be used to accept hidden inputs like password, ATM pin numbers, etc.
*/


int main()
{
    // Our first simple C basic program
    printf("Hello World! ");
    getch();
    return 0;
}
/*This is a simple Hello World! C program. After displaying Hello World!
in output screen, this program waits for any character input from
keyboard. After any single character is typed/pressed, this program
returns 0.
But, please note that, getch() function will just wait for any keyboard
input (and press ENTER). It won’t display the given input character in output screen.
*/
