#include <stdio.h>
#include <stdlib.h>
//defining a constant
//method 1
#define taxi 23
#define name "Seth Amankwah"

//method 2
const float tax = 17.5;

const int salary = 9000;

int main()
{
    printf("Tax is %d\n",taxi);
    printf("Tax is %f\n",tax);
    printf("My Salry is %d\n", salary);
    printf("My name is %s\n", name);
    printf("Data types and sizes\n");
    printf("=============================\n");
    printf("Size of int is %d byte(s)\n",sizeof(int));
    printf("Size of short is %d byte(s)\n",sizeof(short));
    printf("Size of long is %d byte(s)\n",sizeof(long));
    printf("Size of float is %d byte(s)\n",sizeof(float));
    printf("Size of char is %d byte(s)\n",sizeof(char));
    printf("Size of double is %d byte(s)\n",sizeof(double));
    printf("Size of long double is %d byte(s)\n",sizeof(long double));
    int auto num=90;    //default. it is the same as jux int
    printf("Auto number is %d\n",num);
    int register num1 = 60;    //stores the variable outside the RAM. It stores it in the registry or register
    printf("Register number one is %d\n",num1);
    int static num2 = 25;
    printf("Static number one is %d\n",num2);
    return 0;
}
