#include <stdio.h>
#include <stdlib.h>

//finding the prime numbers from 2 to 100
int main()
{
    int i,j;
    for(i=2;i<100;i++)
    {
        for(j=2;j<=(i/j);j++)
            if(!(i%j))
             break;   //if factor found, not prime

        if(j > (i/j))
        {
            printf("%d is prime\n", i);
        }

    }
    return 0;
}

