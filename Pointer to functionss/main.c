#include <stdio.h>
#include <stdlib.h>

//void getSeconds(char *nm);

int main()
{
    char cha;
    getSeconds(&cha);

    // Print the actual value
    printf("The Character you chose is : %c\n", cha);
    return 0;
}

void getSeconds(char *nm)
{
    // Get the current number of seconds
    char input;
    printf("Choose a character:\n");
    scanf(" %c", &input);
    *nm = input;

}
