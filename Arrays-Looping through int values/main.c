#include <stdio.h>
#include <stdlib.h>

//looping through arrays

int main()
{
    int myArray[5]= {5,12,25,897,563};
    int i;
    for(i=0;i<5;i++)
    {
       printf("Index %d-->%d\n",i,myArray[i]);
    }

    return 0;
}
