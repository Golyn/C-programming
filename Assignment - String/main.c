#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char email[100];
    char password[100];
    char check[30] = ".com";
    char check2[30] = ".net";
    char *result;
    int len;
    printf("Enter your email:\n");
    scanf(" %s", email);
    do
    {

       printf("Enter your password: \nPassword must not exceed 7 characters\n");
       scanf(" %s", password);
       //printf()
       len = strlen(password);
    }
    while(len>7);

    // Checking validity of email
    result = strstr(email, check ) || strstr(email, check2);
    printf("\n");
    if(result)
    {
        printf("Email is Valid\n\n");

          /* Checking whether the password entered if it is the same as the one kept in variable.
          If the password is the samwhether
          */
           int compare = strcmp(password, password);

           if (compare == 0)
           {
               printf("YOU ARE AUTHORISED!\n\n");
           }
           else
           {
              printf("ARE YOU A HACKER?, UNAUTHORISED PLEASE!\n\n");
           }

    }
    else
    {
        printf("Invalid Email\nTry again\n");
    }


    return 0;
}
