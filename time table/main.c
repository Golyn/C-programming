#include <stdio.h>
#include <stdlib.h>

int main()
{
    //using while loop to create a multiplication table
    int k=10;
    int i=1;
    while(i<k)
    {
        printf(" %d x %d=%d\n",k,i,k*i);
        i++;
    }

    return 0;
}
