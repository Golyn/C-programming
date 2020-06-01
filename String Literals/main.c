#include <stdio.h>
#include <stdlib.h>

//the ff string literals produce the same output
int main()
{
    printf("hello, dear\n");
    printf("hello, \
dear\n");
    printf("hello, " "d" "ear");
    return 0;
}
