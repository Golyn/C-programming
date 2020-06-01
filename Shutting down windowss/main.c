#include<stdio.h>
#include<stdlib.h>    // to use system() method

/*
You can use various options while executing shutdown.exe,
for example you can use /t option to specify number of seconds after which the shutdown occurs.

Syntax: "shutdown /s /t x"; here x is the number of seconds after which shutdown will occur.
Example: By default shutdown occurs after 30 seconds. To shutdown immediately you can write "shutdown /s /t 0"
If you wish to restart your computer then you can use "shutdown /r".
*/

int main()
{

    char ch;

    printf("Do you want to shutdown your pc now (y/n)?");
    scanf("%c", &ch);

    if(ch == 'y'|| ch == 'Y')
    {   /*
            /s is used to order the compiler
            to shutdown the PC
        */
        system("C:\\WINDOWS\\System32\\shutdown /s /1");
    }

    return 0;
}
