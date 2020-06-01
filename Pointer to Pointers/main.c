#include <stdio.h>
#include <stdlib.h>
//Pointer to pointers: This is a pointer that can point to another pointer of its kind
//**means the latter pointer is a snr
int main()
{
    int seth;
    seth=900;
    int *mike;
    mike=&seth;
    int **jac;   //Pointer to pointer. **means the latter pointer is a snr
    jac=&mike;  //jac has now taken control of all the variables
     printf("Value of Seth is: %d\n",seth);

     //using jac to change the value of seth
    **jac=577;
    printf("Value of Seth is: %d\n",seth);

    int ***priscilla;
    priscilla=&jac;  ////Pointer to pointer to pointer. ***means the latter pointer has the utmost authority
    //using prisciller pointer to change the value of seth
    ***priscilla=seth+5;
    printf("Value of Seth is: %d\n",seth);

    //address of the variables
    printf("\n\nThe address of seth using seth = %d\n", &seth);
    printf("The address of seth using mike = %d\n", mike);
    printf("The address of seth using jac = %d\n", jac);
    printf("The address of seth using priscilla = %x\n", priscilla);  // %x gives a hexadecimal value of the address

    return 0;
}
