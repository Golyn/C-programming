#include <stdio.h>
#include <stdlib.h>

//Continue tells the program to ignore the statements inside the loop but not completely break out of the loop. It goes to the top of the program again and starts the next cycle

int main()
{
    int a=10;
    /* do loop execution */
    do{
       if(a==15)
       {
           //skip the iteration. Hence 15 will not be printed out
           a++;
           continue;
       }
       printf("Number: %d\n",a);
       a++;
    }while(a<20);

    return 0;
}
