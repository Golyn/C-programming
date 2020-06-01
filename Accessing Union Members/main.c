#include <stdio.h>
#include <stdlib.h>
//Union Definition
union MyData
{
    int i;
    float f;
    char str[15];

    int i2;
    float f2;
    char str2[15];
}data;

int main()
{
    //Accessing Union Members
    data.i = 102;
    data.f = 76.899;
    strcpy(data.str,"Programming");
/*
Here, we can see that the values of i and f members of union got corrupted
because the final value assigned to the variable has occupied the memory
location and this is the reason that the value of str member is getting printed
very well.
*/

    printf("i value is: %d\n", data.i);
    printf("f value is: %.2f\n", data.f);
    printf("str value is: %s\n", data.str);

    printf("\n\n");
    /*
Now let's look into the another example where we will use one variable
at a time which is the main purpose of having unions:
*/
    data.i2 = 698;
    printf("i2 value is: %d\n", data.i2);
    data.f2 = 999.9284;
    printf("f2 value is: %.2f\n", data.f2);
    strcpy(data.str2,"Unions");
    printf("str2 value is: %s\n", data.str2);
//Here, all the members are getting printed very well because one member is being used at a time.
    return 0;
}

