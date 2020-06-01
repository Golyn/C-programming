#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,n,j;

    //do..while loop is for executing a command at least 1 b4 a condition becomes false
    do
    {
        //prompting user for input
        printf("Enter a number\n");
        scanf(" %d",&n);

  }while(n<1 || n>8); //prompt will keep on asking user as long as n is not between 1 and 8 inclusive

//looping throughto print out the values
    for(i=0;i<n;i++)
    {
         for(j=0;j<i+1;j++)  //the 2nd for loop prints the 2D # in horizontal or width of the hashes e.g. ###
         {
             printf("#");
         }
         //sfter every iteration of the inner looping printing, move to a new line
        printf("\n");

    }


    return 0;
}
