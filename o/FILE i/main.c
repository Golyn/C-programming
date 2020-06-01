#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPointer; //file pointer
    // Basically everything we will be doing has to be done using the pointer
    // Creating file
    fPointer = fopen("sample_file.txt", "w");  //using w to write or create file since the file doesn't exits
    // Writing text into the file
    fprintf(fPointer, "This is testing for fprintf..\n");
    fputs("This is testing for fputs..\n",fPointer);
    // Closing a file .It freezes up athe memory and gives the memory back to the computer
    // fclose(fPointer);
    return 0;
}
