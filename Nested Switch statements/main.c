#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a=100;
    int b=200;
    switch(a)
    {
       case 100:
            printf("This is an OUTER SWITCH\n");

            switch(b)
            {
                case 200:
                     printf("This is an INNER SWITCH\n");
                break;
            }
       break;
    }

    printf("This is a nested Switch");

    return 0;
}
