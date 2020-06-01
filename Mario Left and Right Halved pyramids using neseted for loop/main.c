#include <stdio.h>
#include <stdlib.h>

int main()
{
      int n,i,j;
    do{
        printf("Enter height\n");
        scanf(" %d",&n);
    }while(n<1 || n>8);
 for(i=0;i<n;i++)
 {
     for(j=0;j<n-1-i;j++)  //printing spaces using the pattern generated n-1-i
     {
          printf(" ");
     }
     for(j=0;j<i+1;j++)  //printing hashes using the pattern generated i+1
     {
          printf("#");
     }


     //partition using " "in the middle as mirror
     printf(" ");

     //right half
     for(j=0;j<i+1;j++) //printing hashes using the pattern generated i+1
     {
         printf("#");
     }
    // for(j=0;j<n-1-i;j++) //printing spaces using the pattern generated n-1-i
     //{
    //     printf(" ");
     //}
  //now a single line or row is complete so we need a new line
   printf("\n");
 }
}
/* Note that the right half reverses the order of the printing hashes and spaces.
But trailing spaces at the right can be omitted entirely,
 so the last for loop can be removed:
        for(j = 0; j < n-1-i; ++j)
            printf(" ");
*/

