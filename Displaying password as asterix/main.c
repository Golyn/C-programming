#include <stdio.h>
#include <stdlib.h>
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
*/
/*int main()
{
    int i;
    char ch,pass[7];
    printf("Enter the password: \n");
    for(i=0;i<7;i++)
    {
        ch=getch();
        pass[i]=ch;
        ch='*';
        printf("%c\n",ch);

    }
    return 0;
}

*/
int main()
{
    /* Our first simple C basic program */
    printf("Hello World! ");
    getch();
    return 0;
}
