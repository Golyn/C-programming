#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char msg[100];
    printf("Enter your message\n");
    // Accepting string input using gets()
    gets(msg);
    // Opening file for write and read mode
    fp = fopen("C:\\Cworkspace\\File1\\text_file.txt", "w+");
    // Printing text on the screen or console using fprintf()
    fprintf(fp, msg);
    //printf("\n\n");
    // Printing the same text on the screen or console using fputs()
    fputs(msg, fp);
    // Closing the file to free up memory space
    fclose(fp);
    return 0;
}
