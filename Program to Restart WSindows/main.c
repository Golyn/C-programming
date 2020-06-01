#include <stdio.h>
#include <stdlib.h>
/*
You can use various options while executing shutdown.exe,
for example you can use /t option to specify number of seconds after which the shutdown occurs.

Syntax: "shutdown /s /t x"; here x is the number of seconds after which shutdown will occur.
Example: By default shutdown occurs after 30 seconds. To shutdown immediately you can write "shutdown /s /t 0"
If you wish to restart your computer then you can use "shutdown /r".
*/
int main()
{

    char restart;

    printf("Do you want to shutdown your pc now ? (y/n)\n");
    scanf("%c", &restart);

    if(restart == 'y'|| restart == 'Y')
    {   /*
            /s is used to order the compiler
            to shutdown the PC and r is used to restart
        */
        system("C:\\WINDOWS\\System32\\shutdown /r");
    }

    return 0;
}
