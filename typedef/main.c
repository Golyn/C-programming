#include <stdio.h>
#include <stdlib.h>
/*
typedef is used to give a type, a new name. It means type-definition and is used to define user-defined data types.
After the definition, the identifier can be used as an abbreviation for the type.
By convention, uppercase letters are used for these definitions to remind the
user that the type name is really a symbolic abbreviation, but you can use
lowercase. Suppose you want to alias any data type your names or something else for easy use.
*/
typedef int Kobby;  //aliasing all int to Seth
typedef char Prisci; //aliasing all char to Seth
typedef float SETH;   //......

int main()
{
    Kobby studentId = 112;
    Kobby age = 26;
    SETH amount = 5461.455;
    Prisci name[] = "Dankwa Priscilla";
    printf("ID : %d\n", studentId);
    printf("Kobby's is %d yrs old\n", age);
    printf("The amount is  $%d\n", studentId);
    printf("Her name is %s\n", name);

    return 0;
}
