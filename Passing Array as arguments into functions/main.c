#include <stdio.h>
#include <stdlib.h>

int SumOfElements(int A[], int sizes)
{
    int i,sum=0;
    for(i=0;i<sizes;i++) //size or number of elements in the array which is derived using the sizeof() fxn
    {
       sum+=A[i]; //adding each value of i or element to the value of sum
    }
    return sum;
}

int main()
{
    int A[]={1,2,3,4,5}; //15
    int sizes = sizeof(A)/sizeof(A[0]); //sizeof(A) --> total byte size of all elements of A which is 20 whereas sizeof(A[0]) is the byte size of a single element which is
    //int total = SumOfElements(A,sizes);
     //printf("Sum of elements = %d\n",total);
     //OR
    printf("Sum of elements = %d\n",SumOfElements(A,sizes));
    return 0;
}
