#include <stdio.h>
#include <stdlib.h>
//Fnx with parameters
//this fnx will multiply 5  by any number.

/*
  void Multiply5ByAnyNumber(int num)
{
    printf("Enter any number\n");
    printf("The answer is--->%d\n",5*num);

}

int main()
{
    Multiply5ByAnyNumber(3); //call the function and pass it a value to x by 5
    return 0;
}
*/



//================================================================
//Multiply 2 by any muner
/*
void Multx2(int num)
{
    printf("2x%d is =%d\n",num,2*num);

}

int main()
{
    int arg;
    printf("Enter a number:\n");
    scanf(" %d\n", &arg);
    Multx2(arg);
}
*/



//=========================================================================

//Multipying 2 unknown numbers
void Mult2UnknownNumbers(int num1, int num2)
{
    printf("The product of %d and %d is = %d", num1,num2,num1*num2);
}

int main()
{
    int arg1,arg2;
    printf("Enter first number:\n");
    scanf(" %d", &arg1);
    printf("Enter second number:\n");
    scanf(" %d", &arg2);
    Mult2UnknownNumbers(arg1,arg2);  //arg1 and arg2 becomes the values for num1 and num2 respectfully

    return 0;

}
