#include <stdio.h>
#include <stdlib.h>

int main()
{
    int balls[5]={7,9,43,21,3};
    int i;
    printf("Element \t Address \t Value\n");
    for(i=0;i<5;i++)
    {
       printf("balls[%d] \t %x \t %d\n",i, &balls[i], balls[i]);
    }
printf("\n\n");
//NB: Array names are just pointers to the first element or index
    printf(" balls \t \t %d \n", balls);

//dereference to get the value of the first element or index since array name by deafult points to only the first index
    printf(" balls \t \t %d \n", *balls);

//+2 or any number of looping you want. ie. skip a number of times to particular index
    printf(" balls \t \t %d \n", *(balls + 2));  //will give u 43 since counting 2 from the index 0 of value 7 is 43 NB the skipping starts from te first index
    printf(" balls \t \t %d \n", *(balls + 1));

    return 0;
}
