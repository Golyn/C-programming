#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
//#include <string.h>

int main()
{
    char email[100];
    char password[100];
    char check[30] = ".com";
    char check2[30] = ".net";
    char *result;
    int len;
    int i;
    printf("Enter your email:\n");
    scanf(" %s", email);
    do
    {

       printf("Enter your password: \nPassword must not exceed 7 characters\n");
       for (i = 0; i < 7; i++) {

        // Get the hidden input using getch() method
        password[i] = getch();

        // Print * to show that a character is entered
        printf("*");
    }
      //password[i] = '\0';

    // Now the hidden input is stored in pwd[] So any operation can be done on it

    // Now the console will wait for a key to be pressed
    getch();
    len = strlen(password);
    }
    while(len>7);
    printf("\n");
    // Checking validity of email
    result = strstr(email, check ) || strstr(email, check2);
    if(result)
    {
        printf("\nEmail is Valid\n\n");

          /* Checking whether the password entered if it is the same as the one kept in variable.
          If the password is the samwhether
          */
           int compare = strcmp(password, password);

           if (compare == 0)
           {
               printf("YOU ARE AUTHORISED!\n");
           }
           else
           {
              printf("ARE YOU A HACKER?, UNAUTHORISED PLEASE!\n");
           }
    }
    else
    {
        printf("Invalid Email\nTry again\n");
    }


    return 0;
}
