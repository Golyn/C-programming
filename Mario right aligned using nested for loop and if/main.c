#include <stdio.h>
#include <stdlib.h>
/*For loop: for every number of stairs;
-print spaces
-print hashes
-print new line
*/
int main()
{
    int height,i,j;
    do{
        printf("Enter a number\n");
        scanf(" %d",&height);
    }while(height<1 || height>8);

//make the pattern
 for(i=0;i<height;i++)
 {
     for(j=0;j<height+1;j++) //j<n+2 will start printing from ##
     {
         //based on i and j we print # or " "
         if(i+j>=height)  //(i+j>=n) will also start printing from ##
            printf("#");
         else
            printf(" ");
     }
    //now a single line or row is complete so we need a new line
   printf("\n");
 }

    return 0;
}
