#include <stdio.h>
#include <stdlib.h>

int main()
{
    double balance[5] = {1000.0,2.0,3.4,17.0,50.0};
    double *p;
    int i;

    p = balance;  //since balance is an array and array by default is a reference variable, "&" is not required

    printf("\nbalance is %f\n\n", *balance); //Array name is a pointer by default and points to the first element of the array

     //output each array element's value
    printf("Array values using pointer\n");
    for(i=0;i<5;i++)
    {
        //
       // printf("Index[%d] has a value of %f\n",i,balance[i]);
        printf("*(p + %d) : %f\n", i, *(p + i));
    }
printf("\n");
   printf("Array values using balance as address\n");
   for(i=0;i<5;i++)
   {
        printf("*(balance + %d) : %f\n", i, *(balance + i));
   }
    return 0;
}
