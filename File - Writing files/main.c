#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("C:\\Cworkspace\\File - Writing files\\writing_files.txt", "w+");
    fprintf(fp,"This is a text wriiten using the fprintf function\n");
    fputs("This is a text wriiten using the fputs function", fp);
    fclose(fp);

    return 0;
}
