#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][4]= {
    {0,1,2,3},
    {4,5,6,7},
    {8,9,10,11}
   };

   // same as  int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

   int i,j;
   for(i=0;i<3;i++)
   {
       for(j=0;j<4;j++)
       {
           printf("a[%d][%d]= %d\n",i,j,a[i][j]);
       }
   }

    return 0;
}
