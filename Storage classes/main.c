#include <stdio.h>
#include <stdlib.h>

int main()
{
    int auto num=90;    //default. it is the same as jux int
    printf("Auto number is %d\n",num);
    int register num1 = 60;    //stores the variable outside the RAM. It stores it in the registry or register
    printf("Register number one is %d\n",num1);
    int static num2 = 25;
    printf("Static number one is %d\n",num2);
    return 0;
}
