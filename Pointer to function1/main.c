#include <stdio.h>
#include <stdlib.h>
//passing pointer to function
//void add( int *a, int *b, int *sum)

int main()
{
    int a, b, sum=0;
    printf("Enter a and b:\n");
    scanf(" %d %d", &a, &b);
    add(&a, &b, &sum);
    return 0;
}


void add( int *a, int *b, int *sum)
{
    *sum = *a + *b;
    printf(" Sum = %d", *sum);
    return;
}



