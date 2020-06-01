#include <stdio.h>
#include <stdlib.h>

void myGame();
int main()
{
    myGame();
    return 0;
}

void myGame()
{

   char myguess[]="Amankwah";
   char mychoice;
   int i;
   printf("====Welcome to the show====\n\n");

   for(i=0;i<8;i++)
   {
       if(i!=6)
       {
           printf(" %c",myguess[i]);
       }
   }
   printf("\n\n");
   printf("Guess a character\n");
   scanf(" %c",&mychoice);
   if(mychoice==myguess[6])
   {
       printf("Bingo!, You won");
   }else
   {
       printf("Sorry!, You Lost ");
   }
}
