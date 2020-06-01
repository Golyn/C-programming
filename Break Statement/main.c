#include <stdio.h>
#include <stdlib.h>

//break statement is used to end/discontinue a loop early. It saves time and resources since it terminates after the desired result is achieved
int main()
{
    /*
    int a=10;
    while(a<20)
    {
        printf("Number: %d\n",a);
        a++;
        if(a>15)
        {
            break;  //terminates when a>15
        }
    }
*/


//=================================================================================>
int b;
int howmany;
int maxamount=15;
printf("Enter how many\n");
scanf(" %d", &howmany);

for(b=1;b<maxamount;b++)
{
    printf(" %d\n", b);

    if(b==howmany)
    {
        break;  //for loop will be terminated when b==howmany
    }
}
    return 0;
}
