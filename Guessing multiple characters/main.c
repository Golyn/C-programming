#include <stdio.h>
#include <stdlib.h>
void guessGame();
int main()
{
    guessGame();
    return 0;
}
void guessGame()
{
    char guess[10]="Technology";
    char mychoice1;
    char mychoice2;
    char ans[3];
    int i;


    printf("\nWelcome To The Game Center\n\n");
    printf("Would you like to play? -- Yes / No \n");
    scanf("%s",&ans);


   // if(ans=="Y" || ans=="y")
   if(strcmp(ans, "yes") == 0)
   {
        printf("\nLet's roll\n\n");

        for(i=0;i<10;i++)
        {
           if(i!=3 && i!=6)
           {
                printf("%c", guess[i]);
           }
        }
        printf("\n\n");
        printf("Guess a character\n");
        scanf(" %c", &mychoice1);
        printf("Guess another character\n");
        scanf(" %c", &mychoice2);

        if(mychoice1==guess[3] && mychoice2==guess[6])
        {
             printf("\nCongratulations. You won\n");
             printf("\nThe full word is %s\n", guess);

        }else{
             printf("You lost\n");
        }

   }else
    {
        printf("Next time then. Have a nice day\n");
   }
}
