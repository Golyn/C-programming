#include <stdio.h>
#include <stdlib.h>

/*
1. Write a function in c language that finds the largest number out of 10 integer numbers.
note:
1. the function name is getLargest()
2. the function will return no value
3. the function will have no parameters
4. you must use a loop.
============================================================================================================>
*/
void getLargest()
{
    int great,n;
    int ele=9;
    int i;
    printf("Enter number\n");
    scanf(" %d",&n);
    great=n;
    for(i=0;i<ele;i++)
    {
        printf("Enter another number: \n");
        scanf(" %d",&n);
        if(n>great)
        {
            great=n;
        }
    }
    printf("The largest number is %d",great);
    return 0;
}

int main()
 {
    getLargest();
    return 0;
}
