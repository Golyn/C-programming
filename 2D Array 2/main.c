#include <stdio.h>
#include <stdlib.h>

int main()
{
    //creating score sheet system
    int scores[3][2];
    //input values to array using a loop
    int row,column;

    for(row=0;row<3;row++) //dealing with the rows
    {
        for(column=0;column<2;column++)  //dealing with the columns
        {
            scores[row][column]=row*5
        }

    }

    //Output
    for(row=0;row<3;row++) //dealing with the rows
    {
        for(column=0;column<2;column++)  //dealing with the columns
        {
              printf("Index [%d][%d]--->%d\n",row,column,scores[row][column]);
        }

    }

    //printf("Hello world!\n");
    return 0;
}
