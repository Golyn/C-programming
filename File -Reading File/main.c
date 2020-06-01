#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPointer; //file pointer
    // Opening file and reading it
    fPointer = fopen("sample_file.txt", "r");
    // Storing all the characters to be read from the file in a character array
    char singleLine[150];
    // Looping through the file from start to end using "!feof" --> not file end of file
    while(!feof(fPointer))
    {
        // Gets string from the file and Read line by line
        fgets(singleLine,150,fPointer);
        // Print it out or display on the screen
        puts(singleLine);
    }
    // Closing the file
    fclose(fPointer);

    return 0;
}
