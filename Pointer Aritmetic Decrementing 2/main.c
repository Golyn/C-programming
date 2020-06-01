#include <stdio.h>
#include <stdlib.h>
// decreases its value by the number of bytes of its data type as shown below:

const int max_val =5;
int main()
{
    int myArray[]= {5,20,55,75,90};
    int i, *ip;

       /*
        storing address of the last element
        of the array in pointer variable
    */
    ip=&myArray[max_val-1]; //starting with the last index

    for(i=max_val;i>0;i--)
    {
        //the values of the array using array name
        //printf("Index %d has a value of %d\n",i,myArray[i]);
        //the values of the array using the pointer
        printf("Index %d has a value of %d\n",i,*ip);
        printf("Index %d has an address of %d\n",i,ip);

        ip--;  //from last index to 1
    }

    return 0;
}
