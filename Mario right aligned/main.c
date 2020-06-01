#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,z;

    printf("Enter a number\n");
    scanf(" %d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            printf(" ");
        }
        for(z=0;z<i+1;z++)  //for(z=0;z<n;z++) prints the 2D # in horizontal or width of the hashes e.g. ###
        {                   // but (z=0;z<i+1;z++) includes the blank spaces e.g #.. ,##.
            printf("#");     //increasing z<i+1 will start printing 2 hashes ##
       }
      printf("\n");
    }

    return 0;
}
