#include <stdio.h>
#include <stdlib.h>

int main()
{
    char guess[10]="Programmer";
    char choice;
    printf("Welcome to my guessing game\n");
    printf("===============================\n");
    int i;
    for(i=0;i<10;i++)
    {
         if(i==5)   //Another way is to use if(i!=5) and remove the continue statement
            continue;
        printf("%c", guess[i]);
    }

    printf("\n\n");
    printf("Guess which letter is missing\n");
    scanf(" %c",&choice);

    if(choice==guess[5])
    {
        printf("Excellent! Good point");
    }else
    {
       printf("Ooops! Wrong answer\n");
    }

    return 0;
}
