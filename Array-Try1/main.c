#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myArrays[6];
    int i;
    int sum;

    //adding values to the array using a loop
    for(i=0;i<6;i++)
    {
        printf("Enter a number for index---> %d:\n",i);
        scanf(" %d",&myArrays[i]);
    }
    for(i=0;i<6;i++)
    {
        printf("Index %d has ---> %d value\n",i,myArrays[i]);

    }

    sum=myArrays[0]+myArrays[1]+myArrays[2]+myArrays[3]+myArrays[4]+myArrays[5];
    printf("Total amt of Array = %d\n",sum);
    return 0;
}
