#include <stdio.h>
#include <stdlib.h>

//https://stackoverflow.com/questions/48390819/cs50-stuck-with-mario-pyramid?r=SearchResults&s=6|65.9196

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
   printf("\n");
 }

    return 0;
}
