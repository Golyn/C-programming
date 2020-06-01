#include <stdio.h>
#include <stdlib.h>
// Reading file "writing_files.txt"
int main()
{
    FILE *fp;
    char buff[255];
    fp = fopen("C:\\Cworkspace\\File - Writing files\\writing_files.txt", "r");
    // Reading the file and storing the characters or string in the char buff[255] array using fscanf()
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff);

    // Reading the file and storing the characters or string in the char buff[255] array using fgets()
    fgets(buff, 255, fp);
    printf("2: %s", buff);

    // Reading the file and storing the characters or string in the char buff[255] array using fgets()
    fgets(buff, 255, fp);
    printf("3: %s", buff);

    fclose(fp);
    return 0;
}

/*
Let's see a little more in detail about what happened here. First, fscanf() reads
just This because after that, it encountered a space, second call is
for fgets() which reads the remaining line till it encountered end of line. Finally,
the last call fgets() reads the second line completely.
*/
