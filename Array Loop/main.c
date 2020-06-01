#include <stdio.h>
#include <stdlib.h>
//NB: Array name is a constant so it cannot be changed
int main()
{
    int collectNum[10];
    int i;
    //loop for input
    for(i=0;i<10;i++)
    {
        printf("Enter a number into index--->%d\n",i);
        scanf(" %d",&collectNum[i]);
    }

      //loop for output
    for(i=0;i<10;i++)
    {
        printf("Index--->%d: %d\n",i,collectNum[i]);
    }

    return 0;
}
