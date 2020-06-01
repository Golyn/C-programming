#include <stdio.h>
#include <stdlib.h>
//Different data type pointers cannot points to different datatype variables
int main()
{
    int *lab;
    int k;
    k=77;
    lab=&k;

    // display the ddress of K
    printf("The address of k using pointer lab = %d\n", lab);
    printf("The address of k using k = %d\n", &k);

    // display the valueof K
    printf("The value of k using pointer lab = %d\n", *lab);
    printf("The value of k using k = %d\n", k);
    return 0;
}
