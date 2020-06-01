#include <stdio.h>
#include <stdlib.h>

int main()
{
    long card;
    int keepcount = 0;
    int totalDigits;
    do
    {
        printf("Enter card number : ");
        scanf("%ld", &card);

    // Counting the number of digits
    // iterate until n becomes 0

       /* while( card!=0 )
        {
            card /= 10; // remove last digit from n in each iteration
            keepcount++; // increase count by 1 in each iteration
        }
        totalDigits = keepcount;
        */
    }while( card<0);

    return 0;
}
