#include <stdio.h>
#include <stdlib.h>

//Finding the average of N random numbers
int main()
{

    float aver=0;
    float n,a;
    printf("Enter any number of numbers\n");
    scanf(" %f",&n);
    int i;
    for(i=0;i<n;i++)
    {
       printf("Enter a number\n");
       scanf(" %f",&a);
       aver+=a;
    }

   printf("The average of the numbers is %f\n",aver/n);

    return 0;
}
