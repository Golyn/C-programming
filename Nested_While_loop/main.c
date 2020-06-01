#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int i,j;
    i=1;
    while(i<10)
    {
       j =1;
       while(j<10)
       {
         printf(" %d x %d =%d\n",j,i,i*j);
         j++;
       }
     i++;

     //creating spaces btn them
if(j==10)
{
    printf("\n\n");
}
    }
    return 0;
}
*/

int main()
{
    int i,j;
    i=1;
    while(i<10)
    {
        j=1;
        while(j<10)
        {
            printf(" %d x %d = %d\n",j,i,i*j);
            j++;
        }
   i++;

   //printing sides by side horizontally
   if(j==10)
   {
       printf("\t\t");
   }
    }

}
