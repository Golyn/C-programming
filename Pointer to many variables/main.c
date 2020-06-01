#include <stdio.h>
#include <stdlib.h>

// pointer that points to multiple variables

int main()
{
    int a=30 ,b=40, c=50;
    int *myPoint;
    //values of a,b,c
    printf("The values of a,b,c ---> %d, %d, %d\n", a,b,c);
    myPoint=&a;  //pointer to "a" variable
    *myPoint*=2;
    myPoint=&b;
    *myPoint*=2;
    myPoint=&c;
    *myPoint*=2;
   //values of a,b,c
    printf("The values of a,b,c ---> %d, %d, %d\n", a,b,c);
    return 0;
}
