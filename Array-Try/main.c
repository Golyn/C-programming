#include <stdio.h>
#include <stdlib.h>

//Findin average of total taken a day
int main()
{
    int meatbols[7];
    int totalmeatbols=0;
    int i;

    //inputing or adding values into the array
    for(i=0;i<7;i++)
    {
       printf("How many meatbols have u eaten today?\n");
       scanf(" %d", &meatbols[i]);
    }

    //looping through the array
    for(i=0;i<7;i++)
    {
       totalmeatbols = totalmeatbols+meatbols[i];
       printf("The Total Quantity of meatbols is %d\n\n",totalmeatbols);
    }
  int avg=totalmeatbols/7;
  printf("You ate an average of %d meatbols per day\n\n",avg);



    return 0;
}
