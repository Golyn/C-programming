#include <stdio.h>
#include <stdlib.h>

int add2numbers(int a, int b)
{
    printf("The sum of %d and %d = %d\n",a,b,a+b);
}
int main()
{
    add2numbers(2,3);
    return 0;
}
