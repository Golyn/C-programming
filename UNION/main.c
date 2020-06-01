#include <stdio.h>
#include <stdlib.h>

union BigData
{
    int i;
    float f;
    char str[20];
}data;

int main()
{
    union BigData data;
    printf("Size of the Union memory is: %d\n", sizeof(data));
    return 0;
}
