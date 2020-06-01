#include <stdio.h>
#include <stdlib.h>

/*
QUESTION
--------
Write a program to create a single dimensional array of 10 size name 'timeTable', to store the answers of a multiplication table e.g
1x1=1,1x2=2,1x3=3...1x10=10;
NB: Only the answers will be stored in the array by using a 'for..loop'.
*/

int main()
{
    int timeTable[10];
    int x=1;
    int z;
    int i;

    for(i=0;i<10;i++)
    {
        int z=x*i;
        printf("%d x %d = %d\n",x,i,z);
    }

  printf("\n\n");

    for(i=0;i<10;i++)
    {
        int z=x*i;
        timeTable[i]=z;
        printf("%d\n",timeTable[i]);

    }




    return 0;
}
