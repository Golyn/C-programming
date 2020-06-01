#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[12] = "Seth Appiah\0"; //\0 is the terminator. To hold the null character at the end of the array, the size of the character array containing the string has to be one more than the number of characters
    printf("My name is %s\n", name);

    name[2]='o';  //changing an item or element
    printf("My name is %s\n", name);

    char food[] = "tuna";
    printf("This is %s\n", food);

    //changing the value of a variable using strcpy() function
    strcpy(food, "meat");
    printf("This is %s\n", food);
    return 0;
}
