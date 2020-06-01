#include <stdio.h>
#include <stdlib.h>

//Finding the average of 5 numbers
float getAverage()
{
    float aver=0;
    int n=5,a;
    int i;
    for(i=0;i<n;i++)
    {
       printf("Enter a number\n");
       scanf(" %d",&a);
       aver+=a;  //the value of a will be added to the current value o
    }

   printf("The average of the five numbers is %.2f\n",aver/n);
}

int main()
{
    getAverage();
    return 0;
}
