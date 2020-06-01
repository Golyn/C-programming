#include <stdio.h>
#include <stdlib.h>

//QUESTION;
//Finding the largest number among 3 numbers using a void func and an if..else statement

void largest()
{
    //Declaring variables
    int a=50;
    int b=100;
    int c=40;

//If..else statements
    if(a>b && a>c)
    {
        printf("%d is the largest number",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the largest number",b);
    }
    else
    {
        printf("%d is the largest number",c);
    }

}


int main()
{
    largest();
    return 0;
}
