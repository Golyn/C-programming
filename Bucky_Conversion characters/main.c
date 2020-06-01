#include <stdio.h>
#include <stdlib.h>

//Conversion character is a placeholder that u can use to place something in a string
// %s, %d, %f

int main()
{
    printf("%s you are welcome\n", "Seth");
    printf("%s and %s are siblings\n","Ako" ,"Appiah");
    printf("%d is the sum of %d and %d\n", 5,2,3);
    printf("%d is the product of %d and %d\n", 2*3);
    printf("Pi is %f\n", 3.1415926535);
    printf("Pi rounded to 2d place is %.2f\n", 3.1415926535);
    return 0;
}
