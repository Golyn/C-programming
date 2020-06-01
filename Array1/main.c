#include <stdio.h>
#include <stdlib.h>

int main()
{
    int collectionNum[4];  //Declaration of an array

    //assigning values to array storage locations or addresses
    collectionNum[0]=150;
    collectionNum[1]=259;
    collectionNum[2]=350;
    collectionNum[3]=450;

//Retrieving values from the array location
    printf("Index 0--->%d\n",collectionNum[0]);
    printf("Index 1--->%d\n",collectionNum[1]);
    printf("Index 2--->%d\n",collectionNum[2]);
    printf("Index 3--->%d\n",collectionNum[3]);

    char soft[100];
    *soft="Software"; //* is needed
    soft[0]='J';
    soft[1]='E';
    soft[2]='S';
    soft[3]='U';
    soft[4]='S';

    int i=0;
    for(i=0;i<=5;i++)
    {
        printf("%c\n",soft[i]);
    }
    return 0;
}
