#include <stdio.h>
#include <stdio.h>



int main()
    {
     int i,j;
     int height = 8;
     // int spaces = height-1-i;
     // int hashes = 1+i;

// Half left aligned pyramid
     for (i=0; i<height; i++)
     {
         int hashes = 1+i;  // hashes = 2+i; starts with 2 hashes..
         for (j=0; j<hashes; j++)
         {
             printf("#");
         }
         printf("\n");
     }
    printf("\n\n");

// Half right aligned pyramid
     for (i=0; i<height; i++)
     {
         int spaces = height-1-i; // Spaces or dots pattern / formular
         for (j=0; j<spaces ; j++)
         {
             printf(" ");
         }

         int hashes = 1+i;  // Hashes pattern / formular
          for (j=0; j<hashes; j++)
         {
             printf("#");
         }
         printf("\n");
     }
        return 0 ;
    }
