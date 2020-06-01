#include <stdio.h>
#include <stdlib.h>

const int max_val =5;
int main()
{
    int myArray[]= {5,20,55,75,90};
    int i, *ip;

      /*
        storing address of the first element
        of the array in pointer variable
    */
    ip=myArray;

    for(i=0;i<max_val;i++)
    {
        //the values of the array using array name
        //printf("Index %d has a value of %d\n",i,myArray[i]);
        //the values of the array using the pointer
        printf("Index %d has a value of %d\n",i,*ip);
        printf("Index %d has an address of %d\n",i,ip);

        ip++;
    }

    return 0;
}
