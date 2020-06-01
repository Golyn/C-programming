#include <stdio.h>
#include <stdlib.h>

// %x means that printf will output its value in hexadecimal format.
//NB: The address locations and the values stored at the variable and the pointer variables will be the same
int main()
{
    int Seth=20;
    int *Godwill; //Pointer declaration
    Godwill = &Seth; //Storing the address location of seth in the pointer Godwill

    printf("The address of Seth: %x\n", &Seth);  // %x means that printf will output its value in hexadecimal format.
    printf("The address of Godwill Pointer: %x\n", Godwill);
    printf("The value of Seth: %d\n", Seth);
    printf("The value of Seth stored in Godwill: %d\n", *Godwill);
    return 0;
}
