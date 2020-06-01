#include <stdio.h>
#include <stdlib.h>

//Finding the largest number among 3 numbers

void largest()
{
    int a=50;
    int b=100;
    int c=40;

    if(a>=b && a>=c)
    {
        printf("%d is the largest number",a);
    }
   if(b>=a && b>=c)
    {
        printf("%d is the largest number",b);
    }
   if(c>=a && c>=b)
    {
        printf("%d is the largest number",c);
    }

}

int main()
{
    largest();
    return 0;
}
