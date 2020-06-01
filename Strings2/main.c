#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cha[15]= "SOFTWARE";
    char myArray[20] = "ENGINEERING";
    char name[16];
    int lenOfCha;
    int lenOfmyArray;
    int totalLength;
    int len;

    // Copying cha array  into name Array
    strcpy(name, cha);
    printf("cha is copied to name: %s\n\n", name);

    // Lenght of array myArray
    lenOfmyArray = strlen(myArray);
    printf("lenght Of myArray, strlen(myArray): %d\n\n", lenOfmyArray);

    // Lenght of array cha b4 concatenating
    lenOfCha = strlen(cha);
    printf("lenght Of Cha b4 concat, strlen(cha): %d\n\n", lenOfCha);

    // Concatenating myArray onto cha
    strcat(cha, myArray);
    printf("Joining of myArray to cha, strcat(myArray, cha): %s\n\n", cha);

    // Total lenght ad=fter concatenating
    totalLength =  strlen(cha);
    printf("Total Length of cha after concatenation: %d\n\n", totalLength);

    //Comparing strings
    len = strcmp(cha, myArray);
    if(len==0)
    {
        printf("The 2 variables are the same\n");
    }
    else
    {
        printf("The 2 variables are NOT the same\n");
    }
    return 0;
}
