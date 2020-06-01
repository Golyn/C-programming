#include <stdio.h>
#include <stdlib.h>
//Normal structure
struct
{
    int member1;
    int member2;
} d1;

//Structure with Bit Field
struct
{
    int member1 : 3;
    int member2 : 1;
} d2;

int main()
{
    printf("Size of a normal structure -- %d\n", sizeof(d1));
    printf("Size of a structure with BIT FIELD -- %d\n", sizeof(d2));
    return 0;
}

/*
Instead of taking the sum of all the members based on the datatype, we are taking
sum of all bits and running it to the nearest multiple of 4 bytes integer.

C automatically packs the above bit fields as compactly as possible, provided
that the maximum length of the field is less than or equal to the integer word
length of the computer. If this is not the case, then some compilers may allow
memory overlap for the fields, while others would store the next field in the next
word
*/
